// PreIT-6-BaiTap.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main()
{
    int chieuCao;
    cout << "Nhap chieu cao : ";
    cin >> chieuCao;

    for (int i = 0; i < chieuCao; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

