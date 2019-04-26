#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//2.5.1º«ÐÅµã±ø
int main()
{
	int a,b,c,kase =0,sum ;
	while (scanf("%d %d %d", &a,&b,&c) == 3)
	{
		sum = -1;
		for (int i = 10; i <= 100; i++)
		{
			if (i % 3 == a&& i % 5 == b &&i % 7 == c)
				sum = i;
		}
		//printf("sum : %d", sum);
		if (kase)
			printf("\n");
		if(sum>0)
			printf("Case %d: %d", kase++, sum);
		else
			printf("Case %d: No answer", kase++);
	}
	return 0;
}