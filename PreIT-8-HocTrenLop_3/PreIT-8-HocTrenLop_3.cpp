// PreIT-8-HocTrenLop_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int NhapSoNguyenDuong()
{
    int n;
    cout << "Nhap So Nguyen Duong : ";
    cin >> n;
    return n;
}


//int KiemTraSNT(int n)
//{
//    if (n <= 1)
//    {
//        return 0;
//    }
//    for (int i = 2; i < n / 2; i++)
//    {
//        if (n % i == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}

int KiemTraSNT(int n, int i) // Đệ quy
{
    if (i >= n / 2)
    {
        if (n < 2)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if (n % i == 0)
    {
        return 0;
    }
    else
    {
        return KiemTraSNT(n, i + 1);
    }
}

//int LietKeSNT(int n)
//{
//    for (int i = 2; i < n; i++)
//    {
//        if (KiemTraSNT(i) == 1)
//        {
//            cout << i << "; ";
//        }
//    }
//    return 0;
//}

void LietKeSNT(int n) //Đệ quy
{
    if (n <= 1)
    {
        return;
    }
    else if (n == 2)
    {
        cout << n << "; ";
    }
    else
    {
        LietKeSNT(n - 1);
        if (KiemTraSNT(n, 2))
        {
            cout << n << "; ";
        }
    }
}

//int main()
//{
//    int n = NhapSoNguyenDuong();
//
//    if (KiemTraSNT(n) == 0)
//    {
//        cout << endl << "N khong phai la so nguyen to";
//    }
//    else
//    {
//        cout << "N la so nguyen to " << LietKeSNT;
//    }
//    
//    return 0;
//
//}


int main() // Đệ quy
{
    int N;
    cout << "Hay nhap so nguyen duong N: ";
    cin >> N;
    if (KiemTraSNT(N, 2) == 0)
    {
        cout << "N khong phai la so nguyen to" << endl;
    }
    else
    {
        cout << "N la so nguyen to" << endl;
    }

    cout << "Cac so nguyen to nho hon N la: ";
    LietKeSNT(N - 1);
    return 0;
}
