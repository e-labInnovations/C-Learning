/*
 * Problem:
 * You have to write a function that accepts a string of length "len".
 * The string contains some '#' characters. Your task is to move all the '#' characters
 * to the front of the string and return the modified string.
 *
 * Example:
 * Sample Test Case
 * Input:
 *   str = "Move#Hash#to#Front"
 *   len = 20 (excluding the null-terminator)
 *
 * Output:
 *   Modified string: "###MoveHashtoFront"
 */

 #include <stdio.h>
 #include <string.h>

 char* moveHash(char str[], int len) {
    //Count number of hashes
    int noOfHashes = 0;
    for(int i=0; i<len; i++) {
        noOfHashes = str[i] == '#' ? noOfHashes+1 : noOfHashes;
    }

    //Move all non '#' to back
    for(int i=len-1, j=len-1; i>=0; i--) {
        if(str[i] != '#')
            str[j--] = str[i];
    }

    //Fill #
    for(int i=0; i<noOfHashes; i++) {
        str[i] = '#';
    }

    return str;
 }

 int main() {
    char str[] = "Move#Hash#to#Front";
    char len = strlen(str);

    printf("\nInput: %s", str);
    char *result = moveHash(str, len);
    printf("\nOutput: %s", result);

    return 0;
 }