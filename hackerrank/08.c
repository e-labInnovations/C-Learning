/*
Task

Given a five digit integer, print the sum of its digits.

Input Format

The input contains a single five digit number, .

Constraints
10000<=n<=99999

Output Format

Print the sum of the digits of the five digit number.

Sample Input 0

10564
Sample Output 0

16
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum = 0;
    while(n != 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}