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
<<<<<<< HEAD
  scanf("%d",&a);
=======
  scanf("%d",&c);
>>>>>>> origin/master
  if(a>b){
    if(a>c){
      max=a;
    }
    else{
      max=c;
    }
  }
  else{
    if (b>c) {
      max=b;
    }
    else
      max=c;
  }
  printf("\nThe biggest number is %d",max);
}
