// PreIT-11-HocTrenLop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct HocVien
{
	int MaSo;
	string Name;
	string Email;
	float DTB;
};
int main()
{
	HocVien hocViens[3];

	for (int i = 0; i < 3; i++)
	{
		cout << endl << "Nhap thong tin cua hoc vien thu " << i + 1 << " : " << endl;
		cout << "Ma so: ";
		cin >> hocViens[i].MaSo;
		cin.ignore(1);
		cout << "Ho va ten: ";
		getline(cin, hocViens[i].Name);
		cout << "Email: ";
		getline(cin, hocViens[i].Email);
		cout << "Dien trung binh: ";
		cin >> hocViens[i].DTB;
	}

	cout << endl << endl << "Thong tin hoc vien:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << hocViens[i].MaSo << " : " << hocViens[i].Name << " ; " << hocViens[i].Email << " : " << hocViens[i].DTB << endl;
	}
}

