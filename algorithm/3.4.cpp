#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	char input[85] = { 0 };
	while (scanf("%s", input)==1)
	{
		char basic[85] = { 0 };
		int input_len = strlen(input);	
		int T = 0;
		for (int i = 0; i < input_len; i++)
		{
			int basic_len = i+1;
			if (input_len%basic_len == 0 &&T ==0)
			{
				T = basic_len;
				for (int j = 0; j < input_len; j++)
				{
					if (input[j] != input[j%basic_len])
					{
						T = 0;
						break;
					}
				}
			}
		}
		printf("T :%d", T);
	}
	return 0;
}