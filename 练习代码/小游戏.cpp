#include<iostream> 
#include "stdio.h"
#include "conio.h" /*所需的头文件*/

int on; /*声明具有开关作用的全局变量*/
static int score; /*声明静态的记分器变量*/

/* 定义开始界面函数*/

int open()
{
setviewport(100,100,500,380,1); /*设置图形窗口区域*/
setcolor(4); /*设置作图色*/
rectangle(0,0,399,279); /*以矩形填充所设的图形窗口区域*/
setfillstyle(SOLID_FILL,7); /*设置填充方式*/
floodfill(50,50,4); /*设置填充范围*/
setcolor(8);
settextstyle(0,0,9); /*文本字体设置*/
outtextxy(90,80,"BALL"); /*输出文本内容*/
settextstyle(0,0,1);
outtextxy(110,180,"version 1.0");
outtextxy(110,190,"made by ddt");
setcolor(128);
settextstyle(0,0,1);
outtextxy(120,240,"Press any key to continue......");
}

/*定义退出界面函数*/
int quitwindow()
{
char s[100]; /*声明用于存放字符串的数组*/
setviewport(100,150,540,420,1);
setcolor(YELLOW);
rectangle(0,0,439,279);
setfillstyle(SOLID_FILL,7);
floodfill(50,50,14);
setcolor(12);
settextstyle(0,0,8);
outtextxy(120,80,"End");
settextstyle(0,0,2);
outtextxy(120,200,"quit? Y/N");
sprintf(s,"Your score is:%d",score);/*格式化输出记分器的值*/
outtextxy(120,180,s);
on=1; /*初始化开关变量*/
}

/*主函数*/
main()
{
int gdriver,gmode;
gdriver=DETECT; /*设置图形适配器*/
gmode=0; /*设置图形模式*/
registerbgidriver(EGAVGA_driver);/* 注册BGI驱动后可以不需要.BGI文件的支持运行 */
initgraph(&gdriver,&gmode,"");
setbkcolor(14);
open(); /*调用开始界面函数*/
getch(); /*暂停*/

while(1) /*此大循环体控制游戏的反复重新进行*/
{
int driver,mode,l=320,t=400,r,a,b,dl=5,n,x=200,y=400,r1=10,dx=-2,dy=-2;/*初始化小球相关参数*/
int left[100],top[100],right[100],bottom[100],i,j,k,off=1,m,num[100][100];/*方砖阵列相关参数*/
static int pp;
static int phrase; /*一系列起开关作用的变量*/
int oop=15;
pp=1;
score=0;
driver=DETECT;
mode=VGA;
registerbgidriver(EGAVGA_driver);
initgraph(&driver,&mode,"");
setbkcolor(10);
cleardevice(); /*图形状态下清屏*/
clearviewport(); /*清除现行图形窗口内容*/
b=t+6;
r=l+60;
setcolor(1);
rectangle(0,0,639,479);
setcolor(4);
rectangle(l,t,r,b);
setfillstyle(SOLID_FILL,1);
floodfill(l+2,t+2,4);

for(i=0,k=0;i<=6;i++) /*此循环绘制方砖阵列*/
{
top[i]=k;
bottom[i]=top[i]+20;
k=k+21;
oop--;
for(j=0,m=0;j<=7;j++)
{
left[j]=m;
right[j]=left[j]+80;
m=m+81;
setcolor(4);
rectangle(left[j],top[i],right[j],bottom[i]);
setfillstyle(SOLID_FILL,j+oop);
floodfill(left[j]+1,top[i]+1,4);
num[i][j]=pp++;
}
}

while(1) /*此循环控制整个动画*/
{
while(!kbhit())
{
x=x+dx; /*小球运动的圆心变量控制*/
y=y+dy;
if(x+r1>r||x+r1<r)
{ phrase=0;}
if((x-r1<=r||x+r1<=r)&&x+r1>=l)
{
if(y<t)
phrase=1;
if(y+r1>=t&&phrase==1)
{dy=-dy;y=t-1-r1;}
}

if(off==0)
continue;

for(i=0;i<=6;i++) /*此循环用于判断、控制方砖阵列的撞击、擦除*/

for(j=0;j<=7;j++)
{
if((x+r1<=right[j]&&x+r1>=left[j])||(x-r1<=right[j]&&x-r1>=left[j]))
{
if(( y-r1>top[i]&&y-r1<=bottom[i])||(y+r1>=top[i]&&y+r1<=bottom[i] ))
{
if(num[i][j]==0)
{continue; }
setcolor(10);
rectangle(left[j],top[i],right[j],bottom[i]);
setfillstyle(SOLID_FILL,10);
floodfill(left[j]+1,top[i]+1,10);
dy=-dy;
num[i][j]=0;
score=score+10;
printf("%d\b\b\b",score);
}
}
if((y+r1>=top[i]&&y+r1<=bottom[i])||(y-r1>=top[i]&&y-r1<=bottom[i]))
{
if((x+r1>=left[j]&&x+r1<right[j])||(x-r1<=right[j]&&x-r1>left[j]))
{
if(num[i][j]==0)
{ continue;}
setcolor(10);
rectangle(left[j],top[i],right[j],bottom[i]);
setfillstyle(SOLID_FILL,10);
floodfill(left[j]+1,top[i]+1,10);
dx=-dx;
num[i][j]=0;
score=score+10;
printf("%d\b\b\b",score);
}
}
}

if(x+r1>639) /*控制小球的弹射范围*/
{dx=-dx;x=638-r1;}
if(x<=r1)
{dx=-dx;x=r1+1;}
if(y+r1>=479)
{off=0;quitwindow();break;}
if(y<=r1)
{dy=-dy;y=r1+1;}
if(score==560)
{off=0;quitwindow();break;}
setcolor(6);
circle(x,y,r1);
setfillstyle(SOLID_FILL,14);
floodfill(x,y,6);
delay(1000);
setcolor(10);
circle(x,y,r1);
setfillstyle(SOLID_FILL,10);
floodfill(x,y,10);
}

a=getch();
setcolor(10);
rectangle(l,t,r,b);
setfillstyle(SOLID_FILL,10);
floodfill(l+2,t+2,10);
if(a==77&&l<=565) /*键盘控制设定*/
{dl=20;l=l+dl;}
if(a==75&&l>=15)
{dl=-20;l=l+dl;}
if(a=='y'&&on==1)
break;
if(a=='n'&&on==1)
break;
if(a==27)
{quitwindow();off=0;}
r=l+60;
setcolor(4);
rectangle(l,t,r,b);
setfillstyle(SOLID_FILL,1);
floodfill(l+5,t+5,4);
delay(100);
}
if(a=='y'&&on==1) /*是否退出游戏*/
{break;}
if(a=='n'&&on==1)
{ continue;}
}
closegraph();

} 

