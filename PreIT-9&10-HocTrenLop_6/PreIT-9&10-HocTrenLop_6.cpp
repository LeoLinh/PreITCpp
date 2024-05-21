// PreIT-9&10-HocTrenLop_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

// bai 12

/*
* xem xét chuỗi email có chứa ký tự ‘@’ và ‘.’
* format email local_path@domain
*/
int EmailValidation(string email)
{
	int len = email.length();
	bool dk1 = false; // chứa ký tự ‘@’
	bool dk2 = false; // chứa ký tự ‘.’
	int domain_index = 0;
	for (int i = 0; i < len; i++)
	{
		if (email[i] == '@')
		{
			if (dk1)
			{
				// có 2 ký tự @ trong email
				return 0;
			}
			else
			{
				dk1 = true;
				domain_index = i + 1;
			}
		}
		else
		{
			if (!isalpha(email[i]) && !isdigit(email[i])
				&& email[i] != '.' && email[i] != '-' && email[i] != '_')
			{
				// ky tu trong email khong hop le
				return 0;
			}
			else
			{
				if (dk1)
				{
					// kiem tra phan domain
					if (email[i] == '.')
					{
						if (i > domain_index && i < len - 1)
						{
							dk2 = true;
						}
					}
				}
			}
		}

		if (dk1 && dk2)
		{
			return 1;
		}
	}

	return 0;
}

/*
* xem xét chuỗi password có chứa ít nhất 8 ký tự, trong đó có bao gồm ký tự chữ thường, ký tự chữ hoa và ký tự đặc biệt
*/
int PasswordValidation(string pass)
{
	int len = pass.length();

	if (len < 8)
	{
		return 0;
	}

	bool dk1 = false; // bao gồm ký tự chữ thường
	bool dk2 = false; // bao gồm ký tự chữ hoa
	bool dk3 = false; // bao gồm ký tự đặc biệt

	for (int i = 0; i < len; i++)
	{
		if (isupper(pass[i]))
		{
			dk1 = true;
		}
		else if (islower(pass[i]))
		{
			dk2 = true;
		}
		else
		{
			dk3 = true;
		}

		if (dk1 && dk2 && dk3)
		{
			return 1;
		}
	}

	return 0;
}

int ConfirmValidation(string pass, string confirm_pass)
{
	if (pass == confirm_pass)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	string email;
	string password;
	string confirm_password;

	cout << "Nhap email dang ky: ";
	getline(cin, email);
	while (EmailValidation(email) == 0)
	{
		cout << "Email khong hop le, hay dang ky lai email: ";
		getline(cin, email);
	}

	cout << "Email hop le: " << email << endl;
	cout << "Nhap mat khau dang ky: ";
	getline(cin, password);
	while (PasswordValidation(password) == 0)
	{
		cout << "Mat khau khong hop le, hay nhap lai mat khau: ";
		getline(cin, password);
	}

	cout << "Xac nhan mat khau dang ky: ";
	getline(cin, confirm_password);
	while (ConfirmValidation(password, confirm_password) == 0)
	{
		cout << "Xac nhan mat khau chua dung, hay nhap lai: ";
		getline(cin, confirm_password);
	}

	cout << "Register successfully" << endl;
}

