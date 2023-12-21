/*
http://ntucoder.net/Problem/Details/4450
*/
#include<iostream>
#include<cmath>
#include<string>

using namespace std;
char chuso2(long long n)
{
	long long sum = 0, i = 0;
	while (n > sum)
	{
		i++;
		sum += 9 * pow(10.0, i - 1) * i;
	}
	long long du = n - (sum - (9 * pow(10.0, i - 1) * i));
	long long so = pow(10.0, i - 1) + (double(du) / i) - pow(10.0, -3);
	long long vitri = (du - 1) % i + 1;
	string s = to_string(so);

	return s[vitri - 1];
}
int main()
{
	long long n;
	cin >> n;
	cout << chuso2(n);
	return 0;
}