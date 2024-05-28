#include <iostream>
#include <fstream>
#include <string>
#include <conio.h> 

using namespace std;

struct Giay {
    string ID;
    float Size = 0;
    int Sex = 0;
    int Count = 0;
    int Price = 0;
};

int SoLuong = 0;
Giay* giays;

void ClearInput()
{
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }

}

int LoadData()
{
    int index;

    giays = new Giay[50];

    ifstream input;

    input.open("D:/AnhNV/data5.txt");

    if (!input.is_open())
    {
        cout << "Khong the mo phai du lieu!" << endl;
        return 1;
    } 

    // thao tac doc file
    index = 0;
    while (input.eof() != 1 && index < 50)
    {
        input >> giays[index].ID;
        input >> giays[index].Size;
        input >> giays[index].Sex;
        input >> giays[index].Count;
        input >> giays[index].Price;
        input.ignore();
        index++;
    }

    SoLuong = index;
    input.close();
    return 0;
}

int XuatGiay()
{
    cout << "\033[2J\033[1;1H";
    cout << "Thong tin giay: " << endl;
    for (int i = 0; i < SoLuong; i++)
    {
        cout << giays[i].ID << "\t" << giays[i].Size << "\t" << giays[i].Sex << "\t" << giays[i].Count << "\t" << giays[i].Price << endl;
    }
    cout << endl;
    int option = -1;
    cout << "0. Quay lai" << endl;
    cout << "1. Thoat chuong trinh" << endl << endl;
    while (option != 0 && option != 1)
    {
        cout << "Hay nhap lua chon: ";
        ClearInput();
        cin >> option;
    }

    return option;
}

void NhapGiay()
{
    cout << "\033[2J\033[1;1H";
    string code;
    cout << "Nhap ma giay: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, code);
    int index = -1;
    for (int i = 0; i < SoLuong; i++)
    {
        if (code == giays[i].ID)
        {
            index = i;
            break;
        }
    }

    int option = -1;
    if (index >= 0)
    {
        int sonhap = 0;
        option = 0;
        while (sonhap <= 0 && option == 0)
        {
            cout << "Nhap so luong giay " << code << " : ";
            cin >> sonhap;
            ClearInput();
            if (sonhap <= 0)
            {
                cout << "So luong nhap giay phai lon hon 0!" << endl << endl;

                option = -1;
                while (option != 0)
                {
                    cout << "0. Nhap lai so luong giay" << endl;
                    cout << "1. Thoat" << endl << endl;
                    cin >> option;
                    ClearInput();
                    if (option == 1)
                    {
                        return;
                    }
                    else if (option != 0)
                    {
                        cout << "Hay nhap lai lua chon!" << endl;
                    }
                }
            }
        }

        if (sonhap > 0)
        {
            giays[index].Count += sonhap;
            cout << "So luong giay " << giays[index].ID << " sau khi nhap la: " << giays[index].Count << endl << endl;
        }
    }
    else
    {
        cout << "Khong tim thay thong tin ma giay " << code << endl;
    }

    option = -1;
    while (option != 0 && option != 1)
    {
        cout << "0. Quay lai" << endl;
        cout << "1. Nhap giay khac" << endl << endl;
        cout << "Hay nhap lua chon: ";
        cin >> option;
        ClearInput();
    }

    if (option == 0)
    {
        return;
    }
    else if (option == 1)
    {
        NhapGiay();
    }
}

int TimGiay()
{

    int option = -1;
    cout << "0. Quay lai" << endl;
    cout << "1. Thoat chuong trinh" << endl << endl;
    while (option != 0 && option != 1)
    {
        cout << "Hay nhap lua chon: ";
        cin >> option;
    }

    return option;
}

int MuaGiay()
{

    int option = -1;
    cout << "0. Quay lai" << endl;
    cout << "1. Thoat chuong trinh" << endl << endl;
    while (option != 0 && option != 1)
    {
        cout << "Hay nhap lua chon: ";
        cin >> option;
    }

    return option;
}

int main()
{
    if (LoadData())
    {
        return 1;
    }

    int option = 0;
    while (true)
    {
        cout << "1. Xuat thong tin giay" << endl;
        cout << "2. Nhap giay" << endl;
        cout << "3. Tim giay" << endl;
        cout << "4. Mua giay" << endl;
        cout << "5. Thoat chuong trinh" << endl << endl;
        cout << "Hay nhap lua chon cua ban: ";

        cin >> option;
        ClearInput();
        switch (option)
        {
        case 1:
            if (XuatGiay())
            {
                return 0;
            }
            else
            {
                cout << "\033[2J\033[1;1H";
            }
            break;
        case 2:
            NhapGiay();
            cout << "\033[2J\033[1;1H";
            break;
        case 3:
            if (TimGiay())
            {
                return 0;
            }
            else
            {
                cout << "\033[2J\033[1;1H";
            }
            break;
        case 4:
            if (MuaGiay())
            {
                return 0;
            }
            else
            {
                cout << "\033[2J\033[1;1H";
            }
            break;
        case 5:
            return 0;
        default:
            cout << "\033[2J\033[1;1H";
            cout << "Lua chon khong hop le!" << endl;
            break;
        }

    }

    return 0;
}