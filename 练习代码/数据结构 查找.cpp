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
int find(SeqList l,int e);
printf("һ������n������");
scanf("%d",&l.last);
printf("�����Ǹ���");
for(o=0;o<l.last;o++)
scanf("%d",&l.elem[o]);
printf("����һ��ʹ�õ���\n");
scanf("%d",&w); 
m=find(l,w);
if(m==NO) 
printf("û�ҵ�");
else
printf("�ҵ���");
return 0;
}
int find(SeqList l,int e)
{int i;
i=0;
while((i<=l.last)&&(l.elem[i]!=e))
i++;
if(i<=l.last)
return (YES);
else
return (NO); } 
