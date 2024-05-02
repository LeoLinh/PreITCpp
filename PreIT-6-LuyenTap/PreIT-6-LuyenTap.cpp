// PreIT-6-LuyenTap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	// Hình 10 : 
	int n;
	cout << "Nhap canh : ";
	cin >> n;

	int i = 0;
	/*while (i < n)
	{
		int j = 0;
		while (j < n)
		{
			cout << "* ";
			j++;
		}
		cout << endl;
		i++;
	}*/

	// ví dụ 2 : Chỉ cần 1 vòng lặp
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

	i = 0;
	/*while (i < n)
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
	}*/

	// ví dụ : chỉ dùng 1 while
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
	cout << "hinh 12 : " << endl;
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

	// Hình 13 :
	cout << " Hinh 13 : " << endl;
	i = 0;
	while (i < chieuDai)
	{
		int j = 0;
		while (j < chieuRong)
		{
			if (i == 0 || i == chieuDai - 1 || j == 0 || j == chieuRong - 1)
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

	// Hình 13 : chỉ dùng 1 vòng While
	cout << "Hinh 13 : chi dung 1 vong While" << endl;

	while (i < chieuDai * chieuRong)
	{
		int CD = i / chieuDai;
		int CR = i % chieuRong;

		if (CD == 0 || CD == chieuDai - 1 || CR == 0 || CR == chieuRong - 1)
		{
			cout << "* ";
		}

		else
		{
			cout << "  ";
		}

		if (CD == chieuDai - 1)
		{
			cout << endl;
		}
		i++;
	}
	cout << endl;



	return 0;
}


