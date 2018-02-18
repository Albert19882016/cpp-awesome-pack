/*###################################################
  #                                                 #
  #   Rock-Paper-Scissor Game                       #
  #   Copyright (C) 2008 - 2018                     #
  #   By: Junian Triajianto                         #
  #                                                 #
  ###################################################*/

#include <stdio.h>
#include <stdlib.h>

char toUpper(char x);

int main(){
  char r, p, s;
  do{
    char a[4]="RPS", k[4]="RPS";
    int i;
    system("cls");
    printf("Rock-Paper-Scissor Game\n");
    printf("=======================\n\n");
    printf("R: Rock\nP: Paper\nS: Scissor");
    for(i=1;i<=2;i++){
      printf("\n\nYOU: %s\nCPU: %s\n", a, k);
      printf("\nYou choose ");
      do{
        p = getchar();
        p = toUpper(p);
      }while((p != 'R' && p != 'P' && p != 'S') || p == s);
      s = p;
      printf("%c\nCPU choose ", p);
      if(p == 'R'){
        printf("S");
        k[0] = ' ';
        a[2] = ' ';
      }else if(p == 'P'){
        printf("R");
        k[1] = ' ';
        a[0] = ' ';
      }else if(p == 'S'){
        printf("P");
        k[2] = ' ';
        a[1] = ' ';
      }
    }
    printf("\n\nYou: %s\nCPU: %s\n", a, k);
    printf("\nYou LOSE!\n");
    printf("\nTry again [Y/N]? ");
    do{
      r = getchar();
      r = toUpper(r);
    }while(r != 'Y' && r != 'N');
  }while(r == 'Y');
  return 0;
}

char toUpper(char x){
  if (x >= 97 && x <= 122) x=x-32;
  return x;
}
