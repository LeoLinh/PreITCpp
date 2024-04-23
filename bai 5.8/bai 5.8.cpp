// bai 5.8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	double toan;
	cout << "Nhap diem toan: ";
	cin >> toan;

	int lamtron = toan;
	double phanle = toan - lamtron;

	cout << "diem lam tron: " << lamtron << endl;
	cout << "diem le: " << phanle << endl;

	if (phanle < 0.25)
	{
		cout << "diem = " << lamtron;
	}
	else if (phanle <= 0.5)
	{
		cout << "diem = " << lamtron + 0.5;
	}
	else
	{
		cout << "diem = " << 1 + lamtron;
	}
}
