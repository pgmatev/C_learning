int main()
{
    int d,m,y, pd, l, n;
    do{
        printf("Year:");
        scanf("%d", &y);
        }while(y<1);
    if(y%4==0)l=1;
        else l=0;
    if(y%100==0)l=0;
    if(y%400==0)l=1;
    do{
        printf("Month:");
        scanf("%d", &m);
        }while(m<1 || m>12);
    switch(m)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        do{
            printf("Day: ");
            scanf("%d", &d);
            }while(d<1 || d>31);
        break;
        case 4: case 6: case 9: case 11:
        do{
            printf("Day: ");
            scanf("%d", &d);
            }while(d<1 || d>30);
        break;
        case 2:
        if(l==1){
            do{
                printf("Day: ");
                scanf("%d", &d);
                }while(d<1 || d>29);
        break;
                }
        else{
            do{
            printf("Day: ");
            scanf("%d", &d);
            }while(d<1 || d>28);
            }


    }
    if(m==1)pd=d;
    if(m==2)pd=31;
    if(m==3)pd=60;
    if(m==4)pd=91;
    if(m==5)pd=121;
    if(m==6)pd=152;
    if(m==7)pd=182;
    if(m==8)pd=213;
    if(m==9)pd=244;
    if(m==10)pd=274;
    if(m==11)pd=305;
    if(m==12)pd=335;
    if(l==0 && m>2)pd--;
    n=pd+d;
    if(n%10==1)printf("\n%d.%d.%d is the %dst day of the year\n",d,m,y,n);
    if(n%10==2)printf("\n%d.%d.%d is the %dnd day of the year\n",d,m,y,n);
    if(n%10==3)printf("\n%d.%d.%d is the %drd day of the year\n",d,m,y,n);
    if(n%10!=1 && n%10!=2 && n%10!=3)
    printf("\n%d.%d.%d is the %dth day of the year\n",d,m,y,n);

}
