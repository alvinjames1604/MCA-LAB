#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node* start;
void push()
{
int x;
struct node *ptr;
ptr=malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\n can't push element");
}
else
{
printf("\n enter the value:");
scanf("%d",&x);
if(start==NULL)
{
ptr->data=x;
ptr->next=NULL;
start=ptr;
}
else
{
ptr->data=x;
ptr->next=start;
start=ptr;
}
}
}
void pop()
{
int x;
struct node *ptr;
if(start==NULL)
{
printf("\n underflow");
}
else
{
x=start->data;
ptr=start;
start=start->next;
free(ptr);
printf("element popped -%d",x);
}
}
void traverse()
{
struct node* temp;
if(start==NULL)
printf("\n list is empty\n");
else
{
temp=start;
printf("the list is \n");
while(temp!=NULL)
{
printf("%d-->",temp->data);
temp=temp->next;
}
}
}
void search()
{
int i=1,f=0,x;
struct node *ptr;
ptr=start;
if(ptr==NULL)
{
printf("\n stack is empty");
}
else
{
printf("\n enter element:");
scanf("%d",&x);
while(ptr!=NULL)
{
if(ptr->data==x)
{
f=1;
break;
}
i++;
ptr=ptr->next;
}
if(f==0)
	printf("\n item not found");
else
printf("\n item found at position %d",i);
}
}
void main()
{
int ch=0;
while(ch!=5)
{

printf("\n\n1:push");
printf("\n\n2:pop");
printf("\n\n3:linear search");
printf("\n\n4:display");
printf("\n\n5:exit");
printf("\n enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
search();
break;
case 4:
traverse();
break;
case 5:
exit(0);
break;
default:
printf("\n invalid choice");
}
}
}














