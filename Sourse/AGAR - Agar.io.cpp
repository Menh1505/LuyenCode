/*
http://ntucoder.net/Problem/Details/4479?fbclid=IwAR2v7QAJsS1gcjfvonBaGWpEUcYrpMlc6eZh4g1A7L6HFKiKZtJzLcCISdo
*/
#include<iostream>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;

int main()
{
	long long n, a, g;
	cin >> n >> a >> g;
	map<long long, vector<int>> m;
	for (int i = 1; i <= n; ++i) {
		long long x;
		cin >> x;
		m[x].push_back(i);
	}
	vector<int> res;
	while (a <= g && !m.empty()) {
		auto it = m.lower_bound(a);
		if (it != m.begin()) {
			it--;
			if ((int)it->second.size() > 0) {
				a += it->first;
				res.push_back(it->second[(int)it->second.size() - 1]);
				it->second.pop_back();
				if ((int)it->second.size() == 0) {
					m.erase(it);
				}
			}
		}
		else {
			break;
		}
	}
	if (a <= g) {
		cout << -1;
	}
	else {
		cout << res.size();
		if ((int)res.size() > 0) {
			cout << endl;
			for (int i = 0; i < (int)res.size(); ++i) {
				cout << res[i] << " ";
			}
		}
	}
	return 0;
}