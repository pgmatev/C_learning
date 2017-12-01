#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, m, i;
    do{
        printf("n=");
        scanf("%d", &n);
    }while(n<1);
    m=0;
    i=0;
    while(n!=0){
        a=n%10;
        if(a%2==0){m=m+a*(pow (10, i)); i++;}
        n=n/10;
    }
    printf("\nThe even digits are %d.\n", m);
    return 0;
}
