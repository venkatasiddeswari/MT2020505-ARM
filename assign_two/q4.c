#include<stdio.h>
#include<stdlib.h>
# define size 10
int top=0;
int stack[size];
int *temp;
int *ptr=stack;
void push(int);
void pop();
void print();
void push(int data)
{
//if(top==size)
if(ptr==(stack+10))
printf("\n stack is full");
else
{
//stack[top]=data;
*ptr=data;
top++;
ptr++;
}
}
void pop()
{
int value;
//if(top==0)
if(ptr==stack)
printf("stack is empty");
else
{
top=top-1;
ptr=ptr-1;
//value=stack[top];
value=*ptr;
printf("element deleted from list is %d",value);
}
}
void print()
{
int i;
//if(top==0)
if(ptr==stack)
printf("\nstack is empty");
else
{
//for(i=top-1;i>=0;i--)
//printf("==>%d--(%d)",stack[i],i);
for(temp=ptr-1;temp>=stack;temp--)
printf("%d--(%p)<--",*temp,temp);
}
}
int main()
{
int value;
int x=1;
while(x)
{
printf("\nSelect option from the menu below:"); 
printf("\n 1.push \n 2.pop \n 3.print\n 4.exit");
printf("\nEnter your choice:");
scanf("%d",&x);
switch(x)
{
   case 1:printf("enter the value to insert");
         scanf("%d",&value);
          push(value);
         break;
   case 2:pop();
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
