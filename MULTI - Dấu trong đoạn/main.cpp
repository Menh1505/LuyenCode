/*
http://ntucoder.net/Problem/Details/3388?fbclid=IwAR1vp26kRYauWIaPBiFlpxtpsvgksa6RbiGuD4x9fNUB5ZqmIFITbhpPcS0
*/

#include<iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long n, m;
	cin >> n >> m;

	long long* a = new long long[n + 1];
	long long* dau = new long long[n + 1];
	long long* zero = new long long[n + 1];

	int am = 0, s0 = 0;
	for (long long i = 1; i <= n; ++i)
	{
		cin >> a[i];
		if (a[i] == 0)
		{
			s0++;
		}
		if (a[i] < 0)
		{
			am++;
		}
		dau[i] = am;
		zero[i] = s0;
	}

	while (m--)
	{
		long long l, r;
		cin >> l >> r;
		
		long long so0 = zero[r] - zero[l];
		if (a[l] == 0)
		{
			so0++;
		}
		if (so0 > 0)
		{
			cout << 0 << endl;
		}
		else
		{
			long long so_am = dau[r] - dau[l];
			if(a[l] < 0)
			{
				so_am++;
			}
			if (so_am % 2 == 0)
			{
				cout << "+" << endl;
			}
			else
			{
				cout << "-" << endl;
			}
		}
	}
	return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int a[n + 1], cntZero[n + 1], cntNegative[n + 1];
	int zero = 0, negative = 0;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		if (a[i] == 0) {
			zero++;
		}
		else if (a[i] < 0) {
			negative++;
		}
		cntZero[i] = zero;
		cntNegative[i] = negative;
	}
	while (m--) {
		int l, r;
		cin >> l >> r;
		if ((cntZero[r] - cntZero[l] + (a[l] == 0)) > 0) {
			cout << 0 << endl;
			continue;
		}
		if ((cntNegative[r] - cntNegative[l] + (a[l] < 0)) % 2 != 0) {
			cout << "-" << endl;
			continue;
		}
		cout << "+" << endl;
	}
	return 0;
}
*/