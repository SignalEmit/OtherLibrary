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
printf("����ѧ������");
scanf("%d",&l);
printf("������Ϣ��һ�������� ѧ�� Ӣ��ɼ� ��ѧ�ɼ� ���ĳɼ�\n");
for(i=0;i<l;i++) 
scanf("%s%d%d%d%d",stdent[i].xingming,&stdent[i].xuehao,&stdent[i].yingyu,&stdent[i].shuxue,&stdent[i].yuwen);
printf("��Ϣ���\n");
for(i=0;i<l;i++) 
printf("ѧ������%s,ѧ��ѧ��%d,Ӣ��ɼ�%d,��ѧ�ɼ�%d,���ĳɼ�%d\n",stdent[i].xingming,stdent[i].xuehao,stdent[i].yingyu,stdent[i].shuxue,stdent[i].yuwen);
printf("��Ϣ����\n");
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



