// PreIT-6-SoNguyenN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "Nhap so nguyen N: ";
    cin >> N;

    // Phép tính 1: 
    int S1 = 0;
    int i = 1;
    while (i <= N) {
        S1 += i;
        i += 2; 
    }
    cout << "Phep tinh 1: S1 = " << S1 << endl;


    // Phép tính 2: 
    int S2 = 0;
    i = 2;
    while (i <= N) {
        S2 += i;
        i += 2; 
    }
    cout << "Phep tinh 2: S2 = " << S2 << endl;


    // Phép tính 3: 
    int S3 = 0;
    i = 1;
    while (i <= N) {
        S3 += i * i;
        i++; 
    }
    cout << "Phep tinh 3: S3 = " << S3 << endl;


    return 0;
}

