# vetor_dinamico_c-
Respositório para o trabalho de C++
Aluno: João Pedro Dantas Magalhães
Curso: TADS - IFRN 
Biblioteca de Classes para Manipulação de Vetores Dinâmicos e Listas Ligadas

Este projeto consiste na implementação de uma biblioteca de classes em C++ para manipulação de vetores dinâmicos de números inteiros, utilizando duas abordagens distintas: alocação dinâmica de arrays e listas duplamente ligadas. A biblioteca permite a realização de diversas operações, como inserção, remoção e busca de elementos, bem como operações adicionais que facilitam a manipulação dos dados.
Estruturas Implementadas
1. Array List
A implementação da array_list utiliza alocação dinâmica de arrays. A capacidade do array é aumentada conforme necessário, utilizando diferentes estratégias de realocação.
2. Lista Ligada
A implementação da linked_list utiliza uma estrutura de lista duplamente ligada, permitindo uma inserção e remoção eficientes de elementos em qualquer posição da lista.
Objetivo
O objetivo deste trabalho é estudar de forma prática o gerenciamento de memória em C++ e a comparação entre diferentes estruturas de dados. Para isso, foram realizados testes de complexidade de algoritmos utilizando a notação Big O, permitindo a análise do desempenho das operações implementadas e também verificar o tempo de execução dos testes.

Testes Realizados
Foram realizados cinco testes para cada estrutura de dados, avaliando o tempo de execução das operações:

> Inserção consecutiva de elementos no início do vetor.
> Inserção consecutiva de elementos no final do vetor.
> Remoção de elementos pelo índice.
> Remoção de elementos no início do vetor.
> Remoção de elementos no final do vetor.
Para cada classe, ou seja, com alocação dinâmica e lista duplamente encadeadas, foram feitos os 5 testes e observamos a complexidade do algoritmo e tempos de execução com a entrada 10.000. 
É importante salientar que cada teste foi implementado no VsCode, gerando um tempo de execução e analisando o código podemos calcular a complexidade do algoritmo utilizando notação big-OH.

Resultados
1. Alocação Dinâmica
Os testes foram realizados utilizando duas formas diferentes de implementação das classes, mas o código dos testes permaneceu o mesmo. A seguir, são apresentados os resultados dos testes:

Inserção consecutiva de elementos no início do vetor:

Entrada: 10.000 elementos
Tempo: 0 ms / 199.885 ms
Big-O: O(n^2)

Inserção consecutiva de elementos no final do vetor:

Entrada: 10.000 elementos
Tempo: 0 ms / 1.001 ms
Big-O: O(n)

Conjunto de remoções de elementos pelo índice:

Entrada: 10.000 elementos
Tempo: 0 ms / 225.889 ms
Big-O: O(n^2)

Conjunto de remoções de elementos no início do vetor:

Entrada: 10.000 elementos
Tempo: 0 ms / 218.876 ms
Big-O: O(n^2)

Conjunto de remoções de elementos no final do vetor:

Entrada: 10.000 elementos
Tempo: 0 ms
Big-O: O(n)

2. Listas Duplamente Encadeadas
Os testes foram repetidos utilizando uma lista duplamente encadeada. A seguir, são apresentados os resultados dos testes:

Inserção consecutiva de elementos no início do vetor:

Entrada: 10.000 elementos
Tempo: 0.008993 segundos
Big-O: O(n)

Inserção consecutiva de elementos no final do vetor:

Entrada: 10.000 elementos
Tempo: 0.008976 segundos
Big-O: O(n) / O(1)

Conjunto de remoções de elementos pelo índice:

Entrada: 10.000 elementos
Tempo: 0 segundos
Big-O: O(n^2)

Conjunto de remoções de elementos no início do vetor:

Entrada: 10.000 elementos
Tempo: 0.565676 segundos
Big-O: O(n) / O(1)

Conjunto de remoções de elementos no final do vetor:

Entrada: 10.000 elementos
Tempo: 0.560696 segundos
Big-O: O(n)

Como Executar os Testes
Para compilar e executar os testes, siga as instruções abaixo:

Instale o MinGW (ou qualquer compilador C++).
> Abra o Visual Studio Code e carregue o projeto.
> Abra o terminal integrado no VS Code.
> Compile o teste desejado no terminal ou no prórprio VsCode com a telca f5 (deverão estar configuradas e instaladas as extensões necessárias)

Conclusão
> A implementação das classes array_list e linked_list demonstra a importância de escolher a estrutura de dados adequada para cada situação, levando em consideração fatores como eficiência de tempo e complexidade. Os testes realizados fornecem uma base sólida para a compreensão do desempenho das operações, permitindo uma análise comparativa entre as duas abordagens.
