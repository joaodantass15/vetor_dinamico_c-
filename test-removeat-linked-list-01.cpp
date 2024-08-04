// TESTE 03 - lista ligada

#include "linked_list.hpp" // Inclui o cabeçalho da implementação da lista ligada
#include <iostream> // Inclui a biblioteca de entrada e saída padrão
#include <chrono> // Inclui a biblioteca para medição de tempo

int main() {
    linked_list myList; // Cria uma instância da lista ligada chamada myList
    const int NUM_ELEMENTS = 10000; // Define uma constante para o número de elementos a serem inseridos

    // Popula a lista com elementos
    for (int i = 0; i < NUM_ELEMENTS; ++i) { // Loop que itera de 0 até NUM_ELEMENTS - 1
        myList.push_back(i); // Insere o elemento 'i' no final da lista
    }

    // Medir o tempo de execução para remoções
    auto start = std::chrono::high_resolution_clock::now(); // Marca o tempo inicial

    // Remover elementos pelo índice
    for (int i = 0; i < NUM_ELEMENTS; ++i) { // Loop que itera de 0 até NUM_ELEMENTS - 1
        myList.remove_at(0);  // Sempre remove o primeiro elemento da lista
    }

    auto end = std::chrono::high_resolution_clock::now(); // Marca o tempo final
    std::chrono::duration<double> duration = end - start; // Calcula a duração da execução

    // Exibir o tempo de execução
    std::cout << "Tempo de execução: " << duration.count() << " segundos" << std::endl; // Exibe o tempo de execução em segundos

    return 0; // Retorna 0, indicando que o programa foi executado com sucesso
}
