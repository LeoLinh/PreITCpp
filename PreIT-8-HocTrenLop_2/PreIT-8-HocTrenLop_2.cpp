// PreIT-8-HocTrenLop_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Bài 8.5 : Viết chương trình nhập số nguyên dương A, B, C. Thực hiện bài toán
// tính tổng của các giai thừa A, B và C : S = A!+ B!+ C!


//int NhapSoNguyen()
//{
//    int n;
//    do
//    {
//        cout << "Nhap so nguyen duong : ";
//        cin >> n;
//        if (n < 0)
//        {
//            cout << "Hay nhap lai!";
//        }
//    } while (n < 0);
//    return n; 
//}

int NhapSoNguyen() // Đệ quy
{
    int x;
    cout << "Nhap so nguyen duong : ";
    cin >> x;

    if (x > 0)
    {
        return x;
    }
    else
    {
        return NhapSoNguyen();
    }
}

//int GiaiThua(int n) 
//{
//    int gt = 1;
//    for (int i = 2; i <= n; i++) 
//    {
//        gt *= i;
//    }
//    return gt;
//}

int GiaiThua(int n) // Đệ quy
{
    if (n <= 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * GiaiThua(n - 1);
    }
}

int main()
{
    int a, b, c;
    int tongGiaiThua;

    a = NhapSoNguyen();
    b = NhapSoNguyen();
    c = NhapSoNguyen();

    tongGiaiThua = GiaiThua(a) + GiaiThua(b) + GiaiThua(c);

    cout << "Tong giai thua = " << tongGiaiThua << endl;




    return 0;
}

