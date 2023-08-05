/*
Task:

You have to print the character, ch, in the first line.
Then print s in the next line.
In the last line, print the sentence, sen.

Input Format:

First, take a character, ch, as input.
Then take the string, s, as input.
Lastly, take the sentence, sen, as input.

Constraints:

Strings for s and sen will have fewer than 100 characters, including the newline.

Output Format:

Print three lines of output. The first line prints the character, ch.
The second line prints the string, s.
The third line prints the sentence, sen.

Sample Input 0:

C
Language
Welcome To C!!
Sample Output 0:

C
Language
Welcome To C!!
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char character;
    char string[100], sentence[100];
    
    // Read input for character, string, and sentence
    scanf("%c", &character);
    scanf("%s", string);
    scanf(" %[^\n]s", sentence); //The space before the %[^\n]s format specifier is essential. 
                                 //It acts as a whitespace skipper, allowing scanf to consume any leading whitespace characters (including newline characters) before reading the string sentence.
    
    // Print the output
    printf("%c\n%s\n%s", character, string, sentence);
    
    return 0;
}