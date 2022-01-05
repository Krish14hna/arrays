//WAP to find the maximum and minimum number in array
#include<stdio.h>
int main ()
{
    int x[5],i,max,mini;
    printf("Enter the element of array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    max=x[0];
    mini=x[0];
    
    for(i=0;i<5;i++)
    {
        if(x[i]>max)
        {
            max=x[i];
        }
       if(x[i]<mini)
       {
           mini=x[i];
       }
    }
    printf("\n%d is the maximum number in array",max);
   
    printf("\n%d is the minimum number in array",mini);
     
    return 0; 
}