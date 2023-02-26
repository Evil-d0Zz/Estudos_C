#include <stdio.h>

void main() {
    int idade;
    printf("[-] - Digite Sua Idade: ");
    scanf("%d", &idade);
    if (idade >= 18) {
        printf("[OK] - Você tem %d anos! Permissão Concedida.\n", idade);
    }
    else
    {
        printf("[NO] - Você tem %d anos! Permissão Negada.\n", idade);

    }
    
}