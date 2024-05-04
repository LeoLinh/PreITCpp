// PreIT-6-LuyenTap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	// Hình 10 : 
	cout << "Hinh 10 : 2 vong While : " << endl;
	int n;
	cout << "Nhap canh : ";
	cin >> n;

	int i = 0;
	while (i < n)
	{
		int j = 0;
		while (j < n)
		{
			cout << "* ";
			j++;
		}
		cout << endl;
		i++;
	}

	// ví dụ 2 : Chỉ cần 1 vòng lặp
	cout << "Hinh 10 : 1 vong While : " << endl;
	int nn = n * n;
	i = 1;
	while (i <= nn)
	{
		cout << "* ";
		if (i % n == 0)
		{
			cout << endl;
		}
		i++;
	}

	cout << endl;

	// Hình 11 : 
	cout << "Hinh 11 : dung 2 vong While : " << endl;
	i = 0;
	while (i < n)
	{
		int j = 0;
		while (j < n)
		{
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
			j++;
		}
		i++;
		cout << endl;
	}

	// ví dụ : chỉ dùng 1 while
	cout << "Hinh 11 : dung 1 vong While : " << endl;
	while (i < nn)
	{
		int hangNgang = i / n;
		int hangDoc = i % n;

		if (hangNgang == 0 || hangNgang == n - 1 || hangDoc == 0 || hangDoc == n - 1)
		{
			cout << "* ";
		}

		else
		{
			cout << "  ";
		}

		if (hangDoc == n - 1)
		{
			cout << endl;
		}
		i++;
	}
	cout << endl;

	// hình 12 : 
	cout << "hinh 12 : dung 2 vong While :  " << endl;
	int chieuDai, chieuRong;
	cout << "Nhap chieu dai : ";
	cin >> chieuDai;
	cout << "Nhap chieu rong : ";
	cin >> chieuRong;

	i = 0;
	while (i < chieuDai)
	{
		int j = 0;
		while (j < chieuRong)
		{
			cout << "* ";
			j++;
		}
		cout << endl;
		i++;
	}
	cout << endl;

	// Hình 12 : chỉ dùng 1 vòng While
	cout << "Hinh 12 : chi dung 1 vong While" << endl;

	int count = 0;

	while (count < chieuDai * chieuRong)
	{
		cout << "* ";
		if ((count + 1) % chieuRong == 0)
		{
			cout << endl;
		}
		count++;
	}
	cout << endl;

	// Hình 13 :
	cout << " Hinh 13 : dung 2 vong While :  " << endl;
	i = 0;
	while (i < chieuRong)
	{
		int j = 0;
		while (j < chieuDai)
		{
			if (i == 0 || i == chieuRong - 1 || j == 0 || j == chieuDai - 1)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
			j++;
		}
		cout << endl;
		i++;
	}

	// Hình 13 : chỉ dùng 1 vòng While
	cout << "Hinh 13 : chi dung 1 vong While" << endl;

	int hang = 1;
	int cot = 1;

	while (hang <= chieuRong)
	{
		if (hang == 1 || cot == 1 || hang == chieuRong || cot == chieuDai)
		{
			cout << "* ";
		}
		else
		{
			cout << "  ";
		}
		cot++;
		if (cot > chieuDai)
		{
			cout << endl;
			hang++;
			cot = 1;
		}
	}
	
	// Hình 14 : 
	cout << "Hinh 14 : dung 2 vong While : " << endl;
	int chieuCao;
	cout << "Nhap chieu cao : ";
	cin >> chieuCao;

	hang = 1;

	while (hang <= chieuCao) 
	{
		int cot = 1;
		while (cot <= hang) 
		{
			cout << "* ";
			cot++;
		}
		cout << endl;
		hang++;
	}

	// Hình 15 :
	cout << "Hinh 15 : dung 2 vong While : " << endl;
	hang = 1;
	while (hang <= chieuCao) 
	{
		cot = 1;
		while (cot <= hang) 
		{
			if (cot == hang || cot == 1 || hang == chieuCao) 
			{
				cout << "* ";
			}
			else {
				cout << "  ";
			}
			cot++;
		}
		cout << endl;
		hang++;
	}

	// Hình 16 : 
	cout << "Hinh 16 : dung 2 vong While : " << endl;

	hang = 1;
	while (hang <= chieuCao) 
	{
		cot = 1;
		while (cot <= hang) 
		{
			cout << cot << " ";
			cot++;
		}
		cout << endl;
		hang++;
	}

	// Hình 17 :
	cout << "Hinh 17 : dung 2 vong While : " << endl;
	hang = chieuCao;
	while (hang >= 1) 
	{
		cot = 1;
		while (cot <= hang) 
		{
			cout << cot << " ";
			cot++;
		}
		cout << endl;
		hang--;
	}

	return 0;
}


