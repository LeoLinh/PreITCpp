// PreIT-7-BaiTapVeNha_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

const int n = 10;
int Soluong = 9;

int arr[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

void AddValue(int value, int pos)
{
    if (Soluong <= n && pos >= 0 && pos <= Soluong)
    {
        for (int i = Soluong; i > pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos] = value;
        Soluong++;
    }
    else
    {
        cout << endl << "Gia tri khong hop le!" << endl;
        return;
    }
}

void RemoveValue(int pos)
{
    for (int i = pos; i < Soluong - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    Soluong--;
}

void OutputArray()
{
    cout << endl << "Cac phan tu cua mang sau khi them : ";
    for (int i = 0; i < Soluong; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void OutputArrayDelete()
{
    cout << endl << "Cac phan tu cua mang sau khi xoa : ";
    for (int i = 0; i < Soluong; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int value, pos;
    
    cout << "Nhap gia tri can them: ";
    cin >> value;
    cout << "Nhap vi tri can them: ";
    cin >> pos;

    AddValue(value, pos); // Thêm giá trị và vị trí
    OutputArray(); // Hiển thị giá trị vừa thêm vào

    cout << endl << "Nhap vi tri can xoa (Tinh tu vi tri 0) : ";
    cin >> pos;
    RemoveValue(pos); // Xoá phần tử
    OutputArrayDelete(); // Hiển thị giá trị vừa Xoá

    return 0;
}

