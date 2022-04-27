#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    char op;
    a = b = 0;
    op = 0;
    
    printf("Digite um número: ");
    scanf("%d", &a);
    
    printf("Digite outro número: ");
    scanf("%d", &b);
    
    printf("Digite a operação matemática que deseja fazer: ");
    scanf(" %c", &op);
    
    printf("Número 1: %d\n", a);
    printf("Número 2: %d\n", b);
    printf("Operação: %d\n", op);
    printf("%d %c %d = ", a, op, b);
    
    if(op == '+'){
        printf("%d\n", a+b);
    }else if(op == '-'){
        printf("%d\n", a-b);
    }else if(op == '/'){
        printf("%d\n", a/b);
    }else if(op == '*'){
        printf("%d\n", a*b);
    }else{
        printf("%d\n", a%b);
    }

    return 0;
}
