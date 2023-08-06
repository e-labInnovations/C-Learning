#include <stdio.h>
#define CONCAT(a, b) a##b
#define c(x) #x
#define d(x) c(x)

int main() {
    printf("%s", d(CONCAT(mohammed, ashad)));
    return 0;
}