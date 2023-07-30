/*
 * Problem Statement:
 * Given two numbers number1 and number2 as strings, your task is to check the number of borrow
 * operations needed for subtracting number1 from number2. If the subtraction is not possible
 * (i.e., number2 is greater than number1), then return "Not possible".
 *
 * Example:
 * Sample Test Case 1:
 * Input:
 *   number1 = 754
 *   number2 = 658
 *
 * Output:
 *   Borrow operations needed: 2
 *
 * Sample Test Case 2:
 * Input:
 *   number1 = 654
 *   number2 = 666
 *
 * Output:
 *   Subtraction Not possible
 */

#include <stdio.h>

int countBorrowOperations(int num1, int num2) {
    if(num1 < num2)
        return -1;

    int totalBorrows = 0;
    int isBorrowed = 0;
    while(num1 != 0 && num2 !=0) {
        int num1digit = num1%10;
        int num2digit = num2%10;
        if(isBorrowed)
            num1digit--;
        if(num1digit < num2digit) {
            totalBorrows++;
            num1 = num1/10;
            num2 = num2/10;
            isBorrowed = 1;
        } else {
            num1 = num1/10;
            num2 = num2/10;
            isBorrowed = 0;
        }
    }

    return totalBorrows;
}

int main() {
    int number1 = 754;
    int number2 = 658;

    int totalBorrows = countBorrowOperations(number1, number2);

    printf("\nNumber1: %d", number1);
    printf("\nNumber2: %d", number2);

    if(totalBorrows == -1)
        printf("\nSubtraction Not possible");
    else
        printf("\nBorrow operations needed: %d", totalBorrows);
    
    return 0;
}