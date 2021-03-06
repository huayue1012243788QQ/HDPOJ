// 1005.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int f(int A, int B, int n);
int main()
{
	int A,
		B,
		n,
		f[50];
	while (cin >> A >> B >> n && (A != 0 && B != 0 && n != 0))
	{
		if (n == 1 || n == 2)
		{
			cout << 1 << endl;
			continue;
		}
		f[1] = f[2] = 1;

		for (int i = 3; i <= n%49; i++)
		{
			f[i] = (A * f[i - 1] + B * f[i - 2]) % 7;
		}
		cout << f[n % 49] << endl;

	}
    return 0;
}

