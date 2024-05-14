// PreIT-8-BaiTapVeNha.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

bool KiemTraSNT(int N) {
    if (N <= 1) return false;
    if (N <= 3) return true;
    if (N % 2 == 0 || N % 3 == 0) return false;
    for (int i = 5; i <= sqrt(N); i += 6) 
    {
        if (N % i == 0 || N % (i + 2) == 0) return false;
    }
    return true;
}


void LietKeSNT(int N) 
{
    for (int i = 2; i < N; i++) 
    {
        if (KiemTraSNT(i)) 
        {
            cout << i << "; ";
        }
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Nhap so nguyen duong N: ";
    cin >> N;

    if (KiemTraSNT(N)) 
    {
        cout << N << " la so nguyen to." << endl;
        cout << "Cac so nguyen to nho hon " << N << " la: ";
        LietKeSNT(N);
    }
    else 
    {
        cout << N << " khong phai la so nguyen to." << endl;
    }

    return 0;
}

