#include<iostream> 
#include "stdio.h"
#include "conio.h" /*�����ͷ�ļ�*/

int on; /*�������п������õ�ȫ�ֱ���*/
static int score; /*������̬�ļǷ�������*/

/* ���忪ʼ���溯��*/

int open()
{
setviewport(100,100,500,380,1); /*����ͼ�δ�������*/
setcolor(4); /*������ͼɫ*/
rectangle(0,0,399,279); /*�Ծ�����������ͼ�δ�������*/
setfillstyle(SOLID_FILL,7); /*������䷽ʽ*/
floodfill(50,50,4); /*������䷶Χ*/
setcolor(8);
settextstyle(0,0,9); /*�ı���������*/
outtextxy(90,80,"BALL"); /*����ı�����*/
settextstyle(0,0,1);
outtextxy(110,180,"version 1.0");
outtextxy(110,190,"made by ddt");
setcolor(128);
settextstyle(0,0,1);
outtextxy(120,240,"Press any key to continue......");
}

/*�����˳����溯��*/
int quitwindow()
{
char s[100]; /*�������ڴ���ַ���������*/
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
sprintf(s,"Your score is:%d",score);/*��ʽ������Ƿ�����ֵ*/
outtextxy(120,180,s);
on=1; /*��ʼ�����ر���*/
}

/*������*/
main()
{
int gdriver,gmode;
gdriver=DETECT; /*����ͼ��������*/
gmode=0; /*����ͼ��ģʽ*/
registerbgidriver(EGAVGA_driver);/* ע��BGI��������Բ���Ҫ.BGI�ļ���֧������ */
initgraph(&gdriver,&gmode,"");
setbkcolor(14);
open(); /*���ÿ�ʼ���溯��*/
getch(); /*��ͣ*/

while(1) /*�˴�ѭ���������Ϸ�ķ������½���*/
{
int driver,mode,l=320,t=400,r,a,b,dl=5,n,x=200,y=400,r1=10,dx=-2,dy=-2;/*��ʼ��С����ز���*/
int left[100],top[100],right[100],bottom[100],i,j,k,off=1,m,num[100][100];/*��ש������ز���*/
static int pp;
static int phrase; /*һϵ���𿪹����õı���*/
int oop=15;
pp=1;
score=0;
driver=DETECT;
mode=VGA;
registerbgidriver(EGAVGA_driver);
initgraph(&driver,&mode,"");
setbkcolor(10);
cleardevice(); /*ͼ��״̬������*/
clearviewport(); /*�������ͼ�δ�������*/
b=t+6;
r=l+60;
setcolor(1);
rectangle(0,0,639,479);
setcolor(4);
rectangle(l,t,r,b);
setfillstyle(SOLID_FILL,1);
floodfill(l+2,t+2,4);

for(i=0,k=0;i<=6;i++) /*��ѭ�����Ʒ�ש����*/
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

while(1) /*��ѭ��������������*/
{
while(!kbhit())
{
x=x+dx; /*С���˶���Բ�ı�������*/
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

for(i=0;i<=6;i++) /*��ѭ�������жϡ����Ʒ�ש���е�ײ��������*/

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

if(x+r1>639) /*����С��ĵ��䷶Χ*/
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
if(a==77&&l<=565) /*���̿����趨*/
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
if(a=='y'&&on==1) /*�Ƿ��˳���Ϸ*/
{break;}
if(a=='n'&&on==1)
{ continue;}
}
closegraph();

} 

