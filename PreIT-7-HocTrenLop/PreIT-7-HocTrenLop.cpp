// PreIT-6-LuyenTap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	//int a, b, c, x;
	//cout << "Nhap gia tri a : ";
	//cin >> a;
	//cout << "Nhap gia tri b : ";
	//cin >> b;
	//cout << "Nhap gia tri c : ";
	//cin >> c;

	///*c = a;
	//a = b;
	//b = c;*/

	////a = a + b;
	////b = a - b;

	//if (a > b)
	//{
	//	x = a;
	//	a = b;
	//	b = x;
	//}
	//if (a > c)
	//{
	//	x = a;
	//	a = c;
	//	c = x;
	//}
	//if (b > c)
	//{
	//	x = b;
	//	b = c;
	//	c = x;
	//}
	//cout << "=> day so la  : " << a << " ; " << b << " ; " << c << endl;
	//////////////////////////////////////////////////////////////


	// in các số chia hết cho 3 :

	/*int num[10];

	for (int i = 0; i < 10; i++)
	{
		cout << "Nhap so " << i << " = ";
		cin >> num[i];
	}

	cout << "day so : ";

	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << "; ";
	}

	cout << endl << "Cac so chia het cho 3 : ";
	for (int i = 0; i < 10; i++)
	{
		if ((num[i] % 3) == 0)
		{
			cout << num[i] << " ; ";
		}
	}*/

	// in số đầu tiên chia hết cho 4 :
	
	/*bool isExist = false;
	int i;
	for (i = 0; i < 10; i++)
	{
		if ((num[i] % 4) == 0)
		{
			cout << endl << "So dau tien chia het cho 4 : " << num[i];
			isExist = true;
			break;
		}
	}
	if (i >= 10)
	{
		cout << endl << "=> Khong co so nao trong mang chia het cho 4";
	}*/


	// Yêu cầu 1: Liệt kê vị trí và giá trị các phần tử là số chẵn.
	int num[] = { 10, 25, -4, 32, 63, 81, 19, -24, 13, 18, 45, 12, 72, 42, -6 };

	for (int i = 0; i < 15; i++)
	{
		if ((num[i] % 2) == 0)
		{
			cout << endl << "So chan : " << num[i] << " vi tri : " << i;	
		}
	}






	return 0;
}


