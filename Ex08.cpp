#include<iostream>
using namespace std;
int main()
{
	int n, i;
 	float s = 0.0;
	do
	{
		cout << "Nhap vao mot so nguyen n: ";
		cin >> n;
	} while (n < 0);
	{
		for (i = 1; i <= n; i++)
		{
			if (n % i == 0)
			{
				s = s + 1;

			}

		}
	}
	cout << "So uoc cua n la: " << s;













	return 0;
}