// PreIT-6-BaiTap.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int chieuCao;
    cout << "Nhap chieu cao : ";
    cin >> chieuCao;

    for (int i = chieuCao; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}


