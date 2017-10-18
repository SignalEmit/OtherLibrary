using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data;
using System.Data.SqlClient;

public partial class 登陆 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }



    protected void Button1_Click(object sender, EventArgs e)
    {
        if (UserAccountTextBox.Text.Trim() == "" || PasswardTextBox.Text.Trim()== "" || IDCardTextBox.Text.Trim() == "")
        {
            ScriptManager.RegisterStartupScript(this, this.GetType(), "warning", "alert('账号密码省份证不能为空')", true);
            return;
        }
        else if(PasswardTextBox.Text.Trim() != PasswardAgainTextBox.Text.Trim())
        {
            ScriptManager.RegisterStartupScript(this, this.GetType(), "warning", "alert('密码输入不一致')", true);
            return;
        }
        
        SqlConnection DataBaseConnection = new SqlConnection();
        DataBaseConnection.ConnectionString = "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\M\\Documents\\User.mdf;Integrated Security=True;Connect Timeout=30";
        DataBaseConnection.Open();

        /******************************8查找是否有数据重复*********************************/
        string SetSelectString = "select * from UserMessage where ID='" + UserAccountTextBox.Text.Trim() + "'";
        SqlCommand SelectID = new SqlCommand(SetSelectString, DataBaseConnection);

        SqlDataReader data = SelectID.ExecuteReader();
        if (data.Read())
        {
            ScriptManager.RegisterStartupScript(this, this.GetType(), "warning", "alert('此账号以被注册')", true);
            
        }
        else
        {
            data.Close();               //关闭和数据库关联的另一个操作
       
            /***********************88插入*************************************************/
            string SetDatabaseString = "insert into UserMessage(ID,Passward,is_member) values('" + UserAccountTextBox.Text.Trim() + "','" + PasswardTextBox.Text.Trim() + "','" + IDCardTextBox.Text.Trim() + "')";

            SqlCommand newConnection = new SqlCommand(SetDatabaseString, DataBaseConnection);
            newConnection.ExecuteNonQuery();
            ScriptManager.RegisterStartupScript(this, this.GetType(), "warning", "alert('注册成功')", false);
            var response = base.Response;
            response.Redirect("http://localhost:55480/登陆.aspx", false);
        }
        DataBaseConnection.Close();                     //关闭数据库
    }
}