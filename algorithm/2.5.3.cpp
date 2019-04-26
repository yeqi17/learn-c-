#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//2.5.1µ¹Èý½Ç
int main()
{
	int n;
	//char str[10] = { "#" };
	//printf("%s", str);
	while (scanf("%d", &n) == 1)
	{
		char str[39] = {'\0'};
		for (int j = 0; j < 2 * n - 1; j++)
		{
			str[j] = { '#' };
		}
		for (int i = n; i > 0; i--)
		{
			for (int k = 0; k < n-i; k++)
			{
				str[k ] = { ' ' };
				str[2*n-2-k] = { ' '};
			}
			printf("%s\n", str);
		}
	}
	return 0;
}