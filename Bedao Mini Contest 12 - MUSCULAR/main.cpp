/* 
https://oj.vnoi.info/problem/bedao_m12_muscular 
*/

//TLE
/*
#include<iostream>
using namespace std;

bool b[1000000];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	int a[301], temp = 0;

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		if (x <= m)
		{
			a[temp] = x;
			temp++;
		}
	}
	n = temp;
	long long res = 0;
	for (int i = 0; i < n; ++i)
	{
		if (b[a[i]] == 0 && a[i] <= m)
		{
			b[a[i]] = 1;
			res++;
		}
		for (int j = i + 1; j < n; ++j)
		{
			int sumOf2 = a[i] + a[j];
			if (b[sumOf2] == 0 && sumOf2 <= m)
			{
				b[sumOf2] = 1;
				res++;
			}
			for (int k = j + 1; k < n; ++k)
			{
				int sumOf3 = sumOf2 + a[k];
				if (b[sumOf3] == 0 && sumOf3 <= m)
				{
					b[sumOf3] = 1;
					res++;
				}
			}
		}
	}
	cout << res;
	return 0;
}
*/
#include<iostream>
using namespace std;
bool b[10000000];
int main()
{
	int n, m;
	cin >> n >> m;

	int *a = new int[n];
	int cnt = 0;

	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;

		if (tmp <= m)
		{
			a[cnt] = tmp;
			cnt++;
		}
	}

	n = cnt;
	int res = 0;
	for (int i = 0; i < n; ++i)
	{
		if (b[a[i]] == 0 && a[i] <= m)
		{
			b[a[i]] = 1;
			res++;
		}
		for (int j = i + 1; j < n; ++j)
		{
			if ((a[i] + a[j]) <= m && b[a[i] + a[j]] == 0)
			{
				res++;
				b[a[i] + a[j]] = 1;
			}
			for (int t = j + 1; t < n; ++t)
			{
				long long sumOf3 = a[i] + a[j] + a[t];
				if (b[sumOf3] == 0 && sumOf3 <= m)
				{
					res++;
					b[sumOf3] = 1;
				}
			}
		}
	}
	cout << res;
}