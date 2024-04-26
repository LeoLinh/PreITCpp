// PreIT-6-BaiTap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // Bài tập 6.3 : Viết chương trình nhập số nguyên N, thực hiện các phép tính sau:

    //int N;
    //cout << "Nhap so N : ";
    //cin >> N;

    //int s0 = 0;
    //for (int i = 1; i <= N; i++)
    //{
    //    //s0 = 0 + i
    //    s0 += i;
    //    cout << "s0 = " << i << " | i + " << s0 << endl;
    //}

    //int s1 = 0;
    //for (int i = 1; i <= N; i += 2)
    //{
    //    s1 += i;
    //    cout << "Phep tinh 1 : i = " << i << " | s1 = " << s1 << endl;
    //}

    //int s2 = 0;
    //for (int i = 2; i <= N; i += 2)
    //{
    //    s2 += i;
    //    cout << "Phep tinh 2 : i = " << i << " | s2 = " << s2 << endl;
    //}

    //int s3 = 0;
    //for (int i = 1; i <= N; i++)
    //{
    //    s3 += i * i;
    //    cout << "Phep tinh 3 : " << i << " | i : " << s3 << endl;
    //}

    //int s4 = 0;
    //s4 = s1 - s2;
    //cout << "Phep tinh 4 : " << s4 << endl;

    //////// Bài tập 6.4 : 

    int N;
    cout << "Nhap vao so nguyen N : ";
    cin >> N;

    float S5 = 0;
    for (int i = 1; i <= N; i++) 
    {
        S5 += 1.0 / i;
    }

    float S6 = 0;
    for (int i = 1; i <= N; i++) 
    {
        S6 += 1.0 / (2 * i);
    }

    float S7 = 0;
    for (int i = 0; i < N; i++) 
    {
        S7 += 1.0 / (2 * i + 1);
    }

    // Hiển thị kết quả
    cout << "Phep tinh 1: S5 = " << S5 << endl;
    cout << "Phep tinh 2: S6 = " << S6 << endl;
    cout << "Phep tinh 3: S7 = " << S7 << endl;


    ////// Bài tập 6.5 : .

    int N;
    cout << "Nhap so nguyen N : ";
    cin >> N;

    int s8 = 0;
    int tinhGiaiThua(int n)
    {
        int giaiThua = 1;
        for (int i = 1; i <= n; ++i) 
        {
            giaiThua *= i;
        }
        return giaiThua;
    }


    return 0;
}


