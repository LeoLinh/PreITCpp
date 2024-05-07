// PreIT-7-HocTrenLop_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void NhapMang(int& Soluong, int Arr[])
{
    for (int i = 0; i < Soluong; i++ )
    {
        cout << "Nhap phan tu" << i << " = ";
        cin >> Arr[i];
    }
}

void XuatMang(int Soluong, int Arr[])
{
    for (int i = 0; i < Arr[i]; i++)
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

int main()
{
    int n = 10;
    int mang[100];
    NhapMang(n, mang);
    XuatMang(n, mang);

    int a = 1, b = 2;
    cout << "Truoc khi hoan vi: a = " << a << ", b = " << b << endl;
    HoanVi(a, b);
    cout << "Sau khi hoan vi: a = " << a << ", b = " << b << endl;

}

