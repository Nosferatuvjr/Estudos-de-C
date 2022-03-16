/***************************************************************************
 *                                                                         *
 *                    APRENDENDO A LINGUAGEM C                             *
 *                                                                         *
 ***************************************************************************/
//Começa com uma letra
//maiusculas e minusculas fazem diferença
//so usa letras, numeros e sublinhados
//nada de acentos, espaços, cedilha. So sublinhado
//nada de palavras reservadas: printf, main, int, void, char, etc
//recomendações: somente letras minusculas, sem numeros

#include <stdio.h>
#include <stdlib.h>

void main(){
   unsigned int idade = 24;
   float peso = 63.9;
   char sexo = 'M';
   char *nome = "Vivaldo";

   printf("%s eh do sexo %c, tem %d de idade e pesa %.2fkg!\n", nome, sexo, idade, peso);

   system("pause");
}