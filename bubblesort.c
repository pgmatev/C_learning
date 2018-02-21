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
  for(i=1; i<n; i++)
  {
    a[i]=rand()%n+1;
  }
  for(i=1; i<n; i++){
  for(int k=0; k<n-i; k++)
  {
    if(a[k]>a[k+1])
    {
      int c =a[k];
      a[k]=a[k+1];
      a[k+1]=c;
    }
  }
  }
  for(int j=0; j<n; j++)
  {
    printf(" %d", a[j]);
  }
}
