#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int x=0,y=0,z=0;
  for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
        if((x<(i&j))&&((i&j)<k)) x=i&j;
        if((y<(i|j))&&((i|j)<k)) y=i|j;
        if((z<(i^j))&&((i^j)<k)) z=i^j;
    }
  }
  printf("%d\n%d\n%d\n",x,y,z);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

