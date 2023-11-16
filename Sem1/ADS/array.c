#include<stdio.h>
#define SIZE 100
void enqueue();
void dequeue();
void show();
 int inp_arr[size];
int rear=-1;
int front=-1;
void main()
{
int ch;
while(1)
{
printf("1. enqueue operation\n");
printf("2. dequeue operation\n");
printf("3. display the queue \n");
printf("4.exit\n");
scanf("%d",&ch);
switch(ch)
{"
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
show();
break;
case 4:
exit(0);
default:
printf("incorrect choice\n");
}
}
}
void  enqueue()
{
int insert_item,front=rear=-1,inp_arr[10];
if(rear==SIZE-1)
printf("overflow\n");
else
{
if(front==-1)
front=0;
printf("elemented to be inserted in the queue\n:");
scanf("%d",&insert_item);
rear=rear+1;
inp_arr[rear]=insert_item;
}
}
void dequeue()
{
int (front==-1||front > rear)
{
printf("underflow\n");
return 0;
}
else
{
printf("element deleted from the queue :%d\n",inp_arr[front]);
front=front+1;
}
}
void show()
{
if(front==-1)
printf("empty queue :\n");
else
{
printf("queue :\n");
for(int i=front;i<=rear;i++)
printf("%d",inp_ar[i]);
printf("\n");
}
}





