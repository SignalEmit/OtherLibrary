using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data;
using System.Data.SqlClient;


public partial class _Default : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
       
    }

    protected void Button1_Click(object sender, EventArgs e)
    {
       
        SqlConnection DataBaseConnection = new SqlConnection();
         DataBaseConnection.ConnectionString = "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\M\\Documents\\User.mdf;Integrated Security=True;Connect Timeout=30";
        DataBaseConnection.Open();
         string SetDatabaseString = "select * from UserMessage where ID='"+UserIDTextBox.Text+"' and Passward='"+PasswardTextBox.Text+"'";
        //string SetDatabaseString = "insert into UserMessage(ID,Passward,is_member) values('wer','asd''zzz')";
        SqlCommand newConnection = new SqlCommand(SetDatabaseString, DataBaseConnection);

        SqlDataReader Data = newConnection.ExecuteReader();

        if(Data.Read())
        {
           
            Session["User"] ="用户：" +UserIDTextBox.Text;
            var response = base.Response;
            response.Redirect("http://localhost:55480/主页.aspx", false);
            
        }
      
        else
        {
            ScriptManager.RegisterStartupScript(this, this.GetType(), "warning", "alert('账号或密码错误')", true);
        }

    }
   
}
