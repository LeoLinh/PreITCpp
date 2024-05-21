// PreIT-8-HocTrenLop_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;



int main()
{
	// Bài \1 : 

	float x;
	cout << "Nhap so x : ";
	cin >> x;

	float luyThua = pow(x, 3);
	float canBac2 = sqrt(x);

	cout << "Luy thua cua : " << x << " La = " << luyThua << endl;
	cout << "Can bac 2 cua : " << x << " La = " << canBac2 << endl;

	return 0;
}
