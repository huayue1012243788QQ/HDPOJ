// 1001.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	int sum = 0;
	while (cin>>n)
	{
		for (int i = 1; i <= n; i++)
		{
			sum += i;
		}
		cout << sum << endl;
		cout << endl;
		sum = 0;
	}
    return 0;
}

