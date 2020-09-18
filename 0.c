#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	printf("Input: a=");
	scanf("%d", &a);
	printf("Input: b=");
	scanf("%d", &b);
	printf("%d + %d = %d", a, b, a + b);
	return 0;
}