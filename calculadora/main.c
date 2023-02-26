# include <stdio.h>

void main() {
    int num, num2;
    char sinal;
    printf("[+] - Digite o Sinal da Conta que você quer fazer ( + | - | * | / ): ");
    scanf("%c", &sinal);
    printf("\n[+] - Digite o primeiro numero: ");
    scanf("%d", &num);
    printf("\n[+] - Digite o Segundo Numero: ");
    scanf("%d", &num2);
    if (sinal == '+') {
        int soma = num + num2;
        printf("\n[+] - A soma de %d + %d é igual a: %d\n", num, num2, soma);
    }
    if (sinal == '-')
    {
        int sub = num - num2;
        printf("\n[+] - A Subtração de %d - %d é igual a: %d\n", num, num2, sub);
    }
    if (sinal == '*')
    {
        int multi = num * num2;
        printf("\n[+] - A Multiplicação de %d * %d é igual a: %d\n", num, num2, multi);
    }
    if (sinal == '/')
    {
        int divi = num / num2;
        printf("\n[+] - A Divisão de %d / %d é igual a: %d\n", num, num2, divi);
    }

}