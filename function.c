#include<stdio.h>
int add(int,int);
int main()
{
int n1,n2,res;
printf("\n Enter the two numbers:");
scanf("%d%d",&n1,&n2);
res=add(n1,n2);
printf("\n Addition of two numbers:%d",res);
return 0;
}
int add(int n1,int n2)
{
int sum;
sum=n1+n2;
return(sum);
}
