#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,s[10],sen[100];
    scanf("%c%s\n%[^\n]",&ch,s,sen);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}

