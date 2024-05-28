// PreIT-12-HocTrenLop_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

struct Giay 
{
	string ID;
	float Size = 0;
	int Sex = 0;
	int Count = 0;
	int Price = 0;
};

int SoLuong = 0;
Giay* giays;

int LoadData()
{
	int index;

	giays = new Giay[50];

	ifstream input;

	input.open("C:/N.Linh/Data.txt");

	if (!input.is_open())
	{
		cout << "Khong the mo phai du lieu!" << endl;
		return 1;
	}
}

int GetOption(string message, int min, int max)
{
	string str;
	cout << message;
	getline(cin, str);

	int option = atoi(str.c_str());
	if (min <= option && max <= option)
	{
		return option;
	}
	else
	{
		cout << "Lua chon khong hop le" << endl;
		return GetOption(message, min, max);
	}
}

int GetOptionMainMenu()
{
	cout << "\033[2J\033[1;1H";
	cout << "1. Xuat thong tin giay" << endl;
	cout << "2. Nhap giay" << endl;
	cout << "3. Tim giay" << endl;
	cout << "4. Mua giay" << endl;
	cout << "5. Thoat chuong trinh" << endl << endl;
	
	return GetOption("Hay nhap lua chon cua ban: ", 1, 5);
}


int main()
{
	int option;
	while (true)
	{
		option = GetOptionMainMenu();
		switch (option)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			return 0;
		}
	}

	return 0;
}


