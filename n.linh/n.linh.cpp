// PreIT-8-HocTrenLop_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;



int main()
{
	// Bài 2 :

	int canh_a, canh_b;
	cout << "Nhap canh a : ";
	cin >> canh_a;
	cout << "Nhap canh b : ";
	cin >> canh_b;

	if (canh_a <= 0 || canh_b <= 0)
	{
		cout << "Cac canh phai la so duong";
		return 1;
	}

	int s = canh_a * canh_b;
	int P = (canh_a + canh_b) * 2;

	cout << "Dien tich hinh chu nhat la : " << s << endl;
	cout << "Chu vi hinh chu nhat la : " << P << endl;


	return 0;
}
