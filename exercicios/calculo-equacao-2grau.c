#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
   int a, b, c, raiz1, raiz2, delta;

   printf("Digite o valor de a: ");
   scanf("%d", &a);
   printf("Digite o valor de b: ");
   scanf("%d", &b);
   printf("Digite o valor de c: ");
   scanf("%d", &c);

   delta = b*b - 4*a*c;
   printf("O valor de delta e: %d\n", delta);

   if(delta > 0){
      printf("Raiz 1: %.2f\n", (-b + sqrt(delta))/(2*a));
      printf("Raiz 2: %.2f\n", (-b - sqrt(delta))/(2*a));
   }else if(delta == 0){
      printf("Raiz 1 e 2 valem: %.2f\n", (-b + sqrt(delta))/(2*a));
   }else{
      printf("Nao existe raiz real\n");
   }
   return 0;
}