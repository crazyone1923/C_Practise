#include<stdio.h>
int main(){
	int a,b;
	double x,y;
	scanf("%d%d%lf%lf",&a,&b,&x,&y);
	printf("%d %d\n%.1lf %.1lf",a+b,a-b,x+y,x-y);
	
}
