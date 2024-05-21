// PreIT-9&10-BaiTapVeNha_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Hàm kiểm tra tính hợp lệ của email
bool EmailValidation(const string& email) {
    return email.find('@') != string::npos && email.find('.') != string::npos;
}

// Hàm kiểm tra tính hợp lệ của mật khẩu
bool PasswordValidation(const string& password) {
    if (password.length() < 8) {
        return false;
    }

    bool hasLower = false, hasUpper = false, hasSpecial = false;
    for (char ch : password) {
        if (islower(ch)) hasLower = true;
        else if (isupper(ch)) hasUpper = true;
        else if (ispunct(ch)) hasSpecial = true;
    }

    return hasLower && hasUpper && hasSpecial;
}

// Hàm kiểm tra tính hợp lệ của mật khẩu xác nhận
bool ConfirmValidation(const string& password, const string& confirmPassword) {
    return password == confirmPassword;
}

int main() {
    string email, password, confirmPassword;

    // Yêu cầu người dùng nhập Email và kiểm tra tính hợp lệ
    do {
        cout << "Nhap Email: ";
        getline(cin, email);
        if (!EmailValidation(email)) {
            cout << "Email khong hop le. Vui long nhap lai.\n";
        }
    } while (!EmailValidation(email));

    // Yêu cầu người dùng nhập Password và kiểm tra tính hợp lệ
    do {
        cout << "Nhap mat khau: ";
        getline(cin, password);
        if (!PasswordValidation(password)) {
            cout << "Mat khau khong hop le. Mat khau phai chua it nhat 8 ky tu, bao gom chu thuong, chu hoa va ky tu dac biet. Vui long nhap lai.\n";
        }
    } while (!PasswordValidation(password));

    // Yêu cầu người dùng nhập ConfirmPassword và kiểm tra tính hợp lệ
    do {
        cout << "Xac nhan mat khau: ";
        getline(cin, confirmPassword);
        if (!ConfirmValidation(password, confirmPassword)) {
            cout << "Mat khau xac nhan khong khop. Vui long nhap lai.\n";
        }
    } while (!ConfirmValidation(password, confirmPassword));

    // Xuất thông báo đăng ký thành công
    cout << "Register successfully\n";

    return 0;
}

