#include<stdio.h>
#define Listsize 100 
typedef int DataType;
typedef struct
{
	DataType list[Listsize];
	int length;
	
}SeqList;
int DeleteList(SeqList *L,int i,DataType *e)
{
	int j;
	if(L->length <=0)
	{
		printf("顺序表一空不能删除\n");
		return 0;
	}
	else if(i<1||i>L->length ){
		printf("删除位置不合适\n");
		return -1;
	}
	else{
		*e=L->list [i-1];
		for(j=i;j<=L->length -1;j++)
			L->list [j-1]=L->list [j];
			L->length =L->length -1;
			return 1;
	}	
}
void InitList(SeqList *L)
{
	L->length=0;
}
int GetElem(SeqList L,int i,DataType *e)
{
	if(i<1||i>L.length)
	return -1;
	*e=L.list[i-1];
	return 1; 
}
int InsertList(SeqList *L,int i,DataType e)
{
	int j;
	if(i<1||i>L->length+1)
{
	printf("charuweizhibuhefa!\n");
	return -1;
}
else if(L->length>=Listsize){
	printf("man\n");
	return 0;
}
else{
	for(j=L->length;j>=i;j--)
	L->list[j]=	L->list[j-1];	
		L->list[i-1]=e;
			L->length=	L->length+1;
			return 1;
}
}
int LocateElem(SeqList L,DataType e){
	int i;
	
	for(i=0;i<L.length ;i++)
	if(L.list [i]==e)
	return i=1;
	return 0; 
}
void DelElem(SeqList *A,SeqList *B);
int main()
{
	int i,j,f;
	DataType e;
	SeqList A,B;
	InitList(&A);
	InitList(&B);
	for(i=1;i<=10;i++){
		if(InsertList(&A,i,i)==0){
			printf("weizhibuhefa");
			return 0;
		}
	}
	for(i=1,j=1;j<=6;i=i+2,j++){
		if(InsertList(&B,j,i*2)==0){
			printf("weizhibuhefa");
			return 0;
		}
	}
	printf("shunxunbiaoAdeyuansu:\n");
	for(i=1;i<=A.length;i++)
	{
		f=GetElem(A,i,&e);
		if(f==1)
		printf("%4d",e);
	}
	printf("\n");
	printf("shunxunbiaoBdeyuansu:\n");
	for(i=1;i<=B.length;i++)
	{
		f=GetElem(B,i,&e);
		if(f==1)
		printf("%4d",e);
	}
	printf("\n");
	printf("jiangAzhongBshanchu:\n");
	DelElem(&A,&B);
	for(i=1;i<=A.length;i++)
	{
		f=GetElem(A,i,&e);
		if(f==1)
		printf("%4d",e);
	}
	printf("\n");
}
void DleElem (SeqList *A,SeqList B){
	int i,f,pos;
	DataType e;
	for(i=1;i<=B.length;i++)
	{
		f=GetElem(B,i,&e);
		if(f==1){
			pos=LocateElem(*A,e);
			if(pos>0)
				DeleteList(A,pos,&e);
			}
	}
}

