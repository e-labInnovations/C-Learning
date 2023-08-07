/*
Hexadecimal nibble swap
*/
#include <stdio.h>

int main() {
    unsigned char hex;

    printf("INPUT: 0x");
    scanf("%02x", &hex);

    printf("\nMETHOD 1\n");
    printf("0x%02x | 0x%02x\n", ((hex & 0x0f)<<4), ((hex & 0xF0)>>4));
    unsigned char swapped_hex = ((hex & 0x0f)<<4) | ((hex & 0xF0)>>4);
    printf("0x%02x\n", swapped_hex);

    printf("\nMETHOD 2\n");
    unsigned char swapped_hex1 = (hex >> 4) ^ (hex << 4);
    printf("0x%02x ^ 0x%02x\n", (hex>>4), (hex<<4));
    printf("0x%02x\n", swapped_hex1);

    printf("\nMETHOD 3\n");
    unsigned char swapped_hex2 = (hex >> 4) | (hex << 4);
    printf("0x%02x | 0x%02x\n", (hex>>4), (hex<<4));
    printf("0x%02x", swapped_hex2);

    return 0;
}