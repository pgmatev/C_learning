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
  int sorted=1;
  for(i=0; i<n-1; i++)
  {
    a[i]=rand()%n+1;
  }
  for(i=0; i<n-1; i++){
    int smallest=i;
  for(int k=i+1; k<n; k++)
  {
    if(a[smallest]>a[k])
    {
      smallest=k;
    }
      int c=a[smallest];
      a[smallest]=a[i];
      a[i]=c;
      sorted=0;
  }
  if(sorted=1)
    break;
  }
  for(int j=0; j<n; j++)
  {
    printf(" %d",a[j]);
  }
}
