#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void theevendigitsofn()
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
void thedayoftheyear()
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
void timetravelled()
{
  int h1,m1,h2,m2,h,h3,h4,h5,h6;
  printf("Hour of leaving=");
  scanf("%d",&h1);
  printf("\nMinute of leaving=");
  scanf("%d",&m1);
  printf("\nHour of arriving=");
  scanf("%d",&h2);
  printf("\nMinute of arriving=");
  scanf("%d",&m2);
  h=h1*60+m1;
  h3=h2*60+m2;
  h4=h3-h;
  h5=h4/60;
  h6=h4%60;
  printf("\nTime travelled is %d hours and %d minutes",h5,h6);

}
void swap2variables()
{
  int a,b,c;
  printf("a=");
  scanf("%d",&a);
  printf("b=");
  scanf("%d",&b);
  c=a;
  a=b;
  b=c;
  printf("a=%d",a);
  printf("\nb=%d",b);
}
void sumrandomnumbers() {
  int n,sum,i,a;
  do {
    printf("n=");
    scanf("%d",&n);
  } while(n<1);
  sum=0;
  i=1;
while(i<=n)
{
  printf("a=");
  scanf("%d",&a);
  sum+=a;
  i++;
}
printf("\nThe sum is %d",sum);
}
void sumnnumbersdividing3()
{
  int n,i,a,sum;
  do {
    printf("n=");
    scanf("%d",&n);
  } while(n<1);
  i=1;
  sum=0;
  while (i<=n)
  {
    printf("a=");
    scanf("%d",&a);
    if (a%3==0)
    {
    sum+=a;
    i++;
    }
    else
      i++;
  }
    printf("\nThe sum is %d",sum);
}
void sum1ton(){
  int n,sum,i;
  do {
    printf("n= ");
    scanf("%d",&n);
  } while(n<1);
  sum=0;
  i=1;
  for(;i<=n;i++)sum+=i;
  printf("\nThe sum is %d",sum);
}
char ascii()
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
void primeornotprime()
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
}
void maxofnnumbers(){
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
void maxofnnumbersdel3() {
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
void maxod3numbers()
{
  int a,b,c,max;
  printf("a= ");
  scanf("%d",&a);
  printf("\nb= ");
  scanf("%d",&b);
  printf("\nc= ");
  scanf("%d",&a);
  max=a;
  if(b>max)max=b;
  if(c>max)max=c;
  printf("\nThe biggest number is %d",max);
}
void yesterdayandtomorrow()
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
      if(_31==1 && d1!=31){
        d1+=1;
      }
      if(_30==1 && d1!=30){
        d1+=1;
      }
      if(_28==1){
        if(leap==0 && d1!=28){
          d1+=1;
        }
        if(leap==1 && d1!=29){
          d1+=1;
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
}
void fibonaci()
{
    int n, a, b, i, c=1;
    do{
        printf("\nn= (n>1)");
        scanf("%d", &n);
        }while(n<1);
    a=1;
    b=1;
    do{
        c=a+b;
        a=b;
        b=c;
        }while(c<n-a);
    printf("\n\nc=%d", c);
}
void averagescore(){
  int n,i;
  float a,sa;
  do{
    printf("Students in class:");
    scanf("%d",&n);
  }while(n<1);
  i=0;
  sa=0;
  while(i<n){
    do{
      printf("\nMark ");
      scanf("%f",&a);
    }while(a<2 || a>6);
    i++;
    sa=(sa+a);
  }
  sa=sa/n;
  printf("\nThe average score in the class is %f",sa);
}
char asciitellsyouwhatsymbolthatis()
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
int abecomesA()
{
    char n;
    printf("\nSymbol: ");
    scanf("%c",&n);
    if(n>='a' && n<='z')
        printf("\nNew symbol: %c",n-('a'-'A'));
    else
        printf("\n%c",n);
    return 0;
}
void maxof3numbersv2()
{
  int a,b,c,max;
  printf("a= ");
  scanf("%d",&a);
  printf("\nb= ");
  scanf("%d",&b);
  printf("\nc= ");
  scanf("%d",&c);
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

int main(){
  int op;
  do{
    system("cls");
    printf("Choose a task");
    printf("\n1. The even digits of n");
    printf("\n2. The day of the year");
    printf("\n3. Time travelled");
    printf("\n4. Swap two variables");
    printf("\n5. Sum random numbers");
    printf("\n6. Sum n numbers dividing 3");
    printf("\n7. Sum 1 to n");
    printf("\n8. ASCII");
    printf("\n9. Prime or not prime");
    printf("\n10. Max of n numbers");
    printf("\n11. Max of n numbers del 3");
    printf("\n12. Max of 3 numbers");
    printf("\n13. Max of 3 numbers v2");
    printf("\n14. Yesterday and tomorrow");
    printf("\n15. Fibonaci");
    printf("\n16. Average score in class");
    printf("\n17. ASCII tells you what symbol it is");
    printf("\n18. a becomes A");
    printf("\n19. Exit\n");
    scanf("%d",&op);
    switch(op){
      case 1: theevendigitsofn();break;
      case 2: thedayoftheyear();break;
      case 3: timetravelled();break;
      case 4: swap2variables();break;
      case 5: sumrandomnumbers();break;
      case 6:  sumnnumbersdividing3();break;
      case 7: sum1ton();break;
      case 8: ascii();break;
      case 9: primeornotprime();break;
      case 10: maxofnnumbers();break;
      case 11: maxofnnumbersdel3();break;
      case 12: maxod3numbers();break;
      case 13: maxof3numbersv2();break;
      case 14: yesterdayandtomorrow();break;
      case 15: fibonaci();break;
      case 16: averagescore();break;
      case 17: asciitellsyouwhatsymbolthatis();break;
      case 18: abecomesA();break;
      case 19: break;
      default: printf("\nIncorrect option.");break;
    }
    printf("\nPress a key to continue.");
    getch();
  }while(op!=19);
  return 0;
}
