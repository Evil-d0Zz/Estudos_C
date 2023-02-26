# Linguagem C

## Estrutura Padrão

```c
# include <stdio.h>

void main(){
    
}

```

## Variaveis

Note: Para declarar uma variável em C, é nescessário especificar o tipo e nome da da variável.

> Tipos:

```c
int > Numeros inteiros
char > Texto/Caracteres Especiais
float > Numeros decimais
double > É um float melhorado
bool > True ou False

Exemplo: 

int idade = 22;
char nome = 'd0zz Evil';
float preco = 12.50;
double preço_precico = 1.23456;
bool confirma = True;
```

## Operadores

Note: Os Operadores são símbolos que indicam uma operação a ser realizada em uma ou mais variaveis.

> Tipos de Operadores

```c
- Aritimeticos: Utilizados para realizar operações matemáticas básicas, como soma, subtração, multiplicação e divisão.

Exemplo:

int num = 10, num2 = 20;

int soma = num + num2;
int subtracao = num - num2;
int multiplicacao = num * num2;
int divisao = num / num2;


- Atribuição: Ultilizados para atribuir valores a variaveis

Exemplo:

=   Atribuição Simples.
+=  Atribuição Com Soma. 
-=  Atribuição Com Subtração.
*=  Atribuição Com Multiplicação.
/=  Atribuição Com Divisão.

- Relacionais: Ultilizados para comparar valores e retornar um resultado booleano (True ou False)

Exemplo:

==   Igual.
!=   Diferente.
>=   Maior que.
<=   Menor que.

- Lógicos: Ultilizado para combinar expressoes booleanas e retornar um resultado boolenao

&&   e
||   ou
```

## Estruturas de Controle

Note: As Estruturas de controle são usadas para controlar o fluxo de execução de um programa C.

> Principais Estruturas de controle

```c
- Principais Estruturas de controle:

if      Se
else    Senão
while   Enquanto
switch  Mudar

Exemplo:

- Estrutura condicional if: Permite executar um bloco de código se uma condição for verdadeira. Se a condição não for verdadeira, o bloco é ignorado. 

Exemplo:

if (nota >= 7) {
    printf('Aluno Aprovado!');
}

- Estrutura condicional if/else: permite executar um bloco de código se uma condição for verdadeira e outro bloco de código se a condição for falsa.

Exemplo:

if (nota >= 7) {
    printf("Aluno Aprovado!");
}

else{
    printf("Aluno Reprovado!");
}

- Estrutura condicional switch: Estrutura condicional switch: permite executar diferentes blocos de código dependendo do valor de uma variável.

Exemplo:

switch (opcao) {
    case '1':
        prinft("Você Escolheu a Opção 1.\n");
        break;

    case '2':
        printf("Você Escolheu a Opção 2.\n");
        break;
    
    default:
        printf("Opção Invaida!\n");
        break;
}

- Estrutura de Repetição while: permite executar um bloco de código enquanto uma condição for verdadeira. 

Exemplo:

while (contador <= 10) {
    printf("Contador: %d\n", contador);
    contador++;
}

- Estrutura de repetição do-while: permite executar um bloco de código pelo menos uma vez, e depois repetir enquanto uma condição for verdadeira.

Exemplo:

do {
    printf("Contador: %d\n", contador);
    contador++;
} while (contador <= 10);

- Estrutura de repetição for: permite executar um bloco de código várias vezes, com um contador controlando o número de repetições.

Exemplo:

for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
```

## Funções

Note: As funções são blocos de código que realizam uma tarefa específica. Para definir uma função, é necessário especificar o tipo de retorno da função, o nome da função e os parâmetros da função.

Exemplo:

```c
int soma(int x, int y) {
    return x + y;
}

int resultado = soma(10, 5); // Atribui o valor 15 à variável resultado
```