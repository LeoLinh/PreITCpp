﻿// PreIT-6-BaiTap.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // Hình 16 : 

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
    cout << endl;

    // Hình 17 : 

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

