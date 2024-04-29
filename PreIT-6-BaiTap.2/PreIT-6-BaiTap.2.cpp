// PreIT-6-BaiTap.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int timUSCLN(int a, int b) {

    if (a == 0)
        return b;
    if (b == 0)
        return a;

    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    for (int i = a; i >= 1; i--) 
    {
        if (a % i == 0 && b % i == 0) 
        {
            return i; 
        }
    }
    return 1; 
}

int main()
{
    int a, b;

    cout << "nhap a : ";
    cin >> a;
    cout << "nhap b : ";
    cin >> b;

    cout << "USCL la :  " << timUSCLN(a, b) << endl;
    
}

