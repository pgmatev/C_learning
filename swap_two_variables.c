#include <stdio.h>
#include <stdlib.h>
void main()
{
  int a,b,c;
  printf("a=");
  scanf("%d",&a);
  printf("b=");
  scanf("%d",&b);
  c=a;
  a=b;
  b=c;
  printf("a=%d",a);
  printf("\nb=%d",b);
}
