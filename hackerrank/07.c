/*
Task:

For each integer in the interval [a, b] (given as input):

If 1 <= n <= 9, then print the English representation of it in lowercase.
That is "one" for 1, "two" for 2, and so on.
Else if n > 9 and it is an even number, then print "even".
Else if n > 9 and it is an odd number, then print "odd".

Input Format:

The first line contains an integer, a.
The second line contains an integer, b.

Constraints:
1 <= a <= b <= 10^6

Output Format:

Print the appropriate English representation, even, or odd, based on the conditions described in the 'task' section.

Note: [a, b] = {x ∈ Z | a <= x <= b} = {a, a+1, ..., b}

Sample Input:

8
11
Sample Output:

eight
nine
even
odd
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);

    // Loop through the interval [a, b]
    for (int i = a; i <= b; i++) {
        if (1 <= i && i <= 9) {
            // Print the English representation of numbers from 1 to 9
            switch (i) {
                case 1:
                    printf("one\n");
                    break;
                case 2:
                    printf("two\n");
                    break;
                case 3:
                    printf("three\n");
                    break;
                case 4:
                    printf("four\n");
                    break;
                case 5:
                    printf("five\n");
                    break;
                case 6:
                    printf("six\n");
                    break;
                case 7:
                    printf("seven\n");
                    break;
                case 8:
                    printf("eight\n");
                    break;
                case 9:
                    printf("nine\n");
                    break;
            }
        } else {
            // Print "even" for even numbers, "odd" for odd numbers
            printf("%s\n", (i % 2 == 0) ? "even" : "odd");
        }
    }

    return 0;
}