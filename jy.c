#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node 
{
	int data;
	struct node* nxt;
}node;
node* head=NULL;
void create()
{
  
	 node* newnode;
	newnode=( node*) malloc(sizeof( node));
	newnode->data=4;
	newnode->nxt=NULL;
	if(head==NULL)
	{
		head->nxt=newnode;
	}
	else
	{

		newnode->nxt=head->nxt;
		head->nxt=newnode;
	}
	printf("%d\n",newnode->data);

}
void print()
{
	 node* p=head;
	while(p->nxt!=NULL)
	{
		printf("%d",p->data);
		p=p->nxt;
	}
}
int main()
{
    create();
    create();
    print();
	return 0;
}