// PreIT-6-BaiTap.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n : ";
    cin >> n;
    
    // Hình 10 :
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    // Hình 11 : 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++) 
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) 
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

