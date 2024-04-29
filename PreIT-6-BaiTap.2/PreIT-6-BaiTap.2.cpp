// PreIT-6-BaiTap.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


//int timUSCLN(int a, int b) {
//
//    if (a == 0)
//        return b;
//    if (b == 0)
//        return a;
//
//    if (a < 0)
//        a = -a;
//    if (b < 0)
//        b = -b;
//
//    for (int i = a; i >= 1; i--) 
//    {
//        if (a % i == 0 && b % i == 0) 
//        {
//            return i; 
//        }
//    }
//    return 1; 
//}
//
//int main()
//{
//    int a, b;
//
//    cout << "nhap a : ";
//    cin >> a;
//    cout << "nhap b : ";
//    cin >> b;
//
//    cout << "USCL la :  " << timUSCLN(a, b) << endl;
//    
//}

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
        for (int j = 0; j < n; j++)
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
        if (int j = 0; j < chieuRong; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }



    return 0;
}



