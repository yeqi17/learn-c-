#include <stdio.h>
//2.5.1Ë®ÏÉ»¨Êı
int main()
{
	for (int i = 100; i < 1000; i++)
	{
		int A = i / 100;
		int C = i % 10;
		int B = (i / 10) % 10;
		if(i == A*A*A +B*B*B +C*C*C)
			printf("%d\n",i);
	}
	return 0;
}