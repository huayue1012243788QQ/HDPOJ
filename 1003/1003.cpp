// 1003.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int numCount,
			number,
			sumCurrent = 0,
			sum = -1001;
		
		cin >> numCount;
		int first = 0,
			last = 0,
			temp = 1;
		for (int j = 0; j < numCount; j++)
		{
			cin >> number;
			sumCurrent += number;
			if (sumCurrent>sum)
			{
				sum = sumCurrent;
				first = temp;
				last = j + 1;
			}
			if (sumCurrent < 0)
			{
				sumCurrent = 0;
				temp = j + 2;
			}
			
		}
		cout << "Case " << i + 1 << ":" << endl;
		cout << sum << " " << first << " " << last << endl;
		if (i < n - 1)
		{
			cout << endl;
		}

	}
	cout << "ok";
    return 0;
}

