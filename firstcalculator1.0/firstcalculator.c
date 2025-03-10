#include <stdio.h>
#include <stdlib.h>



int main(){
    double num1;
    double num2;;
    char op;

    printf("Escreva o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Escreva a operacao: ");
    scanf(" %c", &op);

    printf("Escreva o segundo numero: ");
    scanf("%lf", &num2);

    if (op == '+'){
        num1 = num1 + num2;
    }
    else if(op == '-'){
        num1 = num1 - num2;
    }
    else if (op == '*'){
        num1 = num1 * num2;
    }
    else if(op == '/'){
        num1 = num1 / num2;
    }
    else{
        printf("Invalid Statement");
    }

    printf("Seu resultado é %fl", num1);
    return 0;



}
