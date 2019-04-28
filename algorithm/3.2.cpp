#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
//#define maxn 10000000+10
//char s[maxn];
int main() {
	char s[105];
	while (scanf("%s", s)==1)
	{
		int sum = 0;
		int num[4] = { 0 };//C H O N
		char pre = '\0';
		//int repeat = 0;
		for (int i = 0; i < strlen(s); i++)
		{
			if (s[i] == 'C')
			{
				pre = 'C';
				num[0]++;
			}
			else if (s[i] == 'H')
			{
				pre = 'H';
				num[1]++;
			}
			else if (s[i] == 'O')
			{
				pre = 'O';
				num[2]++;
			}
			else if (s[i] == 'N')
			{
				pre = 'N';
				num[3]++;
			}
			else if(isalpha(pre))
			{
				if (pre == 'C')
					num[0] += (int)(s[i] - '0')-1;
				else if (pre == 'H')
					num[1] += (int)(s[i] - '0') -1;
				else if (pre == 'O')
					num[2] += (int)(s[i] - '0') -1;
				else if (pre == 'N')
					num[3] += (int)(s[i] - '0') -1;
			}
		}
		printf("%.3fg/mol", num[0]*12.01 + num[1] * 1.008+ num[2] * 16.00+ num[3] * 14.01);
	}
	return 0;
}