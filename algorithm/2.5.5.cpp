#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <iomanip>
//2.5.1 ������С��
//��setprecision(n)���þ��ȣ�����n��ʾ��ȷ��С�����nλ
using namespace std;
int main()
{
	int kase = 0;
	int a,b,c;
	while (cin >> a >> b >> c)
	{
		if (a == 0 && b == 0 && c == 0)
			return 0;
		double result = 0.0;
		result = (double)a / b;
		cout << "Case " << ++kase << ":" << fixed << setprecision(c) << result << endl;;
	}
	return 0;
}