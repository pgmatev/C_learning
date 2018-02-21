#include <stdlib.h>
#include <stdio.h>

int main(){
  int y, m, d, l, max, d1, m1, y1, d2, m2, y2;
  do{
    system("cls");
    printf("\nEnter the Day:");
    scanf("%d",&d);
    printf("\nEnter the Month:");
    scanf("%d",&m);
    printf("\nEnter the Year:");
    scanf("%d",&y);
    if(y%4==0)l=1;
    if(y%100==0)l=0;
    if(y%400==0)l=1;
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)max=31;
    if(m==4 || m==6 || m==9 || m==11)max=30;
    if(m==2){
      if(l==1)max=29;
      else max=28;
    }
  }while(d<1 || d>max || m<1 || m>12 || y<1);
  d1=d;
  m1=m;
  y1=y;
  if(d1==1){
    if(m1==1){
    d1=31;
    m1=12;
    y1-=1;
    }
    else{
      m1-=1;
      if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)max=31;
      if(m==4 || m==6 || m==9 || m==11)max=30;
      if(m==2){
        if(l==1)max=29;
        else max=28;
      }
      d1=max;
    }
  }
    else d1-=1;
  printf("\nYesterday was %d.%d.%d",d1,m1,y1);
  d2=d;
  m2=m;
  y2=y;
  if(d2==max){
    if(m2==12){
      d2=1;
      m2=1;
      y2+=1;
    }
    else{
      d2=1;
      m2+=1;
    }
    else d2+=1;
  }
  printf("\nTomorrow is %d.%d.%d",d2,m2,y2);
  return 0;
}
