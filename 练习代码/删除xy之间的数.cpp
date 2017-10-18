#include<stdio.h>
typedef struct
{int a[100];

}woca;
woca s;
 void sss(int *l,int x,int y);
int main()
{int o,x,y,last;
printf("输入n个数");
scanf("%d",&last);
printf("输入的数字分别是");
for(o=1;o<=last;o++)
scanf("%d",&s.a[o]);
printf("删除x到y之间的数字xy分别是");
scanf("%d%d",&x,&y);
sss(&s,x,y);
printf("输出");
for(o=1;o<=(last-(x-y+1));o++)
printf("%4d",&s.a[o]);
 } 
 void sss(int *l,int x,int y)
 {if((x-y+1)<=1)
 printf("你几把栅格屁");
 else
 {l->s.a[x]=l->s.a[y];
 }
 }
 
