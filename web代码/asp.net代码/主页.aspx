<%@ Page Language="C#" AutoEventWireup="true" CodeFile="主页.aspx.cs" Inherits="主页" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <title></title>
    <link href="Game.css" rel="stylesheet" />
</head>
<body>
    <form id="form1" runat="server">
    <div class="kuaiyangshi">
	<div class="kuaiyangshi1">
		<ul class="dingwei-head">
			<li>
                <asp:Button ID="LoginBt" runat="server" Text="登录" style="background-color:transparent;color:white;border-style: none; border-color: inherit; border-width: medium; " OnClick="LoginBt_Click" Font-Size="Large" Height="29px" Width="122px" />
            </li>
			<li>
                <asp:Label ID="RegisterLabel" runat="server" Text=""><a href="注册.aspx" style="color: #E6E9F8;text-decoration: none;">注册</a></asp:Label>
			</li>
			<li><a href="">游戏充值</a></li>
			<li><a href="">官方论坛</a></li>
			<li><a href="">客户服务</a></li>
			<li><a href="http://down.ali213.net/pcgame/Shh5.html">游戏下载</a></li>
		</ul>
	</div>
	<div class="kuaiyangshi2">
		
	</div>
	<div class="kuaiyangshi4">
		<div class="kuaiyangshi4-fenkuai-left">
			<span></span>
		</div>
	</div>
	<div class="kuaiyangshi5">
		<div class="kuaiyangshi5-fenkuai-left">
			
		</div>
		<div class="kuaiyangshi5-fenkuai-right">
			<ul>
				<li>
                    <asp:Button ID="GameIntroduction" runat="server" Text="游戏简介" style="color:white;border:none;background-color:transparent;text-align:left;" Font-Size="Large" OnClick="GameIntroduction_Click"/>

				</li>
				<li><a  href="图片浏览.aspx">精美图片</a></li>
				<li><a href="http://down.ali213.net/pcgame/Shh5.html">游戏下载</a></li>
			</ul>
		</div>
	</div>
	<div class="kuaiyangshi6">
		<a href="https://www.baidu.com/"><img src="img\knife.png" class="dingwei"/></a>
		<span class="wenzidingwei">屠龙宝刀点击就送</span>
	</div>
</div>
    </form>
</body>
</html>
