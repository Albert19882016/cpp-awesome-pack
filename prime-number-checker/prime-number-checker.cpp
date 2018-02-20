//Pengenal Bilangan Prima

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char toUpper(char);

int main(){
  char r, isPrime;
  int n;
  do{
    system("cls");
    isPrime = 1;
    printf("Prime Number Checker\n");
    printf("====================\n\n");
    printf("Input N : ");
    scanf("%d", &n);
    for(int i=2; i<=sqrt(n); i++){
      if(n % i == 0)
        isPrime = 0;
    }
    if(isPrime && n >= 2)
      printf("\n%d is a PRIME number", n);
    else
      printf("\n%d is NOT a prime number", n);
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
