// PreIT-9&10-HocTrenLop_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string email1, email2;
    string name;
    cout << "Nhap ho va ten : ";
    getline(cin, name);

    int len = name.length();
    string ten, qt1, qt2;
    bool lastIsAlpha = false;
    
    int j = 0;

    for (int i = len; i >= 0; i--)
    {
        if (isspace(name[i]))
        {
            if (lastIsAlpha)
            {
                j = i;
                break;
            }
            lastIsAlpha = false;
        }
        else
        {
            ten = (char)tolower(name[i]) + ten;
            lastIsAlpha = true;
        }
    }
    
    for (int i = 0; i < j; i++)
    {
        if (!isspace(name[i]))
        {
            qt1 += (char)tolower(name[i]);
        }
    }
    
    bool lastIsSpace = true;

    for (int i = 0; i < j; i++)
    {
        if (isspace(name[i]))
        {
            lastIsSpace = true;
        }
        else 
        {
            if (lastIsSpace)
            {
                qt2 += (char)tolower(name[i]);
            }
            lastIsSpace = false;

        }
    }

    email1 = ten + "." + qt1;
    email1 = ten + "." + qt2;

    cout << "Quy tac 1: " << email1 << "@greenacademy.edu.vn" << endl;
    cout << "Quy tac 2: " << email2 << "@greenacademy.edu.vn" << endl;

}

