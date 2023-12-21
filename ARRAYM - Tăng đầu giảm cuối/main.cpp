#include<iostream>
using namespace std;

int main()
{
	long long n, m;
	cin >> n >> m;

	long long* count = new long long[n + 1];
	for (long long i = 1; i <= n; ++i)
	{
		count[i] = 0;
	}
	while (m--)
	{
		long long u, v, k;
		cin >> u >> v >> k;
		count[u] += k;
		count[v + 1] -= k;
	}
	long long max = 0, tmp = 0;
	for (long long i = 1; i <= n; ++i)
	{
		tmp += count[i];
		if (tmp > max)
		{
			max = tmp;
		}
	}
	cout << max;
	return 0;
}