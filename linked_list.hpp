#ifndef __LINKED_LIST_IFRN__
#define __LINKED_LIST_IFRN__

#include <iostream>

class linked_list {
private:
    struct int_node {
        int value;
        int_node* next;
        int_node* prev;
    };
    int_node* head;
    int_node* tail;
    unsigned int size_;

public:
    linked_list() : head(nullptr), tail(nullptr), size_(0) {}

    ~linked_list() {
        clear();
    }

    unsigned int size() {
        return size_;
    }

    bool insert_at(unsigned int index, int value) {
        // Implementar a inserção em um índice específico
    }

    bool remove_at(unsigned int index) {
        // Implementar a remoção em um índice específico
    }

    void clear() {
        // Implementar a lógica para limpar a lista
    }

    void push_back(int value) {
        int_node* newNode = new int_node{value, nullptr, tail};
        if (tail) {
            tail->next = newNode;
        } else {
            head = newNode;  // Lista estava vazia
        }
        tail = newNode;
        size_++;
    }

    void push_front(int value) {
        int_node* newNode = new int_node{value, head, nullptr};
        if (head) {
            head->prev = newNode;
        } else {
            tail = newNode;  // Lista estava vazia
        }
        head = newNode;
        size_++;
    }

    bool pop_back() {
        if (!tail) return false;  // Lista vazia
        int_node* toDelete = tail;
        tail = tail->prev;
        if (tail) {
            tail->next = nullptr;
        } else {
            head = nullptr;  // Lista ficou vazia
        }
        delete toDelete;
        size_--;
        return true;
    }

    bool pop_front() {
        if (!head) return false;  // Lista vazia
        int_node* toDelete = head;
        head = head->next;
        if (head) {
            head->prev = nullptr;
        } else {
            tail = nullptr;  // Lista ficou vazia
        }
        delete toDelete;
        size_--;
        return true;
    }
    
    // Outras funções podem ser implementadas aqui
};

#endif // __LINKED_LIST_IFRN__
