#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
double maxr(double *a,int n);
int main()
{
	double a[8] = {2, 3, 4, 10, 9, 30, 10, 50};
	double r = maxr(a, 8);
	cout << "Maximum = " << r << endl;
	return 0;
}
double maxr(double *a,int n)
{
	int max1;
	if (n == 0)
		return a[0];
	else
	{
		max1 = maxr(a, n - 1);
	}
	if (a[n] > max1)
		{
			return a[n];
		}
	else 
	{
		return max1;
	}
}