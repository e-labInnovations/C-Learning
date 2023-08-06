/*
Array Reversal
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */

    /*
    int *sub_arr = (int*)malloc(num*sizeof(int));
    for(i=0; i<num; i++){
        sub_arr[i] = *(arr + num-i-1);
    }
    arr = sub_arr;
    */
    /* Logic to reverse the array in-place. */
    int start = 0;
    int end = num - 1;
    int temp;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}