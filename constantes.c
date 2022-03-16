/***************************************************************************
 *                                                                         *
 *                    APRENDENDO A LINGUAGEM C                             *
 *                                                                         *
 ***************************************************************************/

//define é uma diretiva de pre-processador que define uma constante
//const é uma palavra reservada do C que define uma constante
//com o define, o valor é substituido antes da compilação, entao ele nem vai precisar estar na memoria
//com o const é possivel definir uma constante com um valor fixo

#include <stdio.h>
#include <stdlib.h>

#define TOTAL 8

void main(){
   const int a = 10;

   printf("%d, %d\n", a, TOTAL);
}