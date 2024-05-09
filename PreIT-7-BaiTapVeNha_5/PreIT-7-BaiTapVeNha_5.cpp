// PreIT-7-BaiTapVeNha_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

const int n = 10;
int Soluong = 9;

int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

void AddValue(int value, int pos)
{
    for (int i = Soluong; i > pos; i++)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    Soluong++;
}

int main()
{
    int value, pos;
    
    cout << "Nhap gia tri can them: ";
    cin >> value;
    cout << "Nhap vi tri can them: ";
    cin >> pos;

    AddValue(value, pos);



    return 0;
}

