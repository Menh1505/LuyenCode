#include<iostream>
#include<cmath>

using namespace std;

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
		double c = pow(n, (1.0 / 3));

		long long l_c = (long long)(c);
		if ((l_c * l_c * l_c == n) || ((l_c + 1) * (l_c + 1) * (l_c + 1) == n))
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}

	return 0;
}