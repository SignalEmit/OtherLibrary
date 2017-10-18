<%@ Page Language="C#" AutoEventWireup="true" CodeFile="登陆.aspx.cs" Inherits="_Default" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <title></title>
    <link href="登陆.css" rel="stylesheet" />
</head>
<body style="background-image: url(img/027fb3de9c82d158f7d0f742800a19d8bd3e426d.jpg);background-size:100% 650px;">
    <form id="form1" runat="server">
        
        <asp:Label ID="Label3" runat="server" Font-Bold="True" Font-Italic="False" Font-Size="XX-Large" Font-Strikeout="False" ForeColor="White" Text="欢迎登录"></asp:Label>
    <div>
        
        <asp:Label ID="Label1" runat="server" Text="用户名" ForeColor="White"></asp:Label>
        <asp:TextBox ID="UserIDTextBox" runat="server" Width="148px" Height="18px"></asp:TextBox>
        
    </div>
    <div>
        <asp:Label ID="Label2" runat="server" Text="密&nbsp;&nbsp;&nbsp;&nbsp;码" ForeColor="White"></asp:Label>
        <asp:TextBox ID="PasswardTextBox" runat="server" Height="18px" Width="148px"></asp:TextBox>
    </div>
    <div>
        <p>
            <asp:Button ID="Button1" runat="server" Text="登录" BackColor="White" 
                BorderColor="White" Height="25px" style="margin-left: 12px" Width="47px" 
                OnClick="Button1_Click" OnCommand="Button1_Click" />
            <asp:Button ID="Button2" runat="server" Text="取消" Font-Bold="False" Font-Overline="False" Font-Underline="False" BackColor="White" BorderColor="White" Height="25px" Width="47px" />
        </p>
        <p>
            <asp:Button ID="Button3" runat="server" Text="注册 " BackColor="White" 
                BorderColor="White" Height="25px" style="margin-left: 128px" Width="47px" PostBackUrl="~/注册.aspx" />
        </p>
        <p>
            <asp:Button ID="Button4" runat="server" Text="忘记密码？" BackColor="White" BorderColor="White" Height="25px" style="margin-left: 130px" />
        </p>

     </div>
           
    </form>
</body>
</html>
