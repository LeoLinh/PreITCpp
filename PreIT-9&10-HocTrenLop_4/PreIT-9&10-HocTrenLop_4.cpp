// PreIT-9&10-HocTrenLop_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // bài 8:

    string name;
    cout << "Nhap ho va ten : ";
    getline(cin, name);

    int len = name.length();

    bool lastIsSpace = true;

    cout << "Ten viet tat : ";
    for (int i = 0; i < len; i++)
    {
        if (isspace(name[i]))
        {
            lastIsSpace = true;
        }
        else
        {
            if (lastIsSpace)
            {
                cout << (char)toupper(name[i]);
            }
            lastIsSpace = false;
        }
    }
    cout << endl;

}

