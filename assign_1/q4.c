 #include<stdio.h>
#include<stdlib.h>
int main()
{
int a[20];
int i;
int j;
int temp;
for(i=0;i<20;i++)
{
printf("enter a[%d]:",i);
scanf("%d",&a[i]);
}

for(i=19;i>=1;i--)
{
for(j=i-1;j>=0;j--)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<20;i++)
{
printf("\na[%d]:%d",i,a[i]);
}
}
