// PreIT-9&10-HocTrenLop_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    char c;

    cout << "Nhap chuoi ky tu: ";
    getline(cin, str);

    cout << "Nhap ky tu can kiem tra: ";
    cin >> c;

    c = tolower(c);
    int len = str.length();
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (c == tolower(str[i]))
        {
            count++;
        }
    }

    cout << "Co " << count << " ky tu '" << c << "' trong chuoi \"" << str << "\"" << endl;

}

