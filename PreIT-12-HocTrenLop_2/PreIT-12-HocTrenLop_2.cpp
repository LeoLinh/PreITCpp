//Bai 5
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

static int SoLuong = 0;
static Giay* giays;

int LoadData()
{
    int index;

    giays = new Giay[50];

    ifstream input;

    input.open("C:/N.Linh/Data.txt");

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
        cin >> option;
    }

    return option;
}

int NhapGiay()
{
    if (SoLuong < 50)
    {
        cout << "Nhap thong tin giay moi: " << endl;
        cout << "ID: ";
        cin >> giays[SoLuong].ID;
        cin >> giays[SoLuong].Size;
        
        cout << "Sex (0 - Nu, 1 - Nam, 2 - Unisex): ";
        cin >> giays[SoLuong].Sex;

        cout << "Count: ";
        cin >> giays[SoLuong].Count;

        cout << "Price: ";
        cin >> giays[SoLuong].Price;

        SoLuong++;
    }
    else
    {
        cout << "Da dat toi gioi han so luong giay!!!" << endl;
    }
    return 0;

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

int TimGiay()
{
    int gioiTinh;
    float size;

    cout << "Nhap gioi tinh (0 - Nu, 1 - Nam, 2 - Unisex): ";
    cin >> gioiTinh;

    cout << "Nhap size: ";
    cin >> size;

    cout << "Cac giay phu hop voi yeu cau la: " << endl;
    for (int i = 0; i < SoLuong; i++)
    {
        if (giays[i].Sex == gioiTinh && giays[i].Size == size)
        {
            cout << giays[i].ID << "\t" << giays[i].Size << "\t" << giays[i].Sex << "\t" <<
                giays[i].Count << "\t" << giays[i].Price << endl;
        }
    }
    cout << endl;

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
    string maGiay;
    int soLuongMua;

    cout << "Nhap ma giay muon mua: ";
    cin >> maGiay;
    cout << "Nhap so luong muon mua: ";
    cin >> soLuongMua;

    for (int i = 0; i < SoLuong; i++)
    {
        if (giays[i].ID == maGiay)
        {
            if (giays[i].Count >= soLuongMua)
            {
                float tongTien = giays[i].Price * soLuongMua;
                cout << "Tong tien phai tra la: " << tongTien << endl;
                giays[i].Count -= soLuongMua;
                return 0;
            }
            else
            {
                cout << "So luong giay khong du!" << endl;
                return 0;
            }
        }
    }
    cout << "Khong tim thay giay co ma nhu vay!!!" << endl;
    return 0;

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
            if (NhapGiay())
            {
                return 0;
            }
            else
            {
                cout << "\033[2J\033[1;1H";
            }
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