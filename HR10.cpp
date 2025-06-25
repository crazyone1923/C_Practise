#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int size = 2 * n - 1; // Total size of the pattern

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Calculate the minimum distance from the current position to the edges
            int min_dist = i < j ? i : j;
            min_dist = min_dist < (size - 1 - i) ? min_dist : (size - 1 - i);
            min_dist = min_dist < (size - 1 - j) ? min_dist : (size - 1 - j);
            // Determine the number to print based on the layer
            printf("%d ", n - min_dist);
        }
        printf("\n");
    }
  	// Complete the code to print the pattern.
    return 0;
}
