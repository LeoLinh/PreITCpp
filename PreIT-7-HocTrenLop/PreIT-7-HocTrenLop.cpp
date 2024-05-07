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


	// Luyện tập 2 : 

	// Bài tập 4 :  Khai báo một mảng các số nguyên. Viết chương trình yêu cầu người
	// dùng nhập vào giá trị các phần tử.Kiểm tra mảng chứa các phần tử có giá trị đối
	// xứng nhau hay không

	/*int mang[100];
	int n;

	cout << "-Bai tap mang doi xung-" << endl;
	cout << "Nhap so phan tu cua mang : ";
	cin >> n;

	for (int i = 0; i < n && i < 100; i++)
	{
		cout << "Nhap phan tu " << i << " = ";
		cin >> mang[i];
	}

	int i, j;
	for (i = 0, j = n - 1; i < n && j >= 0; i++, j--)
	{
		if (mang[i] != mang[j])
		{
			cout << "mang vua nhap khong phai la mang doi xung" << endl;
			return 0;
		}
	}
	cout << "Mang vua nhap la doi xung" << endl;*/

	// Rút gọn : 
	/*for (int i = 0; i < n / 2; i++)
	{
		if (mang[i] != mang[n - 1 - i])
		{
			cout << "mang vua nhap khong phai la mang doi xung" << endl;
			return 0;
		}
	}
	cout << "Mang vua nhap la doi xung" << endl;*/

	// Bài 6 : Khai báo mảng có tối đa 6 phần tử gồm các giá trị {2, 3, 4, 5}. Viết
	// chương trình thực hiện các yêu cầu sau :
	// Yêu cầu 1: Thêm giá trị 6 vào phần tử ở vị trí cuối mảng.
	// Yêu cầu 2: Thêm giá trị 1 vào phần tử ở vị trí đầu mảng.

	//int mang[6] = { 10, 3, 7, 8 };
 //   cout << "Mang ban dau : ";
 //   for (int i = 0; i < 6; i++)
 //   {
 //       cout << mang[i] << "; ";
 //   }

 //   //Yêu cầu 1: Thêm giá trị 6 vào phần tử ở vị trí cuối mảng.
 //   cout << endl << "Mang sau khi them gia tri 6 vao phan tu cuoi mang : ";
 //   mang[4] = 6;
 //   // In ket qua : 10 ; 3; 7; 8; 6; 0;
 //   for (int i = 0; i < 6; i++)
 //   {
 //       cout << mang[i] << "; ";
 //   }


 //   // Yêu cầu 2: Thêm giá trị 1 vào phần tử ở vị trí đầu mảng
 //   cout << endl << "Mang sau khi them gia tri 1 vao phan tu dau mang : ";
 //   for (int i = 5; i >= 1; i--)
 //   {
 //       mang[i] = mang[i - 1];
 //   }
 //   mang[0] = 1;
 //   // In ket qua : 1; 10 ; 3; 7; 8; 6;
 //   for (int i = 0; i < 6; i++)
 //   {
 //       cout << mang[i] << "; ";
 //   }

	



	return 0;
}


