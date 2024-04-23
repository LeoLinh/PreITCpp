// Buoi 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Ôn tập toán tử++, --, +=, -=, *=, /=
	/*int a, b;

	a = 103;
	b = (a % 4 == 0) ? (a / 4) : (a % 4);

	cout << "a=" << a << "; b=" << b << endl << endl;

	double x = 1 / 3;
	double y = 1.0 / 3;

	cout << "x=" << x << "; y=" << y << endl << endl;

	double z = pow(27, 1.0 / 3);
	cout << "z=" << z << endl;


	a = 100;
	cout << "a = 100;" << endl;
	cout << a << endl << endl;

	b = a++ + 23;
	cout << "b = a++ + 23;" << endl;
	cout << "a=" << a << "; b=" << b << endl << endl;

	a = 100;

	b = ++a + 23;
	cout << "b = ++a + 23;" << endl;
	cout << "a=" << a << "; b=" << b << endl << endl;

	a += 2;
	cout << "a += 2;" << endl;
	cout << a << endl << endl;

	a -= 65;
	cout << "a -= 65;" << endl;
	cout << a << endl << endl;

	a--;
	cout << "a--;" << endl;
	cout << a << endl << endl;

	--a;
	cout << "--a;" << endl;
	cout << a << endl << endl;

	a *= 2;
	cout << "a *= 2;" << endl;
	cout << a << endl << endl;

	a++;
	cout << "a++;" << endl;
	cout << a << endl << endl;

	a /= 3;
	cout << "a /= 3;" << endl;
	cout << a << endl << endl;



	cin.get();
	cin.get();*/
	//------------------------------------

	// sửa lỗi string k hiện tên sau dấu cách : 
	//string name;
	//int price, num;

	//cout << "nhap ten: ";
	////cin >> name;
	//getline(cin, name);

	//cout << "Nhap so luong: ";
	//cin >> num;

	//cout << "Nhap gia: ";
	//cin >> price;

	//cout << "tinh tien " << name << " = " << price * num << endl;

	float toan, van, anh;
	float diemTrungBinh;
	

	/*cout << "Nhap diem Toan : ";
	cin >> toan;

	if (toan > 8.5)
	{
		cout << "Xep loai A" << endl;
	}
	else if ((toan >= 6.5) && (toan <= 8.49))
	{
		cout << "xep loai B";
	}*/

	
	cout << "Nhap diem Toan : ";
	cin >> toan;
	cout << "Nhap diem Van : ";
	cin >> van;
	cout << "Nhap diem Anh : ";
	cin >> anh;

	diemTrungBinh = (toan + van + anh) / 3.0;

	// Xác định xếp loại
	char xepLoai = 
		(diemTrungBinh >= 8.5) ? 'A' :
		(diemTrungBinh >= 6.5 && diemTrungBinh <= 8.49) ? 'B' :
		(diemTrungBinh >= 5 && diemTrungBinh <= 6.49) ? 'C' :
		(diemTrungBinh >= 3.5 && diemTrungBinh <= 4.99) ? 'D' : 'F';

	// Xuất thông tin xếp loại
	cout << "Sinh vien xep loai: " << xepLoai << endl;

	



	cin.get();
	cin.get();


    return 0;
}


