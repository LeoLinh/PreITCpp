// PreIT-8-HocTrenLop_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int TongSo(int n)
{
	if (n < 1)
	{
		return 0;
	}
	else
	{
		return n + TongSo(n - 1);
	}
}

int TongHieuXenKe(int n, int m = 1)
{
	if (n <= 0)
	{
		return 0;
	}
	//return m * n + TongHieuXenKe(n - 1, -m);
	else 
	{
		if (n % 2 == 0)
		{
			return -n + TongSo(n - 1);
		}
		else
		{
			return n + TongHieuXenKe(n - 1);
		}
	}
}

int main()
{
	int N;
	cout << "Nhap gia tri : ";
	cin >> N;
	
	int KetQuaTongSo = TongSo(N);

	int KetQuaTongHieuXenKe = TongHieuXenKe(N);
	cout  << KetQuaTongSo << endl;
	cout  << KetQuaTongHieuXenKe << endl;

	return 0;
}

