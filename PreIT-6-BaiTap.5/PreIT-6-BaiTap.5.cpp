// PreIT-6-BaiTap.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int chieuCao;
    cout << "Nhap chieu cao : ";
    cin >> chieuCao;

    for (int i = 0; i < chieuCao; i++) 
    {
        for (int j = 0; j <= i; j++) 
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < chieuCao; i++) {
        // Vòng lặp in ra dấu bất kỳ cho từng cột của hàng hiện tại
        for (int j = 0; j <= i; j++) {
            // Kiểm tra nếu đang ở hàng cuối cùng hoặc ở cột đầu tiên hoặc cuối cùng của hàng
            if (i == chieuCao - 1 || j == 0 || j == i) {
                cout << "* ";
            }
            else {
                cout << "  "; // In ra khoảng trắng nếu không phải là điều kiện trên
            }
        }
        cout << endl; // Xuống dòng sau khi in hết các ký tự của hàng
    }

    

    return 0;
}

