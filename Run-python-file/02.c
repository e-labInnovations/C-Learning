#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_BUFFER_SIZE 1024
#define MAX_RETRIES 5
#define RETRY_DELAY 1  // Delay in seconds

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main() {
    int exitStatus;
    char commandOutput[MAX_BUFFER_SIZE];
    FILE* commandOutputFile;
    int retryCount = 0;

    // Run the Python command and redirect the output to the file
    exitStatus = system("python test.py > command_output.txt");

    // Retry opening the file with a delay between attempts
    while (retryCount < MAX_RETRIES) {
        commandOutputFile = fopen("command_output.txt", "r");
        if (commandOutputFile != NULL) {
            break;
        }
        retryCount++;
        sleep(RETRY_DELAY);
    }

    // Read the contents of the file into the variable if opened successfully
    if (commandOutputFile != NULL) {
        fgets(commandOutput, MAX_BUFFER_SIZE, commandOutputFile);
        fclose(commandOutputFile);

        // Remove the trailing newline character, if present
        if (strlen(commandOutput) > 0 && commandOutput[strlen(commandOutput) - 1] == '\n') {
            commandOutput[strlen(commandOutput) - 1] = '\0';
        }

        // Print the output stored in the variable
        if (exitStatus == 0) {
            printf(ANSI_COLOR_GREEN "Command executed successfully.\n" ANSI_COLOR_RESET);
            printf("Command output: %s\n", commandOutput);
        } else {
            printf(ANSI_COLOR_RED "Command execution failed.\n" ANSI_COLOR_RESET);
        }
    } else {
        printf(ANSI_COLOR_RED "Error opening the command output file.\n" ANSI_COLOR_RESET);
    }

    return 0;
}
