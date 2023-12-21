/*
http://ntucoder.net/Problem/Details/5550?fbclid=IwAR2h13ANLyyHE6h-rOxDnv8qN0GAay2lKpuepVjfgvTasPLh69oqxUbihTo
*/
#include<iostream>

using namespace std;

int a[11] = { 6,2,5,5,4,5,6,3,7,6 };

void arlam(int n)
{
	int hh = 0, mm = 0;
	while (hh < 24)
	{
		if (a[hh / 10] + a[hh % 10] + a[mm / 10] + a[mm % 10] == n)
		{
			printf("%02d:%02d", hh, mm);
			return;
		}
		if (mm == 60)
		{
			mm = 0;
			hh++;
		}
		mm++;
	}
	cout << "Impossible";
}
int main()
{
	int n;
	cin >> n;
	arlam(n);
	return 0;
}