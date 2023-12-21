/*
https://oj.vnoi.info/problem/fc142_knight
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long kx, ky;
	cin >> kx >> ky;

	long long px, py;
	cin >> px >> py;

	if ((abs(kx - px) == 2 && abs(ky - py) == 1) || (abs(kx - px) == 1 && abs(ky - py) == 2))
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	cout << endl;
}
