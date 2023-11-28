#include<stdio.h>
void main()
{
int n1,n2,n3;
printf("Enter Three Numbers:");
scanf("%d%d%d",&n1,&n2,&n3);
if(n1>n2 && n1>n3)
{
printf("The Largest Number is:%d",n1);
}
else if(n2>n1 && n2>n3)
{
printf("The largest number is:%d",n2);
}
else
{
printf("The largest number is:%d",n3);
}

}


