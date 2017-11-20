#include <stdio.h>
#include <stdlib.h>
void main()
{
  int a,b,c,max;
  printf("a= ");
  scanf("%d",&a);
  printf("\nb= ");
  scanf("%d",&b);
  printf("\nc= ");
  scanf("%d",&a);
  max=a;
  if(b>max)max=b;
  if(c>max)max=c;
  printf("\nThe biggest number is %d",max);
}
