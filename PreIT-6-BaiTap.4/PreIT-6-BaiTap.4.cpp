// PreIT-6-BaiTap.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // Hình 14 : 

    int chieuCao;

    cout << "Nhap chieu cao : ";
    cin >> chieuCao;

    for (int i = 0; i < chieuCao; i++) 
    {
        for (int j = 0; j <= i; j++) 
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // Hình 15 : 
    for (int i = 0; i < chieuCao; i++) 
    {
        for (int j = 0; j <= i; j++) 
        {
            if (j == 1 || j == i) 
            {
                cout << "* ";
            }
            else 
            {
                cout << "  "; 
            }
        }
        cout << endl; 
    }

    return 0;
}


