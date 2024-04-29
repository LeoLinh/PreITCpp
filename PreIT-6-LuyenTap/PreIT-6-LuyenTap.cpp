// PreIT-6-LuyenTap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int a, b, min, max, sub;

    cout << "nhap a : ";
    cin >> a;
    cout << "nhap b : ";
    cin >> b;

    if (a <= 0 || b <= 0)
    {
        cout << "Khong hop le";
        
    }

    cout << endl << "Uoc so cua a : ";
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            cout << i << " ; ";
        }
    }

    cout << endl << "Uoc so cua b : ";
    for (int i = 1; i <= b; i++)
    {
        if (b % i == 0)
        {
            cout << i << " ; ";
        }
    }

    cout << endl << "Tat ca uoc chung : ";
    for (int i = 1; i<= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << i << " ; ";
        }
    }

    // mẫu :
    //for (int i = a > b ? b : a; i >= 2; i--)
    //{
    //    if (a % i == 0 && b % i == 0)
    //    {
    //        cout << "UCLN cua " << a << " va " << b << " la " << i << endl;
    //        
    //    }
    //}

    //cout << endl;

    //// giải mẫu :
    //while (a != b)
    //{
    //    max = (a > b) ? a : b;
    //    min = (a > b) ? b : a;
    //    sub = max - min;

    //    a = min;
    //    b = sub;
    //}
    //cout << "UCLN : " << a;
    /////////////////

    // Bài 6.12 :

    //int n;
    //cout << "Nhap do dai canh hinh vuong : ";
    //cin >> n;

    //for (int i = 0; i < n; i++)
    //{
    //    for (int j = 0; j < n; j++)
    //    {
    //        cout << "* ";
    //    }
    //    cout << endl;
    //}

    //cout << endl;
    //for (int i = 0; i < n; i++)
    //{
    //    for (int j = 0; j < n; j++)
    //    {
    //        //cout << "* ";
    //        if ((i == 1) || (i == (n - 1)) && j == 1 || j == (n - 1))
    //        {
    //            cout << "* ";
    //        }
    //        else 
    //        {
    //            cout << "  ";
    //        }
    //        
    //    }
    //    cout << endl;
    //}

    // Bài 

    return 0;
}


