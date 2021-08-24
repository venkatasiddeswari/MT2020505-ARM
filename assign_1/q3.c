#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[20];
int  i;
int count=0;
for(i=0;i<20;i++)
{
printf("enter a[%d]:",i);
scanf("%d",&a[i]);
}
for(i=0;i<20;i++)
{
if(a[i]%2==0)
count+=1;
}
printf("number of even numbers in the given 20 inputs is %d",count);
return 0;
}
