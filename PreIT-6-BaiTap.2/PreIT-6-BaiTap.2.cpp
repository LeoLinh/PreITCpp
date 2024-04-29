// PreIT-6-BaiTap.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Hàm tính ước số chung lớn nhất của hai số nguyên a và b
int timUSCLN(int a, int b) {
    // Nếu một trong hai số là 0, ước số chung lớn nhất sẽ là số còn lại
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // Nếu một trong hai số là số âm, chuyển đổi thành số dương
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    // Tiến hành tìm ước số chung lớn nhất
    for (int i = a; i >= 1; i--) 
    {
        if (a % i == 0 && b % i == 0) 
        {
            return i; // Trả về ước số chung lớn nhất khi tìm thấy
        }
    }
    return 1; // Nếu không tìm thấy ước số chung lớn nhất, trả về 1
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

