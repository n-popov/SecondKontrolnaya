#include <iostream>

typedef struct list_element {
    int value;                  // Значение данного элемента
    struct list_element* next;  // Указатель на следующий элемент списка
    struct list_element* prev;	// Указатель на предыдущий элемент списка
} list_element;

void fix_list(list_element* head, list_element* tail) {
    for(list_element* current = head; current->next && current != tail ;current = current->next) {
        if (!(current->next->prev)) current->next->prev = current;
    }
    for(list_element* current = tail; current->prev && current != head ;current = current->prev) {
        if (!(current->prev->next)) current->prev->next = current;
    }
}

int main() {}