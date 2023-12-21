/*
http://lequydon.ntucoder.net/Problem/Details/5864?fbclid=IwAR1SVqTmnLFrcMA-fqlgu3GIoccPsgix3V_-UafOiT7B2l9OuBAYWcX9jKM
*/

#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a + n, greater<int>());
	long long res = 0;
	for (int i = 0; i < n; ++i) {
		int l = i + 1;
		int r = n - 1;
		while (l < r) {
			if (a[l] + a[r] <= a[i]) {
				r--;
			}
			else {
				res += r - l;
				l++;
			}
		}
	}
	cout << res;
	return 0;
}