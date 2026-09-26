
# Atividade em C - Vetores

## 1. Identificacao do estudante

**Nome:** Kaylane da Silva Mariano

**Curso:** Analise e Desenvolvimento de Sistemas (ADS)

**Disciplina:** Programacao de Computadores

## 2. Objetivo da atividade

Desenvolver um programa em linguagem C utilizando vetores, estruturas de repeticao, estruturas condicionais, entrada de dados e operacoes matematicas.

O programa le 20 numeros inteiros, armazena os valores em um vetor e realiza calculos e verificacoes solicitados no enunciado.

## 3. Logica utilizada

O programa utiliza um vetor de inteiros com 20 posicoes.

Primeiramente, uma estrutura de repeticao `for` solicita ao usuario os 20 numeros e armazena os valores no vetor.

Em seguida, outro `for` percorre o vetor para:

- Somar os numeros multiplos de 3;
- Calcular a media dos numeros pares;
- Contar os numeros positivos e negativos;
- Identificar o maior e o menor valor.

As estruturas condicionais `if` e `else if` realizam as verificacoes necessarias.

A media dos pares e calculada somente quando existe pelo menos um numero par, evitando divisao por zero.

Por fim, o programa apresenta os resultados e todos os elementos armazenados no vetor.

## 4. Como compilar e executar

O programa pode ser executado em um compilador C, como o GCC.

Para compilar, utilize o comando:

```bash
gcc main.c -o programa
```

Para executar no Windows, utilize:

```bash
programa.exe
```

Em ambientes Linux, utilize:

```bash
./programa
```

## 5. Exemplo de entrada e saida

### Entrada

```text
3, -2, 4, 6, 0, -9, 8, 10, 12, -5,
7, 2, 15, -4, 18, 1, -6, 20, 9, -3
```

Os valores devem ser digitados individualmente quando solicitados pelo programa.

### Saida esperada

```text
Soma dos multiplos de 3: 54
Media dos numeros pares: 5.20
Quantidade de positivos: 13
Quantidade de negativos: 6
Maior valor: 20
Menor valor: -9
```

## 6. Evidencias da execucao

A captura de tela da execucao do programa esta disponivel na pasta `evidencias`, no arquivo `teste01.png`.
