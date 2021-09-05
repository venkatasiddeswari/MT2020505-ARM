#include<stdio.h>
#include<stdlib.h>
#define size 10
void add_to_queue(int value);
void  remove_from_queue();
void print();
int rear=-1;
int front=-1;
int queuee[size];
int *temp;
int *ptrf=queuee-1;
int *ptrr=queuee-1;
void  add_to_queue(int value)
{
if((front==0)&&(rear==size-1))
printf("queue overflow\n");
else if(front==rear+1)
{
printf("queue overflow\n");
}
else if(front==-1)
{
front=rear=0;
ptrf=queuee;
ptrr=queuee;
*ptrr=value;
//queuee[rear]=value;
}
else if(rear==size-1)
{
rear=0;
ptrr=queuee;
*ptrr=value;
//queuee[rear]=value;
}
else 
{
rear=rear+1;
ptrr++;
//queuee[rear]=value;
*ptrr=value;
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
ptrf=queuee-1;
ptrr=queuee-1;
}
else if(front==size-1)
{
value=*ptrf;
printf("Deleted element from the queue is %d",value);
front=0;
ptrf=queuee;
}
else
{
value=*ptrf;
printf("Deleted element from the queue is %d",value);
front=front+1;
ptrf++;
}
}
void print()
{
int i;
if(front>rear)
{
for(i=front;i<=size-1;i++)
printf("%d--front[%p]--rear[%p]",queuee[i],ptrf,ptrr);
for(i=0;i<=rear;i++)
printf("%d--front[%p]--rear[%p]",queuee[i],ptrf,ptrr);
}
else
{
for(i=front;i<=rear;i++)
{
if(rear!=-1)
printf("%d--rear[%p]--front[%p]----",queuee[i],ptrr,ptrf);
}
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
printf("\n 1.add_to_queue \n 2.remove_from_queue \n 3.display\n 4.exit");
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
