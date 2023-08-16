#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void delay(int milliseconds) {
#ifdef _WIN32
    Sleep(milliseconds);
#else
    struct timespec ts;
    ts.tv_sec = milliseconds / 1000;
    ts.tv_nsec = (milliseconds % 1000) * 1000000;
    nanosleep(&ts, NULL);
#endif
}

int main() {
    int total = 20; // Total number of blocks in the progress bar
    for (int i = 0; i <= total; i++) {
        printf("\r["); // Print the left bracket
        for (int j = 0; j < i; j++) {
            printf("=");
        }
        for (int j = i; j < total; j++) {
            printf(" ");
        }
        printf("] %d%%", (i * 100) / total);
        fflush(stdout); // Flush the output buffer to update the console
        delay(500); // Delay to simulate progress
    }
    printf("\nProgress completed!\n");
    return 0;
}
