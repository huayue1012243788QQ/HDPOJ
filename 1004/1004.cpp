// 1004.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<string, int> balloon;
	int n;
	string a;
	while (cin >> n && n != 0)
	{
		balloon.clear();
		while (n--)
		{
			cin >> a;
			balloon[a]++;
		}
		map<string, int>::iterator it;
		int max = -100; 
		string maxcolor;
		for (it = balloon.begin(); it != balloon.end(); it++)
		{
			if ((*it).second>max)
			{
				max = (*it).second;
				maxcolor = (*it).first;
			}
		}
		cout << maxcolor << endl;
	}
	return 0;
}


