#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node* next;
} Node;

int main() {
    Node root, elem2;

    root.value = 5;
    root.next = malloc(sizeof(Node));

    root.next->value = 10;
    root.next->next = NULL;

    printf("First: %d\n", root.value);
    printf("Second: %d\n", root.next->value);

    free(root.next);
    return 0;
}