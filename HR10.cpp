#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;
    int center = n - 1;

    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            int dist = abs(i - center) > abs(j - center) ? abs(i - center) : abs(j - center);
            printf("%d ", dist + 1);
        }
        printf("\n");
    }
    return 0;
}
