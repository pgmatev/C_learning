#include <stdio.h>
#include <stdlib.h>

char main()
{
    char i;
    do{
        printf("GIVE ME A FUCKING SYMBOL \n");
        scanf("%c",&i);
    }while(i<0 || i>127);
    if(i>=48 && i<=57)
        printf("it's a digit\n");
    if(i>=97 && i<=122)
        printf("it's a small letter\n");
    if(i>=65 && i<=90)
        printf("it's a capital letter\n");
    else
        printf("it's something else yet to be discovered by NASA\n.\n.\n.\n.\n.\n.\nkys fag\n\n");

    return 0;
}
