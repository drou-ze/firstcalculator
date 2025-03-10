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


    if(op == '+' || op == '-' || op =='*' || op == '/'){
        switch(op){
        case '+':
            num1 = num1 + num2;
            printf("O seu resultado é: %f", num1);
            break;
        case '-':
            num1 = num1 - num2;
            printf("O seu resultado é: %f", num1);
            break;
        case '*':
            num1 = num1 * num2;
            printf("O seu resultado é: %f", num1);
            break;
        case '/':
            num1 = num1 / num2;
            printf("O seu resultado é: %f", num1);
            break;
        }
    }
    else{
        printf("Invalid operator.");
    }



}
