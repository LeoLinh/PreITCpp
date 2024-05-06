// PreIT-7-BaiTapVeNha.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int num[] = { 10, 25, -4, 32, 63, 81, 19, -24, 13, 18, 45, 12, 72, 42, -6 };

	// Yêu cầu 1 : Liệt kê vị trí và giá trị các phần tử là số chẵn.
	cout << "Vi tri va cac phan tu la so chan : " << endl;
	for (int i = 0; i < 15; i++)
	{
		if (num[i] % 2 == 0)
		{
			cout << endl << "Vi tri la : " << i << endl << "So chan la : " << num[i] << endl;
		}
	}
	cout << endl;
	// Yêu cầu 2 : Đếm các phần tử có giá trị chia hết cho 3 và cũng chia hết cho 9.
	cout << "Cac phan tu chia het cho 3 va 9 : " << endl;
	for (int i = 0; i < 15; i++)
	{
		if (num[i] % 9 == 0)
		{
			cout << endl << "Cac so chia het cho 3 va 9 la : " << num[i];
		}
	}
	cout << endl;
	// Yêu cầu 3 : Tính tổng giá trị các phần tử có trị số chẵn.
	cout << "Tinh tong cac gia tri la so chan : " << endl;

	int sum = 0;
	for (int i = 0; i < 15; i++)
	{
		if (num[i] % 2 == 0)
		{
			sum = sum + num[i];
			cout << num[i] << " + ";
		}
	}
	cout << "Tong gia tri so chan la : " << sum << endl;
	cout << endl;

	// Yêu cầu 4 : Tìm kiếm và hiển thị trị số của các phần tử có giá trị âm. 
	// Thay thế các phần tử có giá trị âm bằng giá trị 0.
	cout << endl << "Tim kiem gia tri am : ";
	for (int i = 0; i < 15; i++)
	{
		if (num[i] > 0) 
		{
			cout << num[i];
		}
		else 
		{
			cout << 0;
		}
		if (i < 15) 
		{
			cout << ", ";
		}
	}


	return 0;
}


