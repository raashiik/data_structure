#include<stdio.h>
#include<stdlib.h>
void insertion();
void deletion();
void searching();
void sorting();
void display();
int arr[100];
inut num,op;
void main()
{
 printf("Enter the Size of Array:");
 scanf("%d",&num);
 printf("Enter the Array Elements:\n");
 for(int i=0;i<num;i++)
 {
 scanf("%d",&arr[i]);
 }
 printf("The Array Elements are;\n");
 for(int i=0;i<num;i++)
 {
   printf("%d",arr[i]);
 }
 printf("\n");
 do
 {
 printf("\n\n\n\Select One OPeration to perform\n");
 printf("..............\n\n");
 printf("1.insertion\n2.deletion\n3.sorting\n4.searching\n5.display\n6.exit\n");
 printf"Enter the option:");
 scanf("d%",&op);
 switch(op)
 {
   case1;
       insertion();
       break;
   case2;
       deletion();
       break;
   case3;
       sorting();
       break;
   case4;
       searching();
       break;
   case5;
       display();
       break;
   case6;
       exit(0);
       break;
      default:
         printf"Enter the vaild option!!");
   }
   }while(op<6);
  }
  void insertion()
  {
    int n,pos,i;
    printf("Enter the position to insert the New element:");
    scanf(%d",&pos);
    printf("Enter the Number to be inserted:");
    scanf("%d',&n);
    for(i=n -1;i>=pos;i--)
    {
      arr[i]=arr[i-1];
    }
    arr[pos-1]=n;
    printf("Array after insertion:\n");
    for(int i=0;i<num+1;i++)
    {
      printf("%d",arr[i]);
    }
  }
  void deletion()
  {
      int i,j,indx,pos;
      printf("Define the position of the array element where you want to delete:\n");
      scanf("%d",&pos);
      if(pos>=num+1)
      {
        printf("\n Deletion is not possible in the array.");
      }
      else
      {
       //use for loop to delete the element and update the index
       for(i=pos-1;i<num-1;i++)
       {
         arr[i]=arr[i+1];//assign arr[i+1]to arr[i]
       }
       printf("\n The resultant array is:\n");
       //display the final array 
       for(i=0;i<num-1;i++)
       {
         printf("%d",arr[i]);
       }
       
         }
         /*printf("Enter the number to be Deleted:");
         scanf("%d",&indx);
         for(i=0;i<num;i++)
         {
          if(arr[i]==indx);
          break;
         }
         for(i=0;i<num-1;i++)
         {
           arr[i]=arr[i+1];
         }
         printf("Array After Deletion:\n");
           for(int i=0;i<num-1;i++)
               {
                print("%d",arr[i]);
               }
               */
   }
   void searching()
   {
     int sear,found,i;
     printf("Enter the Number to be searched;");
     scanf("%d",&sear);
     found=0;
     for(i=0;i<num;i++)
     {
       if(arr[i]==sear)
       {
         found=1;
         break;
       }
      }
      if(found=1;
      {
        printf("%d is found at Postion %d",sear,i+1);
      }
      else
      {
       printf("Element not found!!");
      }
    }
    void sorting()
    {
      inti,j,a;
      for(i=0;i<num;i++)
      {
        for(j=i+1;j<num;j++)
        {
          if(arr[i]>arr[j])
          {
           a=arr[i];
           arr[i]=arr[j];
           arr[j]=a;
          }
         }
        }
        printf("Sorted Array;\n");
        for(int i=0;i<num;i++)
        {
         printf("%d",arr[i]);
        }
       }
       void display()
       {
        printf("The Array Elements are:\n");
        for(int i=0;i<num;i++)
        {
         print("%d",arr[i]);
        }
       }
       
          
       
  
      
     
     
 


       
