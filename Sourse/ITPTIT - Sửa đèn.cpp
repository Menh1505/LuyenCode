/*
https://code.itptit.com/problems/100187?fbclid=IwAR22Sz0HUAXiSr9buJsX29tIRBkqldxHC9fPTupbUmi7UxqlR9UXuvnot-4
*/

#include<iostream>
#include<queue>

//10:57 -> 11:08 -> 12:34 -> 8:58
using namespace std;

int main()
{
	int n, b, k, tmp;
	cin >> n >> k >> b;

	int a[100001] = { 0 };

	for (int i = 1; i <= b; ++i)
	{
		cin >> tmp;
		a[tmp] = 1;
	}

	/*for (int i = 1; i <= n; ++i)
	{
		cout << a[i];
	}
	cout << endl;*/
	queue<bool> x;

	int sang = 0, tat = 0, fix = 100001;
	for (int i = 1; i <= n; ++i)
	{
		if (x.size() == k)
		{
			if (tat < fix)
			{
				fix = tat;
			}
			if (x.front() == 1)
			{
				tat--;
			}
			x.pop();
		}

		if (a[i] == 1)
		{
			tat++;
		}
		x.push(a[i]);
	}
	cout << fix;
}