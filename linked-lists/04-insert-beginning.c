#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node* next;
} Node;

void insert_beginning(Node** root, int value) {
    Node* new_node = malloc(sizeof(Node));
    new_node->value = value;
    new_node->next = *root;

    *root = new_node;
}

int main() {
    Node* root = NULL;

    insert_beginning(&root, 12);
    insert_beginning(&root, 13);
    insert_beginning(&root, 14);
    insert_beginning(&root, 15);
    insert_beginning(&root, 16);

    Node* current = root;
    while(current != NULL) {
        printf("%d\n", current->value);
        current = current->next;
    }
    return 0;
}