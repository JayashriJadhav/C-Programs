#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,**PPNODE;

void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("|%d|->",Head->data);
		Head=Head->next;
	}
	printf("NULL\n");
	
}
int Count(PNODE Head)
{
	int iCnt=0;
	while(Head!=NULL)
	{
		iCnt++;
		Head=Head->next;
	}
  return iCnt;	
}
void InsertFirst(PPNODE Head,int no)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next= NULL;
	
	if(*Head== NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->next=*Head;
		*Head=newn;
	}
		
}
void InsertLast(PPNODE Head,int no)
{
	PNODE newn=NULL;
	PNODE temp =*Head;
	
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next= NULL;
	
	if(*Head== NULL)
	{
		*Head=newn;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}
	
}
void DeleteFirst(PPNODE Head)
{
	PNODE temp=*Head;
	
	if(*Head!=NULL)
	{
		*Head=(*Head)->next;
		free(temp);
	}
	
}
void DeleteLast(PPNODE Head)
{
	PNODE temp=*Head;
	
	if(*Head==NULL)
	{
		return;
	}
	else if((*Head)->next==NULL)
	{
		free(*Head);
		*Head=NULL;
	}
	else
	{
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
	}
}
void InsertAtPos(PPNODE Head,int no,int iPos)
{
	int size=0;
	PNODE newn=NULL;
	PNODE temp=*Head;
	int i=0;
	size=Count(*Head);
	
	if((iPos<1)||(iPos>size+1))  //filter for invalid position
	{
		printf("Invalid position\n");
		return;
	}
	if(iPos==1)    //fist position
	{
		InsertFirst(Head,no);
	}
	else if(iPos==size+1)   //last position
	{
		InsertLast(Head,no);
	}
	else          //inbetween position
	{
		newn=(PNODE)malloc(sizeof(NODE));
		
		newn->data=no;
		newn->next=NULL;
		
		for(i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next=newn;
	}
}
void DeleteAtPos(PPNODE Head,int iPos)
{
	int size=0;
	PNODE temp=*Head;
	PNODE targeted=NULL;
	int i=0;
	size=Count(*Head);
	
	if((iPos<1)||(iPos>size))  //filter for invalid position
	{
		printf("Invalid position\n");
		return;
	}
	if(iPos==1)    //fist position
	{
		DeleteFirst(Head);
	}
	else if(iPos==size)   //last position
	{
		DeleteLast(Head);
	}
	else          //inbetween position
	{
		for(i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		targeted=temp->next;
		temp->next=targeted->next;
		free(targeted);
		
	}
}

int main()
{
	PNODE first=NULL;
	int iChoice=1,value=0,iRet=0,pos=0;
	
	while(iChoice!=0)
	{
		printf("\n______________________\n");
		printf("enter the desired operation that you want to perform on linked list\n");
		printf("1:insert the node at first position\n");
		printf("2:insert the node at last position\n");
		printf("3:insert the node at desired position\n");
		printf("4:delete the first node\n");
		printf("5:delete the last node\n");
		printf("6:delete the node at desired position\n");
		printf("7:Display contents of linked list\n");
		printf("8:Count the number of nodes from linked list\n");
		printf("0:Terminate the application\n");
		printf("\n______________________\n");
		scanf("%d",&iChoice);
		
		switch(iChoice)
		{
			case 1:
			printf("enter tha data to insert\n");
			scanf("%d",&value);
			InsertFirst(&first,value);
			break;
			
			
			case 2:
			printf("enter tha data to insert\n");
			scanf("%d",&value);
			InsertLast(&first,value);
			break;
			
			
			case 3:
			printf("enter tha data to insert\n");
			scanf("%d",&value);
			printf("enter the position\n");
			scanf("%d",&pos);
			InsertAtPos(&first,value,pos);
			break;
			
			
			case 4:
			DeleteFirst(&first);
			break;
			
			
			case 5:
			DeleteLast(&first);
			break;
			
			
			case 6:
			printf("enter tha position\n");
			scanf("%d",&pos);
			DeleteAtPos(&first,pos);
			break;
			
			
			case 7:
			printf("elements of linked list are\n");
			Display(first);
			break;
			
			case 8:
			iRet=Count(first);
			printf("number of elements are:%d\n",iRet);
			break;
			
			case 0:
			printf("thank you for using Marvellous linked list\n");
			break;
			
			default:
			printf("please enter proper choice\n");
			break;
			
		}
	}
	return 0;
}
		
		
		