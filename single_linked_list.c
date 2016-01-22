/*****************************************************************
**
** Name: Ashwin AP		 	File name: main.c
** 
** Description:Singly_Linked_list
**
** Date Created:30-Jan-2015		Updated:30-Jan-2015
**
**
**Copyright all reserverd by Ashwin
*********************************************************************/

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
struct node * append(struct node *temp,int num)
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

struct node * add_after(struct node *head, int data1, int num)
{
	struct node *temp1 = head;
	struct node *temp2;
	struct node *temp3;
	
	temp2 = create_node(num);
	
        while(temp1 != NULL)
	{					
		if(temp1->data != data1) 	//if given data doesn't exist 
			temp1 = temp1->next; 
		else
			break; 
	}
	
	if(temp1 == NULL)
 	{
		printf("\n Dont act smart given dosent Exist\n \n");
		return head;
	}
	temp1=head;

	if(temp1->data == data1)	//head
	{	
		temp3 = temp1->next;
		temp1->next = temp2;
		temp2->next = temp3;

	}
	else     //intermediate node or tail 	
	{		
		for(;temp1->data != data1; temp1 = temp1->next);
		
		if(temp1->next == NULL)	//tail
		{
			if(temp1->data == data1)
			{
				temp1->next = temp2;
			}
		}
		else			//intermediate node
		{	
			if(temp1->data == data1)
			{
				temp3 = temp1->next;
				temp1->next = temp2;
				temp2->next = temp3; 	
			}
			
		}

	}	
	return head;	
}

struct node * delete_node(struct node *head,int data1)
{
	struct node *temp = head;
	struct node *prev;
	while(NULL != temp)
	{
		if(temp->data != data1)
			temp=temp->next;
		else
			break;
	}
	if(NULL == temp)
	{
		printf("\n Dont act smart given value doesnt exist");
		return head;
	}
	temp = head;
	
	if(temp->data == data1)   //head
	{
		head = temp->next;
		free(temp);
		return head;
	}
	else
	{
		for(;temp->data != data1; temp = temp->next)
			prev=temp;
		
		if(temp->next == NULL)   //tail
		{
			prev->next = NULL;
			free(temp);
		}
		else       //intermediate node
		{
			if(temp->data == data1)
			{
				prev->next = temp->next;
				free(temp);		
			}
		}
	}
return head;
	
}

void display(struct node *head)
{	
	if(NULL == head)
		printf("\n List is empty");
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
	
	while(5 != i)
	{
		printf("\n Linked List");
		printf("\n 1.Append \n 2.Add after \n 3.delete \n 4.Display \n 5.Exit");
		printf("\n Enter your choice :");
		scanf("%d", &i);
		switch(i)
		{
			case 1:	printf("\n Enter a number to append the Linked list ");
				scanf("%d",&num);
				head = append(head,num);
				break;

			case 2: printf("\n Add after which node enter the data vaule");
				scanf("%d",&data1);
				printf("\n Enter the number to add after %d ",data1);
				scanf("%d",&num);	
				head = add_after(head,data1,num);
				break;
	
			case 3: printf("\n Enter the data value to be deleted");
				scanf("%d",&data1);
				head = delete_node(head,data1);
				break;
				
			case 4: printf("\n Displaying the list");
				display(head);
				break;

			case 5: printf("\n Exiting the linked list");
				free_memory(head);
				break;

			default : printf("\n Invalid choice");
				break;
		}
		
		
	}
	printf("\n  \n \n \n \n");

	
return 0;
}


