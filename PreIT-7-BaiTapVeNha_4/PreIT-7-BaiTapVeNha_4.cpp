// PreIT-7-HocTrenLop_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void NhapMang(int Soluong, int Arr[])
{
	for (int i = 0; i < Soluong; i++)
	{
		cout << "Nhap phan tu" << i << " = ";
		cin >> Arr[i];
	}
}

void XuatMang(int Soluong, int Arr[])
{
	for (int i = 0; i < Soluong; i++)
	{
		cout << Arr[i] << "; ";
	}
	cout << endl;
}

void HoanVi(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void BubbleSort(int Soluong, int Arr[])
{
	for (int i = 0; i < Soluong - 1; i++)
	{
		for (int j = 0; j < Soluong - 1 - i; j++)
		{
			if (Arr[j] > Arr[j + 1])
			{
				HoanVi(Arr[i], Arr[j + 1]);

			}
		}
	}
}

void SelectionSort(int Soluong, int Arr[])
{
	for (int i = 0; i < Soluong - 1; i++)
	{
		int index = i;
		for (int j = i + 1; j < Soluong; j++)
		{
			if (Arr[j] > Arr[index])
			{
				index = j;
			}
		}
		if (index != i )
		{
			HoanVi(Arr[i], Arr[index]);
		}
	}
}


int main()
{
	int n = 10;
	int mang[100];
	NhapMang(n, mang);
	XuatMang(n, mang);

	BubbleSort(n, mang);
	cout << "BubbleSort sau khi sap xep : ";
	XuatMang(n, mang);

	SelectionSort(n, mang);
	cout << "SelectionSort Sau khi sap xep : ";
	XuatMang(n, mang);

	int a = 1, b = 2;
	cout << "Truoc khi hoan vi: a = " << a << ", b = " << b << endl;
	HoanVi(a, b);
	cout << "Sau khi hoan vi: a = " << a << ", b = " << b << endl;




	return 0;
}

