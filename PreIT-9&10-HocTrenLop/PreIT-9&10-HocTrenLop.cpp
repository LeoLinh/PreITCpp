// PreIT-9&10-HocTrenLop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int KiemTraTonTai(char c, string str)
{

}

int main()
{
    //string str;
    //cin >> str;

    //int len = (int)str.length();
    //
    //// Bài 10.1 :
    //for (int i = 0; i < len; i++) // Yêu cầu 1
    //{
    //    cout << str[i] << endl;
    //}
    //cout << endl;
    //for (int i = len - 1; i >= 0; i--) // Yêu cầu 2
    //{
    //    cout << str[i] << endl;
    //}
    //cout << endl;

    //// Bài 10.2 :
    //for (int i = 0; i < len; i++) 
    //{
    //    char c = toupper(str[i]);
    //    cout << c;
    //}
    //cout << endl;
    //for (int i = 0; i < len; i++)
    //{
    //    char c = tolower(str[i]);
    //    cout << c;
    //}

    //// Bài 10.3:
    //
    //int count = 0;
    //for (int i = 0; i < len; i++)
    //{
    //    if (isalpha(str[i]))
    //    {
    //        count++;
    //    }
    //}
    //cout << endl;
    //cout << "So ky tu trong chuoi la : " << count << endl;
    //
    //count = 0;
    //for (int i = 0; i < len; i++)
    //{
    //    if (isdigit(str[i]))
    //    {
    //        count++;
    //    }
    //}
    //cout << endl;
    //cout << "So ky tu so trong chuoi la : " << count << endl;

    //count = 0;
    //for (int i = 0; i < len; i++)
    //{
    //    if (isspace(str[i]))
    //    {
    //        count++;
    //    }
    //}
    //cout << "So khoang trang trong chuoi la : " << count << endl;
    //cout << endl;

    // Bài 10.4:
    /*string str1, str2;
    cout << "Nhap chui thu 1 : " << endl;
    getline(cin, str1);
    cout << "Nhap chui thu 2 : " << endl;
    getline(cin, str2);

    int len1 = (int)str1.length();
    int len2 = (int)str2.length();

    if (len1 == len2)
    {
        cout << "do dai 2 chuoi bang nhau" << endl;
    }
    else if (len1 > len2)
    {
        cout << "do dai 1 dai hon" << endl;
    }
    else
    {
        cout << "Do dai 2 dai hon" << endl;
    }

    if (strstr(str1.c_str(), str2.c_str()) != NULL)
    {
        cout << "Chuoi 2 ton tai trong chuoi 1" << endl;
    }
    else 
    {
        cout << "Chuoi 2 khong ton tai trong chuoi 1" << endl;
    }

    string str = str1 + str2;

    cout << "Ket qua sau khi noi 2 chuoi la : " << str << endl;*/

    // bài 10.5 : 

    string str1, str2;
    string cExits;

    cout << "Nhap chui thu 1 : " << endl;
    getline(cin, str1);
    cout << "Nhap chui thu 2 : " << endl;
    getline(cin, str2);

    int len1 = (int)str1.length();
    int len2 = (int)str2.length();

    for (int i = 0; i < len1; i++)
    {
        if (KiemTraTonTai(str1[i], cExits) == 0 )
        {
            cout << str1[i] << ", ";
            cExits += str1[i];
        }
    }
    cout << endl;
    for (int i = 0; i < len2; i++)
    {
        if (KiemTraTonTai(str2[i], cExits) == 0)
        {
            cout << str2[i] << ", ";
            cExits += str2[i];
        }
    }


    return 0;
}

