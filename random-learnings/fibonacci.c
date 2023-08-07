#include <stdio.h>

int main() {
    int num, f, f1, f2;
    printf("Enter your limit: ");
    scanf("%d", &num);

    f1 = 0;
    f2 = 1;

    printf("%d ", f1);
    do {
        printf("%d ", f2);
        f = f1 + f2;
        f1 = f2;
        f2 = f;
    } while(f2<=num);

    return 0;
}