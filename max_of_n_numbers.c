<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
void main(){
  int a,n,max,i;
  do{
    printf("The amount of numbers is ");
    scanf("%d",&n);
  }while(n<1);
  printf("\na= ");
  scanf("%d",&a);
  i=1;
  max=a;
  while(i<n){
    printf("\na= ");
    scanf("%d",&a);
    if(a>max){
      max=a;
      i++;
    }
    else
      i++;
  }
  printf("\nThe biggest number is %d",max);
}
=======
#include <stdio.h>
#include <stdlib.h>
void main(){
  int a,n,max,i;
  do{
    printf("The amount of numbers is ");
    scanf("%d",&n);
  }while(n<1);
  printf("\na= ");
  scanf("%d",&a);
  i=1;
  max=a;
  while(i<n){
    printf("\na= ");
    scanf("%d",&a);
    if(a>max){
      max=a;
      i++;
    }
    else
      i++;
  }
  printf("\nThe biggest number is %d",max);
}
>>>>>>> 33cbfb3e0e9d2870af169c7d151b29b9f6fedc8e
