#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//2.5.1子序列之和
int main()
{
	int kase = 0;
	long long n,m;
	while (scanf("%lld %lld", &n,&m) == 2)
	{
		if (m == 0 && n == 0)
			return 0;
		double temp = 0.0,sum = 0.0;
		for (long long i = n; i <= m; i++)
		{
			temp = 1.0 / (double)(i*i);
			sum += temp;
		}
		if (kase)
			printf("\n");
		printf("Case %d:%.5f", ++kase, sum);

	}
	return 0;
}