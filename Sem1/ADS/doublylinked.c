#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *prev;
struct node *next;
};
struct node *start;
void beginsert()
{
struct node *ptr;
int x;
ptr=(struct node*)malloc(sizeof(struct node*));
if(ptr==NULL)
{
printf("\n overflow");
}
else
{
printf("\n enter value:");
scanf("%d",&x);
if(start==NULL)
{
ptr->data=x;
ptr->prev=NULL;
ptr->next=NULL;
start=ptr;

}
else{
ptr->data=x;
ptr->prev=NULL;
ptr->next=start;
start->prev=ptr;
start=ptr;
}
}
}
void lastinsert()
{
struct node *ptr,*temp;
int x;
ptr=(struct node*)malloc(sizeof(struct node*));
if(ptr==NULL)
{
printf("\n overflow");
}
else
{
printf("\n enter value:");
scanf("%d",&x);
ptr->data=x;
if(start==NULL)
{
ptr->next=NULL;
ptr->prev=NULL;
start=ptr;
}
else
{
temp=start;
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=ptr;
ptr->prev=temp;
ptr->next=NULL;
}
}
}
void posinsert()
{
int pos,i,x;
struct node *ptr,*temp;
ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\n overflow");
}
else
{
printf("\n enter value:");
scanf("%d",&x);
ptr->data=x;
printf("\n enter the postion:");
scanf("%d",&pos);
temp=start;
if(pos==1)
{
if(start==NULL){
ptr->data=x;
ptr->prev=NULL;
ptr->next=NULL;
start=ptr;
}
else
{
ptr->data=x;
ptr->prev=NULL;
ptr->next=start;
start->prev=ptr;
start=ptr;
}
}
else
{
for(i=1;i<pos-1;i++)
{
temp=temp->next;
if(temp==NULL)
{
printf("\n can't insert");
}
}
ptr->next=temp->next;
temp->next=ptr;
ptr->prev=temp;
if(ptr->next!=NULL)
{
 (ptr->next)->prev=ptr;

}
}
}
}
void begdel()
{
int x;
struct node *ptr;
if(start==NULL){
printf("\n list is empty");
}
else
{
ptr=start;
start=ptr->next;
start->prev=NULL;
x=ptr->data;
free(ptr);
printf("\n %d deleted ",x);
}
}
void lastdel()
{
int x;
struct node *ptr,*ptr1;
if(start==NULL)
{
printf("\n list is empty");
}
else if (start->next==NULL)
{
x=start->data;
start=NULL;
free(start);
printf("\n %d deleted ",x);
}
else
{
ptr=start;
while(ptr->next!=NULL)
{
ptr1=ptr;
ptr=ptr->next;
}
ptr1->next=	NULL;
ptr->prev=NULL;
x=ptr->data;
free(ptr);
printf("\n %d deleted ",x);
}
}
void posdel()
{
struct node *ptr,*ptr1;
int pos,i,x;
ptr=start;
if(ptr==NULL)
{
printf("\n  list is empty");
}
else
{
printf("\n enter postion:");
scanf("%d",&pos);
if(pos==1){
ptr=start;
start=ptr->next;
start->prev=NULL;
x=ptr->data;
free(ptr);
printf("\n %d deleted ",x);
}
else
{
for(i=1;i<pos;i++)
{
ptr1=ptr;
ptr=ptr->next;
if(ptr==NULL)
{
printf("\n can't delete");
return;
}
}
ptr1->next=ptr->next;
(ptr->next)->prev=ptr1;
x=ptr->data;
free(ptr);
printf("\n %d deleted ",x);
}
}
}
void search()
{
struct node *ptr;
int x,i=0,f;
ptr=start;
if(ptr==NULL)
{
printf("\n list is empty");
}
else
{
printf("\n enter element to search:");
scanf("%d",&x);
while(ptr!=NULL)
{
if(ptr->data==x)
{
printf("\n item found  at postion %d ",i+1);
f=0;
break;
}
else
{
f=1;
}
i++;
ptr=ptr->next;
}
if(f==1)
{
printf("\n item  not found");
}
}
}
void display()
{
struct node *ptr;
ptr=start;
if(ptr==NULL)
{
printf("\n  list is empty");
}
else{
while(ptr!=NULL)
{
printf("%d->",ptr->data);
ptr=ptr->next;
}
printf("null");
}
}
void main()
{
int ch;
while(ch!=9)
{
printf("\n\t1 for insertion at begining \n");
printf("\n\t2 for insertion at last \n");
printf("\n\t3 for insertion at any postion \n");
printf("\n\t4 for deletion  from begining\n");
printf("\n\t5 for deletion from last \n");
printf("\n\t6 for deletion from   postion\n");
printf("\n\t7 search an element in linked list\n");
printf("\n\t8 display");

printf("\n\t9 to exit\n");
printf("\nenter choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
beginsert();
break;
case 2:
lastinsert();
break;
case 3:
posinsert();
break;
case 4:
begdel();
break;
case 5:
lastdel();
break;
case 6:
posdel();
break;
case 7:
search();
break;
case 8:
display();
break;
case 9:
exit(0);
break;
}
}
}
















	

