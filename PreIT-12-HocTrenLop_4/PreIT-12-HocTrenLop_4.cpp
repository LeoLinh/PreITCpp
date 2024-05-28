#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

// Bài 11.6 :
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

struct ThucPham 
{
	string Name;
	string Code;
	int Count = 0;
	int Price = 0;
};

ThucPham* thucPhams;
int SoLuongThucPham;

int LoadData()
{
	int index;

	thucPhams = new ThucPham[50];

	ifstream input;

	input.open("C:/N.Linh/Data.txt");

	if (!input.is_open())
	{
		cout << "Khong the mo phai du lieu!" << endl;
		return 1;
	}

	// thao tac doc file
	index = 0;
	while (input.eof() != 1 && index < 50)
	{
		input >> thucPhams[index].Code;
		getline(input, thucPhams[index].Name);
		input >> thucPhams[index].Count;
		input >> thucPhams[index].Price;

		input.ignore(2);
		index++;
	}

	SoLuongThucPham = index;
	input.close();
	return 0;
}

int GetInt()
{
	string str;
	getline(cin, str);
	return atoi(str.c_str());
}

int GetOption(string message, int min, int max)
{
	cout << message;
	int option = GetInt();
	if (min <= option && option <= max)
	{
		return option;
	}
	else
	{
		cout << "Lua chon cua ban khong hop le!" << endl;
		return GetOption(message, min, max);
	}
}

int GetOptionMainMenu()
{
	cout << "\033[2J\033[1;1H";
	cout << "1. Xem thong tin san pham dang co" << endl;
	cout << "2. Tim san pham" << endl;
	cout << "3. Mua hang" << endl;
	cout << "4. Thoat chuong trinh" << endl << endl;

	return GetOption("Hay nhap lua chon cua ban: ", 1, 4);
}

void GetOptionShowAll()
{
	cout << "\033[2J\033[1;1H";
	for (int i = 0; i < SoLuongThucPham; i++)
	{
		cout.fill(' ');
		cout << setw(25) << left << thucPhams[i].Name;
		cout << setw(10) << left << thucPhams[i].Code;
		cout << setw(10) << left << thucPhams[i].Count;
		cout << thucPhams[i].Price;
		cout << endl;
	}

	cout << endl << "An phim bat ky de quay lai: ";
	int ret = getchar();
	cin.ignore();
}

void FindThucPham()
{
	string code;
	string option;
	bool isExist = false;
	cout << "\033[2J\033[1;1H";
	cout << "Nhap ma san pham can tim: ";
	getline(cin, code);
	for (int i = 0; i < SoLuongThucPham; i++)
	{
		if (thucPhams[i].Code == code)
		{
			cout.fill(' ');
			cout << endl << "Thong tin san pham: " << endl;
			cout << setw(25) << left << thucPhams[i].Name;
			cout << setw(10) << left << thucPhams[i].Count;
			cout << thucPhams[i].Price << endl;
			isExist = true;
			break;
		}
	}

	if (!isExist)
	{
		cout << endl << "Khong tim thay thong tin san pham co ma la " << code << endl;
	}

	cout << "Ban co muon tiep tuc tim kiem khong? (y(YES)/n(No)): ";
	getline(cin, option);
	if (option == "y")
	{
		FindThucPham();
	}
}

void Buy()
{
	string code;
	string option;
	int count = 0;
	bool isExist = false;
	cout << "\033[2J\033[1;1H";
	cout << "Nhap ma san pham can tim: ";
	getline(cin, code);
	for (int i = 0; i < SoLuongThucPham; i++)
	{
		if (thucPhams[i].Code == code)
		{
			while (count <= 0 || count > thucPhams[i].Count)
			{
				cout << "Hay nhap so luong can mua: ";
				count = GetInt();

				if (count <= 0)
				{
					cout << "So luong mua phai lon hon 0" << endl;
				}
				else if (count > thucPhams[i].Count)
				{
					cout << "So luong mua khong du" << endl;
				}
			}

			cout << "So tien phai thanh toan la: " << count * thucPhams[i].Price << endl;
			thucPhams[i].Count -= count;
			isExist = true;
			break;
		}
	}

	if (!isExist)
	{
		cout << endl << "Khong tim thay thong tin san pham co ma la " << code << endl;
	}

	cout << "Ban co muon tiep tuc mua khong? (y(YES)/n(No)): ";
	getline(cin, option);
	if (option == "y")
	{
		Buy();
	}
}

int main()
{
	if (LoadData())
	{
		return 1;
	}

	int option;
	while (true)
	{
		option = GetOptionMainMenu();
		switch (option)
		{
		case 1:
			GetOptionShowAll();
			break;
		case 2:
			FindThucPham();
			break;
		case 3:
			Buy();
			break;
		case 4:
			return 0;
		}
	}

	return 0;
}