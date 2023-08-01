#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node * next;
} Node;

int main() {
    Node root;

    root.value = 5;
    root.next = malloc(sizeof(Node));

    root.next->value = 6;
    root.next->next = malloc(sizeof(Node));

    root.next->next->value = 7;
    root.next->next->next = NULL;

    /* USING WHILE LOOP */
    printf("USING WHILE LOOP\n");
    Node* current = &root;
    while(current != NULL) {
        printf("%d\n", current->value);
        current = current->next;
    }

    /* USING FOR LOOP */
    printf("USING FOR LOOP\n");
    for(Node* current = &root; current!=NULL;current=current->next) {
        printf("%d\n", current->value);
    }

    free(root.next->next);
    free(root.next);

    return 0;
}