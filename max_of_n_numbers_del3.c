#include <stdio.h>
#include <stdlib.h>
void main() {
  int n,i,a,max;
  do {
    printf("The amount of numbers is ");
    scanf("%d",&n);
  } while(n<1);
  i=1;
  if(i<=n){
    printf("\na=");
    scanf("%d",&a);
    i++;
    while(a%3==0){
      max=a;
      if(i<=n){
        printf("\na=");
        scanf("%d",&a);
        if(a%3==0){
          if(a>max){
            max=a;
            i++;
          }
          else{
            i++;
          }
        }
        else{
          i++;
        }
      }
      }
      printf("\nThe biggest number is %d",max);
      printf("\nThere are no numbers matching the condition");
    }
}
