using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;



public partial class 主页 : System.Web.UI.Page
{

    protected void Page_Load(object sender, EventArgs e)
    {
        if(Session["User"]!=null)
        {
            LoginBt.Text = Session["User"].ToString();
            LoginBt.Enabled = false;
            RegisterLabel.Text = "";
        }

    }

    protected void LoginBt_Click(object sender, EventArgs e)
    {
        var response = base.Response;
        response.Redirect("http://localhost:55480/登陆.aspx", false);
    }

    protected void GameIntroduction_Click(object sender, EventArgs e)
    {
        var response = base.Response;
        response.Redirect("http://localhost:55480/简介.aspx", false);
    }
}
