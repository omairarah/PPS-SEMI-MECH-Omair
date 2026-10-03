#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int maxAnd = 0, maxOr = 0, maxXor = 0;
    for (int a = 1; a < n; a++) {
        for (int b = a + 1; b <= n; b++) {
            int x = a & b;
            int y = a | b;
            int z = a ^ b;
            if (x < k && x > maxAnd) maxAnd = x;
            if (y < k && y > maxOr) maxOr = y;
            if (z < k && z > maxXor) maxXor = z;
        }
    }
     printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);



}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
