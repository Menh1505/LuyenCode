/*
http://ntucoder.net/Problem/Details/4402?fbclid=IwAR2TmycL_YZRMb9vk6p535aoks1ZqDn5v_ovYkiZauM04oLRN56QD6OOK4c
*/

#include<iostream>
#include<map>
using namespace std;

int main()
{
	int n, tmp;
	cin >> n;

	map<long long, long long> a, b, c;
	for (int i = 0; i < n * 3; ++i)
	{
		cin >> tmp; 
		if (i < n)
		{
			a[tmp]++;
		}
		if (i >= n && i < n * 2)
		{
			b[tmp]++;
		}
		if (i >= n * 2)
		{
			c[tmp]++;
		}
	}

	long long res = 0;
	for (auto it : a)
	{
		long long x = it.second * b[it.first] * c[it.first];
		res += x;
	}

	cout << res;
	return 0;
}