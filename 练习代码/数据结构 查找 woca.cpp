#include<stdio.h>
#define MAXSIZE 100
#define YES 1
#define NO 0
typedef struct
{int elem[MAXSIZE];
int last;
}SeqList;
SeqList l;
int main()
{int o,m,w;
printf("输入五个数");
for(o=0;o<5;o++)
scanf("%d",&l.elem[o]);
printf("输入一个使用的数\n");
scanf("%d",&w); 
m=find(int l.elem,int w);
if(m==NO)
printf("没找到");
else
printf("找到了");
return 0;
}>
int find(int l;int e)
{int i;
i=0;
while((i<=l.last)&&(l.elem[i]!=e))
i++;
if(i<=l.last)
return (YES);
else
return (NO); } 
