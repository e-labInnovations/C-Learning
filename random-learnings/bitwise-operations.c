#include <stdio.h>

int main() {
    unsigned char inputData = 0xf0;
    int pos = 2;

    //check an integer is a power of 2
    int data = 16;
    int isPowerOf2 = ((data != 0) && !(data & (data - 1)));
    printf("Check number is power of 2\n");
    printf("Number %d is %sa power of 2", data, isPowerOf2?"":" not");

    //set a particular bit
    printf("\n\nSet Bit");
    printf("\nInput: %x, pos=%d", inputData, pos);
    inputData |= (1<<pos);
    printf("\nOutput: %x", inputData);

    //clear a particular bit
    printf("\n\nClear Bit");
    printf("\nInput: %x, pos=%d", inputData, pos);
    inputData &= ~(1<<pos);
    printf("\nOutput: %x", inputData);

    //check if a particular bit is set
    printf("\n\nCheck Bit Set");
    printf("\nInput: %x, pos=%d", inputData, pos);
    int isSet = inputData & (1<<pos);
    printf("\nResult: %s", isSet?"Set":"Not set");

    //toggle a particular bit
    printf("\n\nToggle Bit");
    printf("\nInput: %x, pos=%d", inputData, pos);
    inputData ^= (1<<pos);
    printf("\nOutput: %x", inputData);


}