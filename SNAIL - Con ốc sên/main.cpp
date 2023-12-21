/*
https://luyencode.net/problem/SNAIL?fbclid=IwAR35mRRkTB_rjUzS1S96c-skpNCcKX3XGsEhdJvN1lCSmcyvgTs1fUS3d_4
*/

#include<iostream>
using namespace std;

int main()
{
	long long a, b, v, sum = 0, res = 0, m, n;

	long long x = a - b;
	if (x == 1 || x == 2)
	{
		x = ((v - a) / (a - b)) + 1;
		if (a * x - b * (x - 1) < v)
		{
			cout << x + 1;
		}
		else
			cout << ((v - a) / (a - b)) + 1;
	}
	else
	{
		long long tmp = v / (a - b);

		if ((a * (tmp - 1) - b * (tmp - 2)) >= v)
		{
			cout << --tmp;
		}
		else if (a * tmp - b * (tmp - 1) >= v)
		{
			cout << tmp;
		}
		else
		{
			cout << ++tmp;
		}
	}
	return 0;
}
