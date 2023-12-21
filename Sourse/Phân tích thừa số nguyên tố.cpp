#include<iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long n, a;
	cin >> n;

	for (int i = 2; i * i <= n; ++i) 
	{
		int cnt = 0;
		while (n % i == 0) 
		{
			cnt++;
			n /= i;
		}

		if (cnt) 
		{
			cout << i << " " << cnt << endl;
		}
	}

	if (n != 1)
	{
		cout << n << " " << 1;
	}
	return 0;
}