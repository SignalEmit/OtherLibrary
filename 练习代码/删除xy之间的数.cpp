#include<stdio.h>
typedef struct
{int a[100];

}woca;
woca s;
 void sss(int *l,int x,int y);
int main()
{int o,x,y,last;
printf("����n����");
scanf("%d",&last);
printf("��������ֱַ���");
for(o=1;o<=last;o++)
scanf("%d",&s.a[o]);
printf("ɾ��x��y֮�������xy�ֱ���");
scanf("%d%d",&x,&y);
sss(&s,x,y);
printf("���");
for(o=1;o<=(last-(x-y+1));o++)
printf("%4d",&s.a[o]);
 } 
 void sss(int *l,int x,int y)
 {if((x-y+1)<=1)
 printf("�㼸��դ��ƨ");
 else
 {l->s.a[x]=l->s.a[y];
 }
 }
 
