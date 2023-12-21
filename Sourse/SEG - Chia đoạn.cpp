/*
http://ntucoder.net/Problem/Details/3369?fbclid=IwAR0XFce22gSUnUk8YoL2tCLqEWBFinG4lGcEyHb6AeMnwj6A_iAlXRjMloE
*/
#include<iostream>
#include<map>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int* a = new int[n];

	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin >> tmp;
		if (i != 0)
		{
			a[i] = tmp + a[i - 1];
		}
		else
		{
			a[i] = tmp;
		}
	}

	int max = 0;
	for (int i = 0; i < n; ++i)
	{
		int tmp = 0;
		for (int j = i; j < n; ++j)
		{
			if ((a[j] >= a[i]) && (a[j] % a[i] == 0))
			{			
				tmp++;
			}
		}
		if (tmp > max) max = tmp;
	}
	
	cout << max;
	return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n], sum = 0, x, Max = -1;
	for(int i = 0; i < n; ++i){
		cin >> x;
		sum += x;
		a[i] = sum;
	}
	for(int i = 0; i < n; ++i){
		int cnt = 1, j = i, check = 1;
		x = 2 * a[i];
		while(j + 1 < n){
			j = lower_bound(a + j + 1, a + n, x) - a;
			if(j != n && a[j] == x){
				cnt++;
				x += a[i];
			}
			else{
				check = 0;
				break;
			}
		}
		if(check == 1){
			Max = max(Max, cnt);
			break;
		}
	}
	cout << Max;
	return 0;
}
*/