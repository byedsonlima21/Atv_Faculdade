#include <stdio.h>

int main(){

    int a, b, c, soma, sub, multi;
    float div;

    printf("Digite o primeiro numero: ");
    scanf("%i", &a);

    printf("Digite o segundo numero: ");
    scanf("%i", &b);

    printf("Digite o terceiro numero: ");
    scanf("%i", &c);

    soma = a + b + c;
    sub = a - b - c;
    multi = a * b * c;

    printf("\n=+=+=+=+=+ Teste 1 =+=+=+=+=+\nSoma: %d + %d + %d : %d\n", a, b, c, soma);
    printf("\n=+=+=+=+=+ Teste 2 =+=+=+=+=+\nSubtracao: %d - %d - %d : %d\n", a, b, c, sub);
    printf("\n=+=+=+=+=+ Teste 3 =+=+=+=+=+\nMultiplicacao: %d * %d * %d : %d\n", a, b, c, multi);

    if(b != 0 && c != 0){

        div = (float)a / b / c;
        
        printf("\n=+=+=+=+=+ Teste 4 =+=+=+=+=+\nDivisao: %d / %d / %d : %.2f\n", a, b, c, div);
    
    } else {
    
        printf("\nDivisao indefinida, tentativa de dividisao por 0");

    }

    if (a > b) {

        printf("\nO primeiro numero es %i portanto ele es maior que o segundo %i", a, b);

    } else {

        printf("\nO segudo numero es %i portanto ele es maior que o primeiro %i", b, a);

    }

    if ( b > c) {

        printf("\nO segundo numero es %i portanto ele es maior que o terceiro %i\n", b, c);

    } else {

        printf("\nO terceiro numero es %i portanto ele es maior que o segudo %i\n", c, b);

    }

    if (a > 0 && b % 2 == 0) {

        printf("\nO primeiro numero es %i es positivo e o segundo %i es par.\n", a, b);

    } else {

        printf("As condicoes logicas nao forma atendidas");

    }

    return 0;
}