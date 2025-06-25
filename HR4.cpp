#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d){
	int t=0;
	if(a>t) t=a;
	if(b>t) t=b;
	if(c>t) t=c;
	if(d>t) t=d;
	return t;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
