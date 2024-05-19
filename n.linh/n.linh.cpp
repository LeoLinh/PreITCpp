// PreIT-8-HocTrenLop_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main()
{
	// Bài 6 :

	int n;
	cout << "Nhap gia tri n : ";
	cin >> n;
	
	

	if (n < 0)
	{
		cout << "Gia tri khong hop le";
		return 1;
	}

	int tong = 0;
	int dem = 1;

	while (dem <= n)
	{
		tong = tong + dem;
		dem = dem + 1;
	}
	
	cout << "Ket qua : " << tong;


	return 0;
}
