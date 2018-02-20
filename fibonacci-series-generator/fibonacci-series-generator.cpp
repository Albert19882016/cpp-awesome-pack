//Pencetak Deret Fibonacci

#include <stdio.h>
#include <stdlib.h>

char toUpper(char);

int main(){
  char r;
  do{
    int n, x = 0, y = 1, z = 1;
    system("cls");
    printf("Fibonacci Series Generator\n");
    printf("==========================\n\n");
    printf("Input N : ");
    scanf("%d", &n);
    printf("\nFibonacci series less than %d:\n\n", n);
    while(z < n){
      printf("%5d", z);
      z = x + y;
      x = y;
      y = z;
    }
    printf("\n\nTry again [Y/N]? ");
    do{
      r = getchar();
      r = toUpper(r);
    }while(r != 'Y' && r != 'N');
  }while(r == 'Y');
  return 0;
}

char toUpper(char x){
  if (x >= 97 && x <= 122) x = x - 32;
  return x;
}
