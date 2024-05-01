// PreIT-6-BaiTap.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // Hình 12

    int chieuDai, chieuRong;

    cout << "Nhap chieu dai: ";
    cin >> chieuDai;
    cout << "Nhap chieu rong: ";
    cin >> chieuRong;

    cout << endl;

    for (int i = 0; i < chieuRong; i++) 
    {
        for (int j = 0; j < chieuDai; j++) 
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // Hình 13 : 

    for (int i = 0; i < chieuRong; i++) 
    {
        for (int j = 0; j < chieuDai; j++) 
        {
            if (i == 0 || i == chieuRong - 1 || j == 0 || j == chieuDai - 1) 
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

