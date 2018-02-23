#include <stdio.h>
#include <stdlib.h>
#define maxbru 30
#define maxbrp 20
int main()
{
    int a[maxbru][maxbrp];
    float avru[maxbru];
    int bru, brp, i, k;
    float avr, allavr=0;
    do{
        printf("Broi ochenici v klas: ");
        scanf("%d",&bru);
        printf("\nBroi predmeti: ");
        scanf("%d",&brp);
    }while(bru<1 || bru>maxbru || brp<1 || brp>maxbrp);
    for(i=0; i<bru; i++){
        for(k=0; k<brp; k++){
            do{
                printf("Ocenka na uchenik nomer %d po predmet %d: ",i+1,k+1);
                scanf("%d",&a[i][k]);
            }while(a[i][k]<2 || a[i][k]>6);
        }
    }
    for(i=0; i<bru; i++){
        avr=0;
        for(k=0; k<brp; k++){
            avr+=a[i][k];
        }
        avr/=brp;
        avru[i]=avr;
        printf("\nSrednata ocenka na uchenik nomer %d e %f.",i+1,avr);
    }
    for(k=0; k<brp; k++){
        avr=0;
        for(i=0; i<bru; i++){
            avr+=a[i][k];
        }
        avr/=bru;
        printf("\nSrednata ocenka po predmet %d na klasa e %f",k+1,avr);
    }
    for(i=0;i<bru;i++){
        for(k=0;k<brp;k++)
            allavr+=a[i][k];
    }
    allavr/=(bru*brp);
    printf("\nSredniq ospeh na klasa po vsichki predmeti e %f", allavr);

    return 0;
}
