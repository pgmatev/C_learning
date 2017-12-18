#include <stdio.h>
char main()
{
    char F=0,ASCII;
    do
    {
        printf("\n%c",F);
        F++;
        if(F%20==0){
            ASCII=getch();
        }
    }
    while(F<255);

}
