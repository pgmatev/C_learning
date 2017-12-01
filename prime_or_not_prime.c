#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, k;
    do{
        printf("n= ");
        scanf("%d", &n);
        }while(n<1);
    if(n<2)k=0;
    i=2;
    while(i<n){
       if(n%i==0){k=1;break;}
       else k=0;
       i++;
    }
    if(k==0)printf("\nIt is a prime number");
    if(k==1)printf("\nIt is not a prime number");
    return 0;

}
