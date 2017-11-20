<<<<<<< HEAD
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
=======
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
>>>>>>> 33cbfb3e0e9d2870af169c7d151b29b9f6fedc8e
