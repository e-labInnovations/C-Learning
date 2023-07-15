#include <stdio.h>
#include <stdlib.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main() {
    int exitStatus;

    exitStatus = system("python test.py");

    if (exitStatus == 0) {
        printf(ANSI_COLOR_GREEN "Command executed successfully.\n" ANSI_COLOR_RESET);
    } else {
        printf(ANSI_COLOR_RED "Command execution failed.\n" ANSI_COLOR_RESET);
    }

    return 0;
}