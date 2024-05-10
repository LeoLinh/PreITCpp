#include <iostream>
using namespace std;

const int MAX_SIZE = 10;
int SoLuong = 9;
int Mang[MAX_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

void AddValue(int value, int pos) {
    if (SoLuong < MAX_SIZE && pos >= 0 && pos <= SoLuong) {
        for (int i = SoLuong; i > pos; i--) 
        {
            Mang[i] = Mang[i - 1];
        }
        Mang[pos] = value;
        SoLuong++;
    }
    else {
        cout << "Khong the them gia tri vao vi tri chi dinh." << endl;
    }
}

void RemoveValue(int pos) {
    if (pos >= 0 && pos < SoLuong) {
        for (int i = pos; i < SoLuong - 1; i++) {
            Mang[i] = Mang[i + 1];
        }
        SoLuong--;
    }
    else {
        cout << "Vi tri khong hop le." << endl;
    }
}

void OutputArray() {
    cout << "Mang hien tai: ";
    for (int i = 0; i < SoLuong; i++) {
        cout << Mang[i] << " ";
    }
    cout << endl;
}

int main() {
    int giaTri, viTri;
    cout << "Nhap gia tri can them: ";
    cin >> giaTri;
    cout << "Nhap vi tri can them: ";
    cin >> viTri;

    AddValue(giaTri, viTri);
    OutputArray();

    cout << "Nhap vi tri phan tu can xoa (vi tri dau tien la 0): ";
    cin >> viTri;
    RemoveValue(viTri);
    OutputArray();

    return 0;
}