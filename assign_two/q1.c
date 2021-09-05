#include<stdio.h>
#include<stdlib.h>
# define size 10
int top=size;
int *temp;
int stack[size];
int *ptr=stack+10;
void push(int);
void pop();
void print();
void push(int value)
{
//if(top==0)
if(ptr==stack)
printf("stack is full");
else
{
top--;
ptr--;
//stack[top]=value;
*ptr=value;
}
}
void pop()
{
int value;
//if(top==size)
if(ptr==(stack+10))
printf("stack is empty");
else
{
//value=stack[top];
value=*ptr;
printf("element deleted from list is %d",value);
top=top+1;
ptr++;
}
}
void print()
{
int i;
//if(top==size)
if(ptr==(stack+10))
printf("stack is empty");
else
{
//for(i=top;i<size;i++)
//printf("==>%d--(%d)",stack[i],i);
for(temp=ptr;temp<=stack+9;temp++)
printf("%d--(%p)<---",*temp,temp);
}
}
int main()
{
int value;
int x=1;
while(x)
{
printf("\nselect option from the menu below"); 
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
