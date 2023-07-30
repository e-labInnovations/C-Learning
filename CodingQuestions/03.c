/*
* Problem Statement  :
*
* You’re given a function that accepts the following, a string1, its length
* and a character c. Your job is to replace all the occurrences of character c
* in string1 and capitalize it or decapitalize it based on the character c.
* 
* Input :
* hello world
* l
* Output :
* heLLo worLd
* 
* Input :
* prepinsta
* p
* Output :
* PrePinsta
*/

#include <stdio.h>
#include <string.h>

char* capitalizeOperation(char str[], int len, char c) {
    char captialC = c>96?c-32:c;
    char smallC = c<96?c+32:c;

    for(int i=0; i<len; i++) {
        if(str[i] == captialC) {
            str[i] = smallC;
        } else if(str[i] == smallC) {
            str[i] = captialC;
        }
    }

    return str;
}

int main() {
    char string1[] = "prepinsta";
    int len = strlen(string1);
    char c = 'P';

    printf("\nInput: %s", string1);
    char* output = capitalizeOperation(string1, len, c);
    printf("\nOutput: %s", output);

    return 0;
}