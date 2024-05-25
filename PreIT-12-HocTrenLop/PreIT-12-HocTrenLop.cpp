// PreIT-12-HocTrenLop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct SinhVien {
    string MSV;
    string Name;
    string Class;
    float Toan;
    float AnhVan;
    float Tin;
};

int main()
{
    SinhVien sinhviens[50];
    int count = 0;
    int index = 0;

    ifstream in_file;
    in_file.open("C:/N.Linh/Data.txt");

    if (!in_file.is_open()) {
        cout << "Khong the mo tap tin!" << endl;
        return 1;
    }

    while (in_file.eof() != 1 && index < 50)
    {
        in_file >> sinhviens[index].MSV;
        in_file >> sinhviens[index].Class;
        getline(in_file, sinhviens[index].Name);
        in_file >> sinhviens[index].Toan;
        in_file >> sinhviens[index].AnhVan;
        in_file >> sinhviens[index].Tin;
        in_file.ignore(2);
        index++;
    }

    count = index;
    in_file.close();

    for (int i = 0; i < count; i++)
    {
        cout << sinhviens[i].Name << " : " << sinhviens[i].Toan << " : " << sinhviens[i].AnhVan << " : " << sinhviens[i].Tin << " : " << endl;
    }

    int gioi = 0, kha = 0, TB = 0, yeu = 0, kem = 0;
    for (int i = 0; i < count; i++)
    {
        float tongTB = (sinhviens[i].Toan + sinhviens[i].AnhVan + sinhviens[i].Tin) / 3;

        if (tongTB >= 9)
        {
            // cout << "Sinh vien: " << sinhviens[i].Name << " La : " << gioi;
            gioi++;
        }
        else if (tongTB <= 8)
        {
            kha++;
        }
        else if (tongTB <= 5)
        {
            TB++;
        }
        else if (tongTB <= 3.5)
        {
            yeu++;
        }
        else
        {
            kem++;
        }
    }
    cout << "So luong sinh vien Gioi la: " << gioi << endl;
    cout << "So luong sinh vien Kha la: " << kha << endl;
    cout << "So luong sinh vien Trung binh la: " << TB << endl;
    cout << "So luong sinh vien Yeu la: " << yeu << endl;
    cout << "So luong sinh vien Kem la: " << kem << endl;
}

