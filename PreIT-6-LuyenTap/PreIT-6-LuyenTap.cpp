// PreIT-6-LuyenTap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int a, b, c, x;
	cout << "Nhap gia tri a : ";
	cin >> a;
	cout << "Nhap gia tri b : ";
	cin >> b;
	cout << "Nhap gia tri c : ";
	cin >> c;

	/*c = a;
	a = b;
	b = c;*/
	
	//a = a + b;
	//b = a - b;

	if (a > b)
	{
		x = a;
		a = b;
		b = x;
	}
	if (a > c)
	{
		x = a;
		a = c;
		c = x;
	}
	if (b > c)
	{
		x = b;
		b = c;
		c = x;
	}
	

	cout << "=> day so la  : " << a << " ; " << b << " ; " << c << endl;





	return 0;
}


