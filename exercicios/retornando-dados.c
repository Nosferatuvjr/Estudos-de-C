#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
   setlocale(LC_ALL, "Portuguese");

   char nome[30];
   int idade;
   float peso;

   printf("<<< EXERCICIO - Dados >>>\n\n");

   printf("Qual eh o seu nome?\n");
   gets(nome);

   printf("Quantos anos voce tem?\n");
   fflush(stdin);
   scanf("%d", &idade);
   
   printf("Qual eh o seu peso?\n");
   fflush(stdin);
   scanf("%f", &peso);

   printf("--------<<< Processando >>>--------\n\n");

   printf("Muito prazer, %s!, voce tem %d anos e pesa %.1fkg!\nFim!\n", nome, idade, peso);
}