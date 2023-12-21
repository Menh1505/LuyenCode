/*
https://code.itptit.com/problems/100027?fbclid=IwAR0sNODLIBKKzPcPehpRUQdG0PSvt_fxQRg-c6sIyX_qAXycwIH0GOXBPBQ
*/
#include<iostream>

using namespace std;

int main()
{
	int n, m, a;
	cin >> n >> m >> a;

	int Min = min(n, m);
	if (a * 3 > n + m)
	{
		cout << "No";
	}
	else if (Min < a)
	{
		cout << "No";
	}
	else
	{
		int lt = Min - a;
		//cout << lt << endl;
		if (max(n, m) + lt >= 2 * a)
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}
	}
	return 0;
}