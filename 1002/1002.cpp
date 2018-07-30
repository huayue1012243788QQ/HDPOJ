// 1002.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <map>
#include <cstdio>
using namespace std;
int main()
{	
	int n;
	string a;
	string b;
	int sum[1000];

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;

		int aLength,
			bLength,
			aInt = 0,
			bInt = 0,
			sumLength = 0,
			jinwei = 0;
		aLength = a.length() - 1;
		bLength = b.length() - 1;

		while (aLength>=0&&bLength>=0)
		{
			aInt = a[aLength] - '0';
			bInt = b[bLength] - '0';

			sum[sumLength++] = (jinwei + aInt + bInt) % 10;
			jinwei = (jinwei + aInt + bInt) / 10;
			aLength--;
			bLength--;
		}
		if (aLength>bLength)
		{
			while (aLength>=0)
			{
				aInt = a[aLength] - '0';
				sum[sumLength++] = (jinwei + aInt) % 10;
				jinwei = (jinwei + aInt) / 10;
				aLength--;
			}
		}
		if (bLength>aLength)
		{
			while (bLength >= 0)
			{
				bInt = b[bLength] - '0';
				sum[sumLength++] = (jinwei + bInt) % 10;
				jinwei = (jinwei + bInt) / 10;
				bLength--;
			}
		}
		sum[sumLength] = jinwei;

		cout << "Case " << i << ":" << endl;
		cout << a << " + " << b << " = " ;
		
		if (sum[sumLength]!=0)
		{
			cout << sum[sumLength];
		}
		for (--sumLength;sumLength>=0;sumLength--)
		{
			cout << sum[sumLength];
		}
		cout << endl;
		if (i <= (n - 1))
		{
			cout << endl;
		}
	}
    return 0;
}

