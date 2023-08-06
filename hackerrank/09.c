/*
Prepare -> C -> Conditionals and Loops -> Bitwise Operators
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int maxOR = 0;
  int maxAND = 0;
  int maxXOR = 0;
  for(int i=1; i<n; i++) {
    for(int j=i+1; j<=n; j++) {
        int _or = i | j;
        int _and = i & j;
        int _xor = i ^ j;

        _or = _or >= k ? 0 : _or;
        maxOR = _or>maxOR ? _or : maxOR;
        
        _and = _and >= k ? 0 : _and;
        maxAND = _and>maxAND ? _and : maxAND;
        
        _xor = _xor >= k ? 0 : _xor;
        maxXOR = _xor>maxXOR ? _xor : maxXOR;

        // printf("%d | %d = %d\n", i, j, _or);
    }
  }
  printf("%d\n", maxAND);
  printf("%d\n", maxOR);
  printf("%d\n", maxXOR);
//   printf("%d\n", n^k);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
