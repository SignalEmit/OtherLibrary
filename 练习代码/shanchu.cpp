#include<stdio.h>
#define  MAXSIZE 100
typedef struct{
	ElemType elem[MAXSIZE];
	int last;
	
}SeqList;
int DelList(SeqList *L,int i,ElemType *e)
{
	int k;
	if((i<1)||(i<L->last+1))
	{
		printf("删除位置不合法！")；
		return(ERROR); 
	}
	*e=L->elem [i-1];
	for(k=i;i<=L->last;k++)
		L->elem [k-1]=L->elem [k];
		L->last --;
		return(OK);
 }
