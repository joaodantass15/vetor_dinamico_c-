// TESTE 01 - inserção consecutiva de elementos no início de um vetor com alocação dinâmica

#include "array_list.hpp" // Inclui o cabeçalho da implementação da lista dinâmica (vetor)
#include <iostream> // Inclui a biblioteca de entrada e saída padrão
#include <chrono> // Inclui a biblioteca para medição de tempo

void test_push_front() { // Função que testa a inserção no início do vetor
    array_list arr; // Cria uma instância de array_list chamada arr
    const int NUM_ELEMENTS = 10000; // Define uma constante para o número de elementos a serem inseridos

    auto start = std::chrono::high_resolution_clock::now(); // Marca o tempo inicial
    for (int i = 0; i < NUM_ELEMENTS; ++i) { // Loop que itera de 0 até NUM_ELEMENTS - 1
        arr.push_front(i); // Insere o elemento 'i' no início do vetor
    }
    auto end = std::chrono::high_resolution_clock::now(); // Marca o tempo final
    std::chrono::duration<double, std::milli> duration = end - start; // Calcula a duração da execução em milissegundos

    std::cout << "Inserção no início com " << NUM_ELEMENTS << " elementos: " << duration.count() << " ms" << std::endl; // Exibe o tempo de execução
}

int main() {
    test_push_front(); // Chama a função de teste para inserção no início
    return 0; // Retorna 0, indicando que o programa foi executado com sucesso
}
