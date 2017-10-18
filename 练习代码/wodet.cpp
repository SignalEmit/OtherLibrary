#include<stdio.h>
#define n 100
typedef struct
{int yingyu;
int shuxue;
int yuwen;
int xuehao;
char xingming[30];
}s;
s stdent[n];
void xingxipaixu(int l);
int main()
{int l,i,m;
printf("输入学生人数");
scanf("%d",&l);
printf("输入信息：一次是姓名 学号 英语成绩 数学成绩 语文成绩\n");
for(i=0;i<l;i++) 
scanf("%s%d%d%d%d",stdent[i].xingming,&stdent[i].xuehao,&stdent[i].yingyu,&stdent[i].shuxue,&stdent[i].yuwen);
printf("信息浏览\n");
for(i=0;i<l;i++) 
printf("学生姓名%s,学生学号%d,英语成绩%d,数学成绩%d,语文成绩%d\n",stdent[i].xingming,stdent[i].xuehao,stdent[i].yingyu,stdent[i].shuxue,stdent[i].yuwen);
printf("信息排序\n");
xingxipaixu(l);
for(i=0;i<l;i++) 
printf("%s  %d  %d  %d  %d\n",stdent[i].xingming,stdent[i].xuehao,stdent[i].yingyu,stdent[i].shuxue,stdent[i].yuwen);
return 0;
}
void xingxipaixu(int l)
{s daihuan;
int a[n],i,j,t;
for(t=0;t<l;t++)
a[t]=stdent[i].yingyu+stdent[i].shuxue+stdent[i].yuwen;
for(i=1;i<l;i++)
  for(j=0;j<l-1;j++)
    if(a[j]>a[j+1])
    {daihuan=stdent[j];
    stdent[j]=stdent[j+1];
    stdent[j]=daihuan;
	}

}



