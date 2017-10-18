#include<stdio.h>
typeef struct Node
{int data;
struct Node *next;
}Node,*LinkList;
Node l;
InitList(LinkList *l)
{*l=(LinkList)malloc(sizeof(Node));
(*l)->next=Null;
}
void s(LinkList l)
{Node *s;
char c;
int flag=1;
while(flag)
{c=getchar();
if(c!='$')
{s=(Node *)malloc(sizeof(Node));
s->data=c;
s->next=l->next;
l->next=s; 
}
else flag=0;
}
}
int main()
{void s(LinkList l);

}

