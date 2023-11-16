#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node*link;
};
struct node*start=NULL;
void  traverse()
{
struct node*temp;
if(start==NULL)
printf("\nlist is empty\n");
else
{
temp=start;
printf("the list is \n");
while(temp!=NULL){
printf("%d-->",temp->info);
temp=temp->link;
}
}
}
void insertAtfront()
{
int data;
struct node* temp;
temp=malloc(sizeof(struct node));
printf("\n enter number to be inserted:");
scanf("%d",&data);
temp->info=data;
temp->link=start;
start=temp;
}
void insertAtEnd()
{
int data;
struct node *temp,*head;
temp=malloc(sizeof(struct node));
printf("\n enter number to be inserted:");
scanf("%d",&data);
temp->info=data;
head=start;
while(head->link!=NULL)
{
head=head->link;
}
head->link=temp;
}
void insertAtposition()
{
struct node *temp,*newnode;
int pos,data,i=1;
newnode=malloc(sizeof(struct node));
printf("\n enter position and data:");
scanf("%d%d",&pos,&data);
temp=start;
newnode->info=data;
newnode->link=0;
while(i<pos-1)
{
temp=temp->link;
i++;
}
newnode->link=temp->link;
temp->link=newnode;
}
void deleteFirst()
{
struct node* temp;
if(start==NULL)
printf("\n list is empty\n");
else
{
temp=start;
start=start->link;
free(temp);
}
}
void deleteEnd()
{
struct node* temp,*prevnode;
if(start==NULL)
printf("\n list is empty\n");
else
{
temp=start;
while(temp->link!=0)
{

prevnode=temp;
temp=temp->link;
}
free(temp);
prevnode->link=0;
}
}
void deleteposition()
{
struct node *temp,*position;
int i=1,pos;
if(start==NULL)
printf("\n list is empty\n");
else
{
printf("\n enter position:");
scanf("%d",&pos);
position=malloc(sizeof(struct node));
temp=start;
while(i<pos-1)
{
temp=temp->link;
i++;
}
position=temp->link;
temp->link=position->link;
free(position);
}
}
void search()
{
int found=-1,key;
struct node *tr=start;
if(start==NULL)
{
printf("linked list is empty\n");
}
else
{
printf("\n enter the element you want to search:");
scanf("%d",&key);
while(tr!=NULL)
{
if(tr->info==key)
{
found=1;
break;
}
else
{
tr=tr->link;
}
}
if(found==1)
{
printf("yes, %d is present in the linked list.\n",key);
}
else
{
printf("no,%d is not present in the linked list\n",key);
}
}
}


int main()
{

int choice;
while(1){
printf("\n\t1 to see list\n");
printf("\n\t2 for insertion at starting \n");
printf("\n\t3 for insertion at end \n");
printf("\n\t4 for insertion at any postion \n");
printf("\n\t5 for deletion  of first element\n");
printf("\n\t6 for deletion of last element \n");
printf("\n\t7 for deletion of element at any postion\n");
printf("\n\t8 search an element in linked list\n");

printf("\n\t9 to exit\n");
printf("\nenter choice\n");
scanf("%d",&choice);
switch(choice)
{

case 1:
traverse();
break;
case 2:
insertAtfront();
break;
case 3:
insertAtEnd();
break;
case 4:
insertAtposition();
break;
case 5:
deleteFirst();
break;
case 6:
deleteEnd();
break;
case 7:
deleteposition();
case 8:
search();
break;
case 9:
exit(1);
break;
default:
printf("incorrect choice\n");
}
}
return 0;
}

