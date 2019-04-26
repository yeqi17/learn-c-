#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//2.5.6 ееап
void get_single_num(const int inputNum, int *result)
{
	int a = inputNum / 100;
	int b = (inputNum / 10) % 10;
	int c = inputNum % 10;
	result[a]++;
	result[b]++;
	result[c]++;
}

int main(void) {

	int i, j, k;
	
	for (i = 123; i <= 329; i++) {
		j = i * 2;
		k = i * 3;
		int repeat[10] = { 0 };
		get_single_num(i, repeat);
		get_single_num(j, repeat);
		get_single_num(k, repeat);
		int repeat_flag = 0;
		for (int i = 1; i < 10; i++)
		{
			if (repeat[i] != 1 || repeat[0] != 0)
			{
				repeat_flag++;
				break;
			}
		}
		if (repeat_flag == 0)
		{
			printf("%d %d %d\n", i, j, k);
		}
	}
	return 0;

}