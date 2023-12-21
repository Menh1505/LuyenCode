#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

long long prime(long long L, long long R)
{
	vector<bool> isPrime(R - L + 1, true);  

	for (long long i = 2; i * i <= R; ++i)
	{
		for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
		{
			isPrime[j - L] = false;
		}
	}

	if (1 >= L)
	{  
		isPrime[1 - L] = false;
	}

	long long count = 0;
	for (long long x = L; x <= R; ++x)
	{
		if (isPrime[x - L])
		{
			count++;
		}
	}
	return count;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long L, R, T;
	cin >> T;

	while (T--)
	{
		cin >> L >> R;
		cout << prime(L, R) << endl;
	}
	
	return 0;
}