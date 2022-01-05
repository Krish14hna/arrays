// find the smallest elenment  in array
#include <stdio.h>
int main()
 {
  int i;
  int a[10];
  printf("Enter the number of elements: ");

  for (i=0;i<10;i++) 
  {
    scanf("%d",&a[i]);
  }
  for (i=1;i<10;i++) 
  {
    if (a[0]>a[i])
    {
      a[0]=a[i];
    }
  }

  printf("smallest element = %d",a[0]);

  return 0;
}
