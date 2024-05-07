// PreiT-7-BaiTapVeNha_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // Yêu cầu 1: Yêu cầu người dùng nhập vào giá trị A. 
    // Tìm kiếm các phần tử ở trị số chẵn có giá trị nhỏ hơn hoặc bằng A.
    int a;
    int array[] = { 2, 12, 22, 33, 41, 54, 67, 70, 81, 99 };

    cout << "Nhap gia tri A : ";
    cin >> a;

    for (int i = 0; i < array[i]; i++)
    {
        if (array[i] % 2 == 0 && array[i] <= a)
        {
            cout << array[i] << "; ";
        }
    }
    cout << endl;

    // Yêu cầu 2: Yêu cầu người dùng nhập vào giá trị B.
    // Đếm số lần xuất hiện của các phần tử mang giá trị trùng với giá trị B.

    int b;
    cout << "Nhap gia tri b : ";
    cin >> b;

    for (int i = 0; i < array[i]; i++)
    {
        if (array[i] = b)
        {
            cout << array[i];
        }
    }

    return 0;
}

