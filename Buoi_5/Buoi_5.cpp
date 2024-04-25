#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    // Chữa bài đề 5 : 

    // Bài 5.9 : 
    /*string nhan_vien;
    int TNCT;
    const int luong_can_ban = 650000;
    double luong, he_so;

    cout << "Nhap ten nhan vien: ";
    getline(cin, nhan_vien);
    cout << " Moi ban nhap tham nien cong tac: ";
    cin >> TNCT;

    if (TNCT < 0)
    {
        cout << "So tham nien cong tac khong hop le" << endl;
    }
    else
    {
        he_so = (TNCT < 12) ? 1.92 : (TNCT < 36) ? 2.34 : (TNCT < 60) ? 3.0 : 4.5;
        cout << "Luong cua ban la: " << fixed << setprecision(0) << luong_can_ban * he_so << " VND" << endl;
    }*/

    // Bài 5.10 : 

    /*float sokm;
    cout << "nhap so km da di : ";
    cin >> sokm;

    if (sokm < 0)
    {
        cout << "Gia tri nhap khong hop le" << endl;
    }
    else
    {
        float tong = 15000;

        if (sokm > 1)
        {
            tong += (sokm <= 5 ? sokm - 1 : 4) * 13500;
        }

        if (sokm > 5)
        {
            tong += (sokm <= 20 ? sokm - 5 : 15) * 11000;
        }

        if (sokm > 20)
        {
            tong *= 0.9;
        }

        cout << "ban da di " << sokm << " km. tong so tien ban phai tra la: " << tong << "dong\n";
    }*/

    // Bài 5.10 : 

    /*int a, b, c;
    cout << "Nhap vao 3 so nguyen duong: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a + b > c || a + c > b || b + c > a)
    {
        if (a == b && a == c && b == c)
        {
            cout << "tam giac deu " << endl;
        }
        else
        {
            bool tam_giac_can = (a == b || b == c || a == c);
            bool tam_giac_vuong = (a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a);

            if (tam_giac_can && tam_giac_vuong)
            {
                cout << "tam giac vuong can" << endl;
            }
            else if (tam_giac_can)
            {
                cout << "tam giac can" << endl;
            }
            else if (tam_giac_vuong)
            {
                cout << "tam giac vuong" << endl;
            }
            else
            {
                cout << "tam giac thuong" << endl;
            }
        }
    }
    else
    {
        cout << "Khong the tao thanh Tam giac" << endl;
    }*/

    // Bài tập 6.3 : 

    int N;
    cout << "Nhap so N : ";
    cin >> N;

    int s0 = 0;
    for (int i = 1; i <= N; i++)
    {
        //s0 = 0 + i
        s0 += i;
        cout << "s0 = " << i << " | i + " << s0 <<  endl;
    }

    int s1 = 0;
    for (int i = 1; i <= N; i += 2)
    {
        s1 += i;
        cout << "Phep tinh 1 : i = " << i << " | s1 = " << s1 << endl;
    }

    int s2 = 0;
    for (int i = 2; i <= N; i += 2)
    {
        s2 += i;
        cout << "Phep tinh 2 : i = " << i << " | s2 = " << s2 << endl;
    }

    int s3 = 0;
    for (int i = 1; i <= N; i++)
    {
        s3 += i * i;
        cout << "Phep tinh 3 : " << i << " | i : " << s3 << endl;
    }

    int s4 = 0;
    s4 = s1 - s2;
    cout << "Phep tinh 4 : " << s4 << endl;

    // Bài 6.3 : 

    

    return 0;
}