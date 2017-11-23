#include <stdio.h>
#include <stdlib.h>

int main()
{
    int _31,_30,_28,d,m,y,d1,m1,y1,leap=0;


    do{
        printf("Year: ");
        scanf("%d",&y);
    }while(y<=0);

    if(y%4==0 && y%100!=0)
        leap=1;

    if(y%100==0 && y%400==0)
        leap=1;
    if(y%4!=0)
        leap=0;


    do{
        printf("Month: ");
        scanf("%d",&m);
    }while(m<=0 || m>12);
    if(m==2){
        _28=1;
        _30=0;
        _31=0;
    }
    if(m==4 || m==6 || m==9 || m==11){
        _28=0;
        _30=1;
        _31=0;
    }
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        _28=0;
        _30=0;
        _31=1;
    }
    if(_28==1){
        if(leap==0){
            do{
                printf("Day: ");
                scanf("%d",&d);
            }while(d<=0 || d>28);
        }
        else{
            do{
                printf("Day: ");
                scanf("%d",&d);
            }while(d<=0 || d>29);
        }
    }
    if(_30==1){
        do{
            printf("Day: ");
            scanf("%d",&d);
        }while(d<=0 || d>30);
    }
    if(_31==1){
        do{
            printf("Day: ");
            scanf("%d",&d);
        }while(d<=0 || d>31);
    }
    d1=d;
    m1=m;
    y1=y;
    if(d==1 && m!=1){
        m-=1;
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
            d=31;
        if(m==4 || m==6 || m==9 || m==11)
            d=30;
        if(m==2){
            if(leap==1)
                d=29;
            else
                d=28;
        }
    }
    if(m!=1 && d!=1)
        d-=1;
    if(m==1 && d==1){
        y-=1;
        m=12;
        d=31;
    }
    printf("\nYesterday was %d.%d.%d\n",d,m,y);
    if(m!=12){
      if(_31==1 && d1==31){
          m1+=1;
          d1=1;
        }
      if(_30==1 && d1==30){
          m1+=1;
          d1=1;
        }
      if(_28==1){
          if(leap==0 && d1==28){
            m1+=1;
            d1=1;

          }
          if(leap==1 && d1==29){
              m1+=1;
              d1=1;
            }
          }
        }
        if(m1==12 && d1!=31){
          d1++;
        }
        if(m1==12 && d1==31){
          y1+=1;
          m1=1;
          d1=1;
        }
            printf("Tomorrow is %d.%d.%d\n",d1,m1,y1);
            return 0;

}
