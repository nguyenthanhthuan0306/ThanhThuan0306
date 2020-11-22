#include<iostream>
using namespace std;
void nhap_mang(int a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}
int ktra( int n)
{
	if (n <= 1) return 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
void snt(int a[], int& n)
{
	int count = 0;
	cout << "cac so nguyen to la: ";
	for (int i = 0; i < n; i++)
	{
		if (ktra(a[i]))
		{
			cout << " " << a[i];
			count++;
		}
			
	}
	if (count == 0)
		cout << "mang khong co so nguyen to";
}
int main()
{
	int n, a[1000];
	cout << "nhap mang: ";
	cin >> n;
	nhap_mang(a, n);
	snt(a, n);

	
	
	
	return 0;
}