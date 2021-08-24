#include<stdio.h>
#include<stdlib.h>
int main()
{
int a1,a2,a3;
int g1,g2;
printf("Enter three  numbers");
scanf("%d %d %d",&a1,&a2,&a3);
g1=(a1>=a2)?a1:a2;
g2=(g1>=a3)?g1:a3;
printf("Greater among the three numbers is %d",g2);
return 0;
}
