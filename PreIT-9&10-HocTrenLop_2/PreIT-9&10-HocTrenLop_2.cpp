// PreIT-9&10-HocTrenLop_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // bài 10.6:
    //string str;
    //cout << "Nhap chuoi ky tu: ";
    //getline(cin, str);

    //int count = 0;
    //int len = str.length();

    //bool lastIsSpace = false;
    //for (int i = 0; i < len; i++)
    //{
    //    if (isspace(str[i]))
    //    {
    //        // loại bỏ trường hợp có 2 khoảng trắng liên tiếp
    //        if (!lastIsSpace)
    //        {
    //            count++;
    //        }
    //        lastIsSpace = true;
    //    }
    //    else
    //    {
    //        lastIsSpace = false;
    //    }
    //}

    //// loại bỏ trường hợp có khoảng trắng ở cuối chuỗi vừa nhập
    //if (!lastIsSpace)
    //{
    //    count++;
    //}

    //// loại bỏ trường hợp có khoảng trắng ở đầu chuỗi vừa nhập
    //if (isspace(str[0]))
    //{
    //    count--;
    //}

    //cout << "Chuoi vua nhap co " << count << " tu" << endl;

    // bài 10.7 :
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




    return 0;
}

