// Author Lili Stefanova
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x;
	double y;
	cin >> x >> y;
	double R;
	cin >> R;
	double p;
	double q;
	cin >> p >> q;
	if (p < x && q < y)
	{
		if ((p + x)*(p + x) + (q + y)*(q + y) < R*R)
		{
			cout << " prinadleji" << endl;
		}
		else
		{
			cout << " ne prinadleji " << endl;
		}

	}

	if (p < x && q > y)
	{
		if ((p + x)*(p + x) + (q - y)*(q - y) < R*R)
		{
			cout << " prinadleji" << endl;
		}
		else
		{
			cout << " ne prinadleji " << endl;
		}

	}

	if (p > x && q < y)
	{
		if ((p - x)*(p - x) + (q + y)*(q + y) < R*R)
		{
			cout << " prinadleji" << endl;
		}
		else
		{
			cout << " ne prinadleji " << endl;
		}
	}

	if (p > x && q > y)
	{
		if ((p - x)*(p - x) + (q - y)*(q - y) < R*R)
		{
			cout << " prinadleji" << endl;
		}
		else
		{
			cout << " ne prinadleji " << endl;
		}
	}
	return 0;
}
