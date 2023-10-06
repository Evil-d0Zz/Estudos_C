# Linguagem C
---
## Estrutura Padrão

```c
# include <stdio.h>

void main(){
    
}

```
---
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
---
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
---
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
---
## Funções

Note: As funções são blocos de código que realizam uma tarefa específica. Para definir uma função, é necessário especificar o tipo de retorno da função, o nome da função e os parâmetros da função.

Exemplo:

```c
int soma(int x, int y) {
    return x + y;
}

int resultado = soma(10, 5); // Atribui o valor 15 à variável resultado
```
---
## Interação com o Sistema

```c
#include <stdio.h>
#include <stdlib.h> // Biblioteca responsavel pelo comando "system"

int main() {
    printf("Abrindo o firefox...");
    system("firefox");

    return 0;
}
```
---
## Função Sleep() e usleep()

- As funções Sleep( ) e usleep( ), funcionam em sistemas operacionais diferentes, embora ambas apresentem a mesma funcionalidade: parar o tempo de execução. Mas com uma questão a mais, elas pertencem a bibliotecas diferentes. E novamente ressalto a possibilidade da utilização de Diretivas de Compilação no tópico seguinte, caso queira criar um código que funcione em ambos os sistemas operacionais.

Exemplo 1: Sleep()

Note: primeiramente a função Sleep( ), isso mesmo, a letra S é maiúscula, ela funciona apenas em Windows e pertence a biblioteca “windows.h”, como parâmetro para a função deve-se passar um valor inteiro referente à quantidade de milissegundos que irá parar a execução do programa. Logo, caso eu execute o comando Sleep(500); o programa irá parar a sua execução durante meio segundo.

```c
#include <stdio.h>
#include <stdlib.h>     // Biblioteca responsavel pela Função system()
#include <windows.h>   // Biblioteca Responsavel pela Função Sleep()

int main() {
    printf("Abrindo o firefox...");
    Sleep(5000) // 5 Segundos de Espera
    system("firefox");

    return 0;
}
```

Exemplo 2: usleep()

Note: A função usleep( ), funcionando em sistemas Unix, a função está contida na biblioteca “unistd.h” e, diferente da função anterior, o valor inteiro informado como parâmetro da função indicará em microssegundos o tempo a ser parada a execução do programa, então se atente sempre a conversão de unidades. Portanto, caso eu execute usleep(500 *1000); o programa irá novamente parar a execução durante meio segundo, note que realizei uma multiplicação por 1000 para trabalhar com o tempo de micro para milissegundos.

```c
#include <stdio.h>
#include <stdlib.h>     // Biblioteca responsavel pela Função system()
#include <unistd.h>   // Biblioteca Responsavel pela Função usleep()

int main() {
    printf("Abrindo o firefox...");
    Sleep(5000) // 5 Segundos de Espera
    system("firefox");

    return 0;
}
```
---
## Diretivas de Compilação

- Nos itens anteriores foi falado um pouco sobre o uso de diferentes códigos para diferentes sistemas operacionais, mas como driblar essa barreira? Como fazer um código que possa ser usado em ambos os sistemas? Simples, basta usarmos as diretivas de compilação.

Você já deve ter se perguntado em algum momento ao iniciar a programação em C o porquê de os includes e os defines terem uma sintaxe, ou ainda se você já estiver avançado criando novos projetos, o porquê de existirem alguns itens nos headers. Essas são as diretivas de compilação, não vamos entrar em muitos detalhes, vamos utilizar apenas a parte básica.

Primeiro vamos entender basicamente que as diretivas de compilação é tudo que irá rodar antes do código, ou seja, todas as inclusões de bibliotecas, definições de constantes, nessas diretivas não podemos utilizar variáveis, mas podemos fazer testes lógicos. Veja o exemplo abaixo, que criamos uma função para gerenciar as funções de sleep:

 
Nessa função temos a inclusão das diretivas de #ifdef que funciona da mesma maneira que um if, porém chega a constante (definição) do sistema operacional e assim por diante, repare que existe a necessidade do uso do #endif uma vez que não existem chaves para delimitar o fim do código em cada bloco. E repare que o uso é feito duas vezes, dentro e fora da função em questão.

```c
void limpar_tela() {
#ifdef __linux__
	system("clear");
#elif _WIN32
	system("cls");
#else

#endif
}
```
