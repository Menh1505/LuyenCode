#include<iostream>
#include<cmath>
using namespace std;

bool Perfect(long long n)
{
	long long sum = 0, r, i;

	for (i = n; n != 0; n = n / 10)
	{
		r = n % 10;
		sum = sum * 10 + r;
	}

	if (i == sum)
		return 1;
	else
		return 0;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	while (t--)
	{
		long long n;
		cin >> n;
		if (Perfect(n)) cout << n << " ";
	}
	return 0;
}