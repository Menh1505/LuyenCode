#include<iostream>
#include<math.h>

void lamtronso(double x)
{
	if (x >= 0)
	{
		std::cout << (int)x << " " << (int)x + 1;
	}
	else
	{ 
		std::cout << (int)x - 1 << " " << (int)x;
	}
}

int main() //begin
{
	double x;
	std::cin >> x; ///readln(x);
	//delete(....);
	lamtronso(x);
	return 0;
}

//end.