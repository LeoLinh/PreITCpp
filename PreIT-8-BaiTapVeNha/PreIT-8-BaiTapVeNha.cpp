// PreIT-8-BaiTapVeNha.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//int NhapSoNguyenDuong()
//{
//    int n;
//    cout << "Nhap so Nguyen duong : ";
//    cin >> n;
//    return n;
//}
//
//int KiemTraSNT(int n)
//{
//    if (n <= 1)
//    {
//        return 0;
//    }
//    for (int i = 2; i <= sqrt(n); i++)
//    {
//        if (n % i == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//
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
//
//int main() 
//{
//    int n = NhapSoNguyenDuong();
//
//    if (KiemTraSNT(n) == 0)
//    {
//        cout << "N khong phai la so nguyen to" << endl;
//    }
//    else
//    {
//        cout << "N la so nguyen to " << endl;
//        cout << "Cac so nguyen to nho hon : " << n << " La : ";
//        LietKeSNT(n);
//    }
//
//    return 0;
//}

// Đệ quy
bool KiemTraSNT(int n, int i = 2) 
{
    if (n <= 2) 
    {
        return (n == 2);
    }
    if (n % i == 0) 
    {
        return false;
    }
    if (i <= sqrt(n)) 
    {
        return true;
    }
    return KiemTraSNT(n, i + 1);
}

void LietKeSNT(int n, int current = 2) 
{
    if (current >= n) 
    {
        return;
    }
    if (KiemTraSNT(current)) 
    {
        cout << current << "; ";
    }
    LietKeSNT(n, current + 1);
}

int main() 
{
    int n;
    cout << "Nhap so Nguyen duong: ";
    cin >> n;

    if (KiemTraSNT(n)) 
    {
        cout << "N la so nguyen to" << endl;
        cout << "Cac so nguyen to nho hon " << n << " la: ";
        LietKeSNT(n);
    }
    else 
    {
        cout << "N khong phai la so nguyen to" << endl;
    }

    return 0;
}
