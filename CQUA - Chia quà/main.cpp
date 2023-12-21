/*
http://ntucoder.net/Problem/Details/3?fbclid=IwAR0nHkPHc4ge9dWnZ0NBiEHvw2h-GQNv2OabPfUdw-DSpui7l_cuafaPW9A
*/
#include<iostream>

using namespace std;

int main()
{
	//while (1)
	{
		int n;
		cin >> n;

		int s1 = 0, s2 = 0;
		int tmp;

		for (int i = 0; i < n; ++i)
		{
			cin >> tmp;

			if (tmp == 200)
			{
				s2++;
			}

			if (tmp == 100)
			{
				s1++;
			}
		}

		if ((s1 > 0) && (s1 % 2 == 0))
		{
			cout << "YES";
		}
		else if (s1 == 0)
		{
			if (s2 % 2 == 0)
			{
				cout << "YES";
			}
			else
			{
				cout << "NO";
			}
		}
		else
		{
			cout << "NO";
		}
		//cout << endl;
	}
	return 0;
}