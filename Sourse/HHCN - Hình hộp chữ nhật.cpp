#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double x, y, z;
	cin >> x >> y >> z;

	double h = sqrt((y*z)/x);
	double a = y / h;
	double b = z / h;

	cout << a * 4 + b * 4 + h * 4;
	return 0;
}