// PreIT-9&10-HocTrenLop_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string CatChuoi(string str, int offset, int length)
{
    int strLen = str.length();
    if (offset >= str.length())
    {
        return "";
    }
    
    string s;
    for (int i = offset; i < offset + length && i < strLen; i++)
    {
        s += str[i];
    }


}

int main()
{
    //Bài 11:

    string str;
    cout << "Nhap chuoi ky tu : ";
    getline(cin, str);

    int off, len;

    cout << "Nhap vao vi tri cat chuoi : ";
    cin >> off;

    cout << "Nhap vao do dai cat : ";
    cin >> len;

    cout << "Ket qua : " << CatChuoi(str, off, len) << endl;

}

