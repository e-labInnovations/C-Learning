/*
Task:

Complete the function void update(int *a, int *b). It receives two integer pointers, int* a and int* b.
Set the value of 'a' to their sum, and 'b' to their absolute difference.

Input Format:

The input will contain two integers, a and b, separated by a newline.

Output Format:

Modify the two values in place, and the code stub main() will print their values.

Note: Input/output will be automatically handled. You only have to complete the function described in the 'task' section.

Sample Input:

4
5

Sample Output:

9
1
*/

#include <stdio.h>

// Function to update the values of 'a' and 'b' in place
void update(int *a, int *b) {
    // Calculate the sum of 'a' and 'b' and update 'a'
    int sum = *a + *b;
    *a = sum;

    // Calculate the absolute difference between 'a' and 'b' and update 'b'
    int difference = (*a - *b) < 0 ? -1 * (*a - *b) : (*a - *b);
    *b = difference;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    // Read input integers 'a' and 'b'
    scanf("%d %d", &a, &b);

    // Call the update function to modify the values of 'a' and 'b'
    update(pa, pb);

    // Print the updated values of 'a' and 'b'
    printf("%d\n%d", a, b);

    return 0;
}