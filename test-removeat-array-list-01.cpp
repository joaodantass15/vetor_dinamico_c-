// TESTE 03 - conjunto de remoções de elemento pelo índice 

#include "array_list.hpp" // Inclui o cabeçalho da implementação da lista dinâmica (vetor)
#include <iostream> // Inclui a biblioteca de entrada e saída padrão
#include <chrono> // Inclui a biblioteca para medição de tempo

void test_remove_at() { // Função que testa a remoção de elementos pelo índice
    array_list arr; // Cria uma instância de array_list chamada arr
    const int NUM_ELEMENTS = 10000; // Define uma constante para o número de elementos a serem inseridos

    // Inserir elementos no vetor
    for (int i = 0; i < NUM_ELEMENTS; ++i) { // Loop que itera de 0 até NUM_ELEMENTS - 1
        arr.push_back(i); // Insere o elemento 'i' no final do vetor
    }

    auto start = std::chrono::high_resolution_clock::now(); // Marca o tempo inicial
    for (int i = 0; i < NUM_ELEMENTS; ++i) { // Loop que itera de 0 até NUM_ELEMENTS - 1
        arr.remove_at(0);  // Remove o primeiro elemento repetidamente
    }
    auto end = std::chrono::high_resolution_clock::now(); // Marca o tempo final
    std::chrono::duration<double, std::milli> duration = end - start; // Calcula a duração da execução em milissegundos

    std::cout << "Remoção pelo índice com " << NUM_ELEMENTS << " elementos: " << duration.count() << " ms" << std::endl; // Exibe o tempo de execução
}

int main() {
    test_remove_at(); // Chama a função de teste para remoção pelo índice
    return 0; // Retorna 0, indicando que o programa foi executado com sucesso
}
