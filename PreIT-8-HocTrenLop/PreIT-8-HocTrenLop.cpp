// PreIT-8-HocTrenLop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Bài 8.1 : 
//void BangCuuChuong(int n)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		cout << n << " x " << i << " = " << n * i << endl;
//	}
//}
//
//int main()
//{
//	int n;
//	cout << "Nhap n : ";
//	cin >> n;
//	BangCuuChuong(n);
//}

// Bài 8.2 :
//int BinhPhuong(int so)
//{
//	return so* so;
//}
//
//float CanBacHai(int so)
//{
//	return sqrt(so);
//}
//
//int main()
//{
//	int n;
//	cout << "Ket qua sau khi Binh Phuong va can bac 2 : ";
//	cin >> n;
//
//	cout << endl<< "Binh phuong cua : " << n << " = " << BinhPhuong(n);
//
//	cout << endl << "Can bac 2 cua : " << n << " = " << CanBacHai(n);
//}

// Bài 8.3 :

int TinhTong(int a, int b)
{
	return a+b;
}

int TinhHieu(int a, int b)
{
	return a-b;
}

int TinhTich(int a, int b)
{
	return a * b;
}

int TinhThuong(int a, int b)
{
	if (a == 0)
	{
		return 0;
	}
	else
	{
		return a / b;
	}
	
}

int main()
{
	//int a = 2, b = 4;
	//
	//cout << endl << a << " + " << b << " = " << TinhTong(a, b);
	//cout << endl << a << " + " << b << " = " << TinhHieu(a, b);
	//cout << endl << a << " + " << b << " = " << TinhTich(a, b);
	//cout << endl << a << " + " << b << " = " << TinhThuong(a, b);

	int a, b;
	int option;
	cout << "Nhap gia tri a : ";
	cin >> a;
	cout << "Nhap gia tri b : ";
	cin >> b;

	while (true)
	{
		cout << "Lua chon phep tinh tu 1 den 4 " << endl;
		cout << "1.Tinh Cong" << endl;
		cout << "2.Tinh Tru" << endl;
		cout << "3.Tinh Nhan" << endl;
		cout << "4.Tinh Chia" << endl;
		cin >> option;

		switch (option)
		{
		case 1: 
			cout << "Ket qua la : " << TinhTong(a, b);
			break;
		case 2: 
			cout << "Ket qua la : " << TinhHieu(a, b);
			break;
		case 3: 
			cout << "Ket qua la : " << TinhTich(a, b);
			break;
		case 4: 
			if (a == 0 || b == 0)
			{
				cout << "Gia tri khong hop le" << endl;
			}
			else
			{
				cout << "Ket qua la : " << TinhThuong << endl;
			}
			break;
		default: 
			cout << "Chi duoc nhap so tu 1 den 4";
			break;
		}
		break;
	}

}

// Bài 8.4 : 

int KiemTraSNT(int so)
{
	if (so < 1)
	{
		return 0;
	}
	
}


int main()
{
	int n;
	cout << "Nhap vao so nguyen duong N : ";
	cin >> n;


}




