#include <stdio.h>
#include <stdlib.h>
void main()
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
