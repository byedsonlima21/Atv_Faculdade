#include <stdio.h>

int main(){

    int a, b, c;

    printf("Digite o primeiro valor: ");
    scanf("%i", &a);

    printf("Digite o segundo valor: ");
    scanf("%i", &b);

    printf("Digite o terceiro valor: ");
    scanf("%i", &c);

    printf("=+=+=+=+=+ Teste 1 =+=+=+=+=+\nSoma: %d + %d + %d : %d\n", a, b, c, a+b+c);
    printf("=+=+=+=+=+ Teste 2 =+=+=+=+=+\nSoma: %d - %d - %d : %d\n", a, b, c, a-b-c);
    printf("=+=+=+=+=+ Teste 3 =+=+=+=+=+\nSoma: %d * %d * %d : %d\n", a, b, c, a*b*c);
    printf("=+=+=+=+=+ Teste 2 =+=+=+=+=+\nSoma: %d / %d / %d : %d\n", a, b, c, a/b/c);

    return 0;
}