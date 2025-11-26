/* Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *    
*/
#include <stdio.h>

int main() {
    int n = 4;  // number of rows in the upper half
    int i, j, k;

    // Upper half of diamond
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // Print stars
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of diamond
    for (i = n - 1; i >= 1; i--) {
        // Print spaces
        for (j = n; j > i; j--) {
            printf(" ");
        }
        // Print stars
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}