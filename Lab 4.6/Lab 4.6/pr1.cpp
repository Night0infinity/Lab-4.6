#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double S;
	double S2;
	int n,k;
	S = 0;
	k = 1;
	while (k <= 10)
	{
		S2 = 0;
		n = 1;
		while (n <= k)
		{
			S2 += sin(k * n);
			n++;

		}
		S += 1.0 * S2 / k;
		k++;

	}
	cout << S << endl;
	S = 0;
	k = 1;
	do
	{
		S2 = 0;
		n = 1;
		do
		{
			S2 += sin(k * n);
			n++;
		} while (n <= k);
		S += S2 / k;
		k++;
	} while (k <= 10);
	cout << S << endl;
	S = 0;
	for (k = 1; k <= 10; k++)

	{
		S2 = 0;
		for (n = 1; n <= k; n++)

		{
			S2 += sin(k * n);
		}
		S += S2 / k;

	}
	cout << S << endl;
	S = 0;
	for (k = 10; k >= 1; k--)
	{
		S2 = 0;
		for (n = k; n >= 1; n--)
		{
			S2 += sin(k * n);
		}
		S += S2 / k;
	}
	cout << S << endl;
	return 0;
}