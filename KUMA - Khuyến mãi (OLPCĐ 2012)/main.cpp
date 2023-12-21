/*
http://ntucoder.net/Problem/Details/67?fbclid=IwAR09usre-MK_d4PiWuZOsYwZ7Tl-0y8qA9iT7NwjrmNznPccKqSgp_hCqdY
*/
#include<iostream>

using namespace std;

int main()
{
	long long m, n, t;

	cin >> m >> n >> t;
	long long bonus = n / m;

	if (n == bonus)
	{
		cout << ((n / 2) + (n % 2 != 0))  * t;
	}
	else
	{
		cout << (n - bonus + (m == n)) * t;
	}
	return 0;
}