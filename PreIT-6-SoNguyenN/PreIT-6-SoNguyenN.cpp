// PreIT-6-SoNguyenN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "Nhap so nguyen N: ";
    cin >> N;

    // Phép tính 1: Tính tổng các số lẻ đến N
    int S1 = 0;
    for (int i = 1; i <= N; i += 2) {
        S1 += i;
    }

    // Phép tính 2: Tính tổng các số chẳn đến N
    int S2 = 0;
    for (int i = 2; i <= N; i += 2) {
        S2 += i;
    }

    // Phép tính 3: Tính tổng bình phương các số đến N
    int S3 = 0;
    for (int i = 1; i <= N; i++) {
        S3 += i * i;
    }

    // Phép tính 4: Tính tổng các số đến N theo cấu trúc
    int S4 = 0;
    int dau = 1;
    for (int i = 1; i <= N; i++) {
        S4 += dau * i;
        dau *= -1; // Đảo dấu sau mỗi lần lặp
    }

    // Hiển thị kết quả
    cout << "Phép tính 1: S1 = " << S1 << endl;
    cout << "Phép tính 2: S2 = " << S2 << endl;
    cout << "Phép tính 3: S3 = " << S3 << endl;
    cout << "Phép tính 4: S4 = " << S4 << endl;

    return 0;
}

