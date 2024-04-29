// PreIT-6-BaiTap.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int chieuDai, chieuRong;
    cout << "Nhap chieu dai : ";
    cin >> chieuDai;
    cout << "Nhap chieu rong : ";
    cin >> chieuRong;

    for (int i = 0; i < chieuDai; i++)
    {
        for (int j = 0; j < chieuRong; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < chieuDai; i++)
    {
        for (int j = 0; j < chieuRong; j++)
        {
            if (i == 0 || i == chieuDai - 1 || j == 0 ||j == chieuRong - 1)
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


