/***************************************************************************
 *                                                                         *
 *                    APRENDENDO A LINGUAGEM C                             *
 *                                                                         *
 ***************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void main(){
   char nome[30];
   char ende[40];

   printf("Digite seu nome: ");
   gets(nome);

   printf("Digite seu endereco: ");
   gets(ende);

   printf("\n\nNome: %s\nEndereco: %s\n", nome, ende);
}

/*void main(){
   char resp;
   char r;
   char o;
   printf("Digite uma letra: ");
   fflush(stdin);
   scanf("%c", &resp);
   printf("Digite outra letra: ");
   scanf(" %c", &r);
   printf("Digite mais uma letra: ");
   fflush(stdin);
   o = getchar();
   printf("Voce digitou: \"%c\" e  \"%c\" e \"%c\"\n", resp, r, o);
}*/