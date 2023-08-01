#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node* next;
} Node;

void insert_end(Node** root, int value) {
    Node* new_node = malloc(sizeof(Node));
    new_node->value = value;
    new_node->next = NULL;

    if(*root == NULL) {
        *root = new_node;
        return;
    }

    Node* current = *root;
    while(current->next != NULL){
        current = current->next;
    }

    current->next = new_node;
}

int main() {
    // Node* root = malloc(sizeof(Node));
    // root->value = 2;
    // root->next = NULL;

    Node* root = NULL;

    insert_end(&root, 3);
    insert_end(&root, 4);

    Node* current = root;
    while(current != NULL) {
        printf("%d\n", current->value);
        current = current->next;
    }

    return 0;
}