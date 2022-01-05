//WAP to print the sum of array
#include<stdio.h>
int main()
{
    int x[5],i,sum=0;
    printf("Enter the element of array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<5;i++)
    {
      sum=sum+x[i];  
    }
    printf("%d",sum);
  return 0;  
}    