// PreIT-11-HocTrenLop_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct HangHoa
{
    int maHangHoa;
    string tenHangHoa;
    int soLuong;
    int donGia;

};

int main()
{
    HangHoa hangHoas[3] =
    {
        {123, "Iphone", 5, 10000},
        {124, "Ipad", 10, 30000},
        {125, "Macbook", 20, 50000}
    };

    while (true)
    {
        int maso;
        cout << "Nhap ma so can tra cuu : ";
        cin >> maso;

        int j = -1;
        for (int i = 0; i < 3; i++)
        {
            if (hangHoas[i].maHangHoa == maso)
            {
                j = i;
                break;
            }
        }
        if (j == -1)
        {
            cout << "Khong tim thay thong tin hang hoa co ma so la : " << maso << endl;
        }
        else
        {
            cout << "So luong: " << hangHoas[j].soLuong << ", Ten hang hoa: "
                << hangHoas[j].tenHangHoa << ", Don gia: " << hangHoas[j].donGia << endl;
        }
    }
}

