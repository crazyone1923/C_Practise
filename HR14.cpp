#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int h[10]={0};
	char s[1000];
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
		int cnt = s[i]-'0';
		if(cnt<10){
			h[cnt]++;
		}
	}
	for(int i=0;i<10;i++){
		printf("%d",h[i]);
	}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

