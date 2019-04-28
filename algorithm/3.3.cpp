#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	//int repeat[10] = { 0 };
	int n ;
	while (scanf("%d", &n)==1)
	{
		int repeat[10] = { 0 };
		for (int i = 1; i <= n; i++)
		{
			int temp = i;
			while (temp >0)
			{
				repeat[temp % 10]++;
				temp /= 10;
			}
		}
		for (int i = 0; i < 10; i++)
		{
			printf("%d\n", repeat[i]);
		}
	}
	return 0;
}