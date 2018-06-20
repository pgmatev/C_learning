#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct{
    int number;
    char name[20];
    int marks[20];
    float average;
}tstudent;

void my_write(char *filename){
    FILE *f;
    tstudent s;
    int i;
    int n, k;
    do{
    printf("\nEnter the amount of students: ");
    scanf("%d", &n);
    }while(n<0);
    f=fopen(filename, "wb");
    for(k=0; k<n; k++){
        if(f){
            printf("\nEnter the number of the student: ");
            scanf("%d",&s.number);
            getchar();
            printf("\nEnter the name of the student: ");
            gets(s.name);
            for(i=1; i=20; i++){
                do{
                printf("\nEnter the mark of the student: ");
                scanf("%d", &s.marks[i]);
              }while(s.marks[i]>6 || s.marks[i]==1 || s.marks[i]<0);
                if(s.marks[i]==0){
                    break;
                }
                s.average+=s.marks[i];
            }
            s.average=s.average/i;
        }
        else printf("\n\nError: 696969 \nThe file could not open!\n\n");
    }
    fclose(f);
}
void my_read(char *filename){
  FILE *f;
  char s[100];
  f=fopen(filename, "r");
  if(f){
    while(!feof(f)){
      if(fgets(s,60,f))
        printf("%s\n",f);
    }
    fclose(f);
  }
  else printf("\n\nError: 696969 \nThe file could not open!\n\n");
}

int main()
{
    char filename[80];
    printf("\nGive the adress to the file you would like to use: ");
    gets(filename);
     unsigned char a;
  int op;
  op=1;
  do{
    do{
    system("cls");
    printf("Choose a task");
    if(op==1)printf("\n>1. Write");
    else printf("\n 1. Write");
    if(op==2)printf("\n>2. Read");
    else printf("\n 2. Read");
    if(op==3)printf("\n>3. Add");
    else printf("\n 3. Add");
    if(op==4)printf("\n>4. Change file");
    else printf("\n 4. Change file");
    if(op==5)printf("\n>5. Exit");
    else printf("\n 5. Exit");
        a=getch();
    if(a==224){
        a=getch();
        if(a==80)op++;
        if(a==72)op--;
    }
    }while(a!=13);
    switch(op){
      case 1: my_write(filename); break;
      case 2: my_read(filename); break;
      case 3: break;
      case 4: break;
      case 5: break;
      default: printf("\nIncorrect option.");break;
    }
    printf("\nPress a key to continue.");
    getch();
  }while(op!=5);
}
