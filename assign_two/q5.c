#include<stdio.h>
#include<stdlib.h>
#define size 10
int *temp;
void add_to_queue(int value);
void  remove_from_queue();
void print();
int rear=-1;
int front=-1;
int queuee[size];
int *ptrf=(queuee-1);
int *ptrr=(queuee-1);
void  add_to_queue(int value)
{
if(rear==size-1)
printf("queue overflow");
else if(front==-1)
{
front=rear=0;
ptrf=queuee;
ptrr=queuee;
//queuee[rear]=value;
*ptrr=value;
}
else
{
rear=rear+1;
ptrr++;
*ptrr=value;
//queuee[rear]=value;
}
}
void remove_from_queue()
{
int value;
if(front==-1)
{
printf("underflow");
}
else if(front==rear)
{
value=*ptrf;
printf("Deleted element from the queue is %d",value);
front=-1;
rear=-1;
ptrf=ptrf-1;
ptrr=ptrr-1;
}
else
{
value=queuee[front];
printf("Deleted element from the queue is %d",value);
front=front+1;
ptrf++;
}
}
void print()
{
int i;
if(rear==-1)
printf("queue is empty");
else
{
//for(i=front;i<=rear;i++)
//printf("==>%d--array index(%d) rear[%d] front[%d]",queuee[i],i,rear,front);
for(temp=ptrf;temp<=ptrr;temp++)
printf("%d-(%p)---",*temp,temp);
}
}
 int main()
 {
 int i;
 int value;
 int x=1;
 while(x)
{
printf("\nselect option from the menu below"); 
printf("\n 1.add_to_queue \n 2.remove_from_queue \n 3.print \n 4.exit");
printf("\nEnter your choice:");
scanf("%d",&x);
 switch(x)
{
case 1:printf("enter the value to insert");
       scanf("%d",&value);
        add_to_queue(value);
        break;
case 2:remove_from_queue();
       break;
case 3:print();
       break;
case 4:return 0;
default:printf("wrong choice");
        break;
 }
 }
 return 0;
 }
