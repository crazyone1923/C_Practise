#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    do{
    	sum+=(n%10);
	}while(n/=10);
	printf("%d",sum);
    return 0;
}
