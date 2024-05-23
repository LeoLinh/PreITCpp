#include <iostream>
#include <cstring>

using namespace std;

// Định nghĩa struct Product
struct Product {
    char name[50];
    char code[6];
    int quantity;
    float price;
};

// Hàm hiển thị thông tin sản phẩm
void displayProducts(Product products[], int n) {
    cout << "Ten hang hoa\tMa hang\tSo luong\tDon gia" << endl;
    for (int i = 0; i < n; ++i) {
        cout << products[i].name << "\t" << products[i].code << "\t" << products[i].quantity << "\t" << products[i].price << endl;
    }
}

// Hàm tìm sản phẩm theo mã hàng
void searchProduct(Product products[], int n, const char* code) {
    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (strcmp(products[i].code, code) == 0) {
            cout << "Ten hang hoa: " << products[i].name << endl;
            cout << "Ma hang: " << products[i].code << endl;
            cout << "So luong: " << products[i].quantity << endl;
            cout << "Don gia: " << products[i].price << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Khong tim thay." << endl;
    }
}

// Hàm mua hàng
void buyProduct(Product products[], int n, const char* code, int amount) {
    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (strcmp(products[i].code, code) == 0) {
            if (products[i].quantity >= amount) {
                products[i].quantity -= amount;
                cout << "Mua thanh cong! So luong con lai: " << products[i].quantity << endl;
            }
            else {
                cout << "Khong du hang." << endl;
            }
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Khong tim thay." << endl;
    }
}

int main() {
    // Khai báo mảng sản phẩm
    Product products[] = {
        {"Coca cola", "N-001", 20, 4800},
        {"Pepsi", "N-002", 25, 4600},
        {"Hambuger", "A-001", 15, 12000}
    };
    int n = sizeof(products) / sizeof(products[0]);

    char choice;
    do {
        int option;
        cout << "1. Xem thong tin cac san pham dang co." << endl;
        cout << "2. Tim san pham dua vao ma hang." << endl;
        cout << "3. Mua hang." << endl;
        cout << "Chon chuc nang: ";
        cin >> option;

        switch (option) {
        case 1:
            displayProducts(products, n);
            break;
        case 2: {
            char code[6];
            cout << "Nhap ma hang: ";
            cin >> code;
            searchProduct(products, n, code);
            break;
        }
        case 3: {
            char code[6];
            int amount;
            cout << "Nhap ma hang: ";
            cin >> code;
            cout << "Nhap so luong mua: ";
            cin >> amount;
            buyProduct(products, n, code, amount);
            break;
        }
        default:
            cout << "Lua chon khong hop le." << endl;
        }

        cout << "Ban co muon tiep tuc khong? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}
