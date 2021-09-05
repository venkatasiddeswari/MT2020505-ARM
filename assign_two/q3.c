#include<stdio.h>
#include<stdlib.h>
# define size 10
int top=-1;
int stack[size];
int *ptr=stack-1;
int *temp;
void push(int);
void pop();
void print();
void push(int value)
{
//if(top==size-1)
if(ptr==(stack+9))
printf("stack is full");
else
{
top++;
ptr++;
//stack[top]=value;
*ptr=value;
}
}
void pop()
{
int value;
//if(top==-1)
if(ptr==(stack-1))
printf("stack is empty");
else
{
//value=stack[top];
value=*ptr;
printf("element deleted from list is %d",value);
top=top-1;
ptr--;
}
}
void print()
{
int i;
//if(top==-1)
if(ptr==(stack-1))
printf("stack is empty");
else
{
//for(i=top;i>=0;i--)
//printf("==>%d--(%d)",stack[i],i);
for(temp=ptr;temp>=stack;temp--)
printf("%d--(%p)<--",*temp,temp);
}
}
int main()
{
int value;
int x=1;
while(x)
{
printf("\n Select option from the menu below:"); 
printf("\n 1.push \n 2.pop \n 3.display\n 4.exit");
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
