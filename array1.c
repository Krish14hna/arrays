// WAP to read and print element in array

#include<stdio.h>
int main()
{
    int x[5],i;
    printf("Enter the Array Element: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d",x[i]);
    }
  return 0;
}    