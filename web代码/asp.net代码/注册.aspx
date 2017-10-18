<%@ Page Language="C#" AutoEventWireup="true" CodeFile="注册.aspx.cs" Inherits="登陆" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <title></title>
    <link href="denglu.css" rel="stylesheet" />
    </head>
<body>
    <form id="form1" runat="server" class="bg">
        <div style="height:150px"></div>
	    <div  style="height: 274px; width:380px; border:1px solid white;margin-left:60%;padding-top:50px;padding-left:25px">
            <asp:Label ID="Label5" runat="server" Text="欢迎注册" Font-Size="XX-Large" ForeColor="White" style="padding-left:30%;"></asp:Label><br /><br />
            <asp:Label ID="Label1" runat="server" Text="账&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;号：&nbsp;" ForeColor="White"></asp:Label>
            <asp:TextBox ID="UserAccountTextBox" runat="server" Height="17px" Width="220px"></asp:TextBox>
            <br />
            <br />
            <asp:Label ID="Label2" runat="server" Text="密&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;码：&nbsp;" ForeColor="White"></asp:Label>
            <asp:TextBox ID="PasswardTextBox" runat="server"  Width="220px" Height="17px" TextMode="Password"></asp:TextBox>
            <br />
            <br />
            <asp:Label ID="Label3" runat="server" Text="确&nbsp;认&nbsp密&nbsp;码：&nbsp;" ForeColor="White"></asp:Label>
            <asp:TextBox ID="PasswardAgainTextBox" runat="server"  Width="220px" Height="17px" TextMode="Password"></asp:TextBox>
            <br />
            <br />
            <asp:Label ID="Label4" runat="server" Text="身&nbsp;&nbsp;份&nbsp;&nbsp;证&nbsp;：&nbsp;" ForeColor="White"></asp:Label>
            <asp:TextBox ID="IDCardTextBox" runat="server" Width="220px" Height="17px"></asp:TextBox>
            <br />
            <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="确定" style="margin-left:40%;margin-top:20px;color:#1ABC9C;background:#E6F8F5;width:50px;"/>
        </div> 

    </form>
</body>
</html>
