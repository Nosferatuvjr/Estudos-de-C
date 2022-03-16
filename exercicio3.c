#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
   setlocale(LC_ALL, "Portuguese");
   char nome1[40], nome2[40], nome3[40];
   char sexo1, sexo2, sexo3;
   float nota1, nota2, nota3;

   printf("<<< EXERCICIO - LISTAGEM >>>\n\n");

   printf("Cadastrando primeira pessoa:\n");
   printf("----------------------------------\n");
   fflush(stdin);

   printf("NOME: ");
   gets(nome1);
   printf("SEXO: [M/F] ");
   sexo1 = getchar();
   printf("NOTA: ");
   scanf("%f", &nota1);
   printf("\n");

   printf("Cadastrando segunda pessoa:\n");
   printf("----------------------------------\n");
   fflush(stdin);

   printf("NOME: ");
   gets(nome2);
   printf("SEXO: [M/F] ");
   sexo2 = getchar();
   printf("NOTA: ");
   scanf("%f", &nota2);
   printf("\n");

   printf("Cadastrando terceira pessoa:\n");
   printf("----------------------------------\n");
   fflush(stdin);

   printf("NOME: ");
   gets(nome3);
   printf("SEXO: [M/F] ");
   sexo3 = getchar();
   printf("NOTA: ");
   scanf("%f", &nota3);
   printf("\n");

   printf("Listagem completa:\n");
   printf("----------------------------------\n");
   printf("NOME                SEXO  NOTA\n");
   printf("%-20s %c %6.1f\n", nome1, sexo1, nota1);
   printf("%-20s %c %6.1f\n", nome2, sexo2, nota2);
   printf("%-20s %c %6.1f\n", nome3, sexo3, nota3);

   printf("\n<<< Fim da listagem! >>>\n");
}