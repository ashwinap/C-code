/*****************************************************************
**
** Name: Ashwin AP		 	File name: main.c
** 
** Description:Stack
**
** Date Created:3-Feb-2015		Updated:3-Feb-2015
**
**
**Copyright all reserverd by Ashwin
********************************************************************/

#include<stdio.h>
#include<stdlib.h>


struct node
{
	struct node *next;
	int data;
};

struct node * create_node(int num)
{
	struct node *temp;
	temp = (struct node *) malloc(sizeof(struct node));
	temp->data = num;
	temp->next = NULL;

	return temp;  
}
struct node * push(struct node *temp,int num) // inster_last
{
	struct node *head;
	struct node *temp1;

	if(NULL == temp)
	{
		head = create_node(num);
		return head;	
	}
	else
	{
		head = temp;
		while(NULL != temp->next)
	 	temp = temp->next;
		temp1 = create_node(num);
		temp->next = temp1;
		return head; 
	}
}

struct node * pop(struct node *head)   // delete_last
{
	struct node *temp=head;
	struct node *prev;
	
	if(NULL == temp)
	{
		return head;
	}	

	if(NULL == temp->next)
	{
		head = temp->next;
		free(temp);
		return head;
	}
	else
	{
		while(NULL != temp->next)
		{
			prev = temp;
			temp = temp->next;
		}	

        	prev->next=NULL;
		free(temp);
	}
	return head;
}	



void display(struct node *head)
{	
	if(NULL == head)
		printf("\n STACK is empty");
	else
	{
		printf("\n");
		
		for(;NULL != head; head = head->next)
		{
			printf(" %d",head->data);
			printf("->");
		}
		printf("NULL");
		printf("\n");
	}		
}

void free_memory(struct node *head)
{
	struct node *temp;
	while(NULL != head)
	{
		temp = head->next; //removing valgrind errors
		free(head);
		head = temp;
	}
	printf("\n memory free done");
}

int main()
{	
	int i,num,data1;	
	struct node *head=NULL;
	
	while(3 != i)
	{
		printf("\n STACK");
		printf("\n 1.PUSH \n 2.POP \n 3.Exit");
		printf("\n Enter your choice :");
		scanf("%d", &i);
		switch(i)
		{
			case 1:	printf("\n Enter a number to PUSH in the stack ");
				scanf("%d",&num);
				head = push(head,num);
				display(head);
				break;
			
			case 2: head = pop(head);
				display(head);
				break;
		
			case 3: printf("\n Exiting the STACK");
				free_memory(head);
				break;

			default : printf("\n Invalid choice");
				break;
		}
		
		
	}
	printf("\n   \n \n \n \n");

	
return 0;
}


