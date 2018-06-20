#include <stdio.h>
#include <stdlib.h>

void main()
{
  int n, a[30000], i;
  do
  {
    printf("\nAmount of numbers in the array: ");
    scanf("%d",&n);
  }while(n<1 || n>30000);
  for(i=0; i<n-1; i++)
  {
    a[i]=rand()%n+1;
  }
  for(i=0; i<n-1; i++)
  {
    int current=a[i];
    int j=i+1;
    while(j>=0 && a[j]>current)
    {
      int c=a[j];
      a[j]=a[i];
      a[i]=c;
      j++;
    }
    a[j] = current;
  }
  for(int m=0; m<n-1; n++)
  {
    printf(" %d",a[m]);
  }
}
