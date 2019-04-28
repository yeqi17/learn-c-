#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//#define maxn 10000000+10
//char s[maxn];
int main() {
	char s[85];
	while (scanf("%s", s)==1)
	{
		int sum = 0;
		int repeat = 0;
		for (int i = 0; i < strlen(s); i++)
		{
			if (s[i] == 'O')
			{
				repeat++;
				sum += repeat;
			}
			else
			{
				repeat = 0;
			}	
		}
		printf("%d", sum);
	}
	return 0;
}