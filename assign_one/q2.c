#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[15];
int i;
int temp;
for(i=0;i<15;i++)
{
printf("enter a[%d]:",i);
scanf("%d",&a[i]);
}
temp=a[0];
for(i=1;i<15;i++)
{
if(a[i]>temp)
{
temp=a[i];
}
}
printf("largest number among the inputs is %d",temp);
return 0;
}
