/*
https://luyencode.net/problem/MAGPERM?fbclid=IwAR1zDsYVdQrU_ndSHHgUtkV0lg1Y9ytQ5ROxYiIbiDUqY475RK6H8iio0fA
*/
#include<iostream>
#include<queue>
int a[100001] = { 0 };

using namespace std;

void xuly(int n, int k)
{
	queue<int> res;
	for (int i = 1; i <= n; ++i)
	{
		if ((i - k <= n && i - k > 0) && (a[i - k] == 0))
		{
			res.push(i - k);
			a[i - k]++;
		}
		else if ((i + k <= n) && (a[i + k] == 0))
		{
			res.push(i + k);
			a[i + k]++;
		}
		else
		{
			cout << -1;
			return;
		}
	}
	while (!res.empty())
	{
		cout << res.front() << " ";
		res.pop();
	}
}
int main()
{
	int n, k;
	cin >> n >> k;
	xuly(n, k);
	return 0;
}

/*
int main()
{
	int n, k;
	cin >> n >> k;
	if(k == 0){
		for(int i = 1; i <= n; ++i){
			cout << i << " ";
		}
	}
	else{
		if(n % (2 * k) != 0){
			cout << -1;
		}
		else{
			int sz = n / (2 * k);
			int start = 1, finish = 2 * k;
			while(sz--){
				int y = (start + finish) / 2;
				for(int i = y + 1; i <= finish; ++i){
					cout << i << " ";
				}
				for(int i = start; i <= y; ++i){
					cout << i << " ";
				}
				start += 2 * k;
				finish += 2 * k;
			}
		}
	}
	return 0;
}
*/