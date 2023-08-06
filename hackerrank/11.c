/*
Input Format

The first line contains an integer, .
The next line contains  space-separated integers.

Constraints
1<=n<=1000
1<=a[i]<=1000

Output Format
Print the sum of the integers in the array.

Sample Input 0
6
16 13 7 2 1 12 

Sample Output 0
51

Sample Input 1
7
1 13 15 20 12 13 2 

Sample Output 1
76
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);

    // int a[n];
    int *a = (int *)malloc(n * sizeof(int));

    for(int i=0; i<n; i++) {
        scanf("%d", a+i);
    }

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += a[i];
    }

    printf("%d", sum);

    free(a);

    return 0;
}