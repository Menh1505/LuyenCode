#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string* a = new string[n];
	
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (a[j] + a[i] > a[i] + a[j])
			{
				swap(a[j], a[i]);
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i];
	}
	return 0;
}