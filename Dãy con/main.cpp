#include<iostream>
#include<vector>
using namespace std;

void pushVector(vector<vector<long long>>& a, long long n, int d)
{
	bool check = 0, push = 0;
	int size = (int)(a.size());
	for (int i = 0; i < size; ++i)
	{
		long long x = a[i][a[i].size() - 1] - n;
		if (abs(x) <= d)
		{
			if (push == 0)
			{
				vector<long long> tmp;
				tmp = a[i];
				a.push_back(tmp);
				push = 1;
			}

			a[i].push_back(n);
			check = 1;
		}
	}
	if (check == 0)
	{
		vector<long long> tmp;
		tmp.push_back(n);
		a.push_back(tmp);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<vector<long long>> V;
	int n, d;
	cin >> n >> d;

	for (int i = 0; i < n; ++i)
	{
		long long tmp;
		cin >> tmp;
		pushVector(V, tmp, d);
	}

	int max = 0;
	for (int i = 0; i < (int)(V.size()); ++i)
	{
		if ((int)(V[i].size()) > max)
		{
			max = V[i].size();
		}
	}

	cout << max;
	return 0;
}