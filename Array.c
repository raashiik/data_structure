#include<stdio.h>
void main()
{
 int n1,n2,n3;
 int a[1000],b[1000],c[1000];
 printf("Enter the size of first array");
 scanf("%d",&n1);
 printf("Enter the array elements:");
 for(int i=0;i<n1;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Enter the size of second array");
 scanf("%d",&n2);
 printf("Enter the array elements:");
 for(int i=0;i<n2;i++)
 {
 scanf("%d",&b[i]);
 }
 n3=n1+n2;
 int i=0,j=0,k=0;
 while(i<n1&&j<n2)
 {
 if(a[i]<b[j])
 {
 c[k]=a[i];
 i++;
 k++;
 }
 else
 {
 c[k]=b[j];
 j++;
 k++;
 }
 }
 while(i<n1)
 {
 c[k++]=a[i++];
 }
 while(j<n2)
 {
c[k++]=a[j++];
}
printf("final array:");
for(i=0;i<n3;i++)
{
printf("%d ",c[i]);
}
}

 
