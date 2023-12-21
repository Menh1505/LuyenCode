/*
http://vinhdinhcoder.net/Problem/Details/4914
*/
#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

bool comp(const int a, const int b)
{
	return a > b;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	map<long long, long long> hiepsi;
	map<long long, long long> res;

	long long n, k;
	cin >> n >> k;

	long long* sucmanh = new long long[n];
	vector<int> tien;
	for (int i = 0; i < n; ++i)
	{
		cin >> sucmanh[i];
		res.insert({ sucmanh[i], 0 });
	}
	for (int i = 0; i < n; ++i)
	{
		int tien;
		cin >> tien;
		hiepsi.insert({ sucmanh[i], tien });
	}

	long long Min = LLONG_MAX, Max = 0, sum = 0;
	for (auto it : hiepsi)
	{
		if (k > 0)
		{
			tien.push_back(it.second);
			sort(tien.begin(), tien.end(), comp);
			sum += it.second;
			res[it.first] = sum;
			k--;
		}
		else if (tien.size() > 0)
		{
			res[it.first] = it.second + sum;
			long long tmp = sum - tien.back() + it.second;
			if (tmp > sum)
			{
				sum += it.second - tien.back();
				tien.pop_back();
				tien.push_back(it.second);
				sort(tien.begin(), tien.end(), comp);
			}
		}
		else
		{
			res[it.first] = it.second + sum;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout << res[sucmanh[i]] << " ";
	}

	return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
struct Data{
	long long Money;
	int Power, ID;
};
bool cmp(const Data &a, const Data &b){
	return a.Power < b.Power;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, k;
	cin >> n >> k;
	Data a[n];
	for(int i = 0; i < n; ++i){
		cin >> a[i].Power;
		a[i].ID = i;
	}
	for(int i = 0; i < n; ++i){
		cin >> a[i].Money;
	}
	sort(a, a + n, cmp);
	int c[k], idx = 0;
	long long sum = 0, res[n];
	for(int i = 0; i < n; ++i){
		int temp = a[i].Money;
		a[i].Money += sum;
		res[a[i].ID] = a[i].Money;
		if(idx < k){
			c[idx++] = temp;
			sum += temp;
			if(idx == k){
				sort(c, c + k, greater<int>());
			}
		}
		else{
			if(temp > c[k - 1]){
				sum += temp - c[k - 1];
				int j;
				for(j = k - 2; j >= 0; --j){
					if(temp > c[j]){
						c[j + 1] = c[j];
					}
					else{
						c[j + 1] = temp;
						break;
					}
				}
				if(j == -1){
					c[0] = temp;
				}
			}
		}
	}
	for(int i = 0; i < n; ++i){
		cout << res[i] << " ";
	}
	return 0;
}
*/