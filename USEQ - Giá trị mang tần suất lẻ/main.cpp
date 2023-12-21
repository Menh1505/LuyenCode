#include<iostream>
#include<map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long n;
	cin >> n;
	long long* a = new long long[n];
	map<long long, long long> mp;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		mp[a[i]]++;
	}

	for (auto it : mp)
	{
		if (it.second % 2 != 0) cout << it.first;
	}
	return 0;
}