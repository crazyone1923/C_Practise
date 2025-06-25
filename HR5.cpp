#include <stdio.h>
#include<math.h>
void update(int *a,int *b) {
    // Complete this function
    int x=*a,y=*b;
    (*b)=abs(x-y);
	(*a)=x+y;
	
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
