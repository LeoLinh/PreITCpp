// bai 5.8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	// bài 5.1 : Nếu nước ở nhiệt độ 100oC trở lên thì nước sẽ sôi

	// Phát biểu 1 : “Nếu nước ở nhiệt độ 100oC trở lên thì nước sẽ sôi.”
	/*int nhietDoNuoc, tienTietKiem;
	cout << "Nhap nhiet do cua nuoc : ";
	cin >> nhietDoNuoc;

	if (nhietDoNuoc >= 100)
	{
		cout << " Neu nuoc o nhiet do 100oC tro len thi nuoc se soi : " << endl;
	}

	// Phát biểu 2 : “Nếu tiết kiệm đủ 40 triệu thì mua xe Airblade.”
	cout << "Nhap vao tien tiet kiem : ";
	cin >> tienTietKiem;

	if (tienTietKiem >= 40)
	{
		cout << " Neu tien tiet kiem du 40tr thi mua xe Airblade " << endl;;
	}*/
	
	// Phát biểu 3 : “Nếu hôm nay là thứ bảy hay chủ nhật hay ngày lễ thì không đến trường.”
	
	/*int thuBay, chuNhat, nghiLe;

	cout << "Hom nay co phai la Thu bay khong (1 : co, 0 : Khong) : ";
	cin >> thuBay;
	cout << "Hom nay co phai la Chu nhat khong (1 : co, 0 : Khong) : ";
	cin >> chuNhat;
	cout << "Hom nay co phai la Nghi le khong (1 : co, 0 : Khong) : ";
	cin >> nghiLe;

	if (thuBay == 1 || chuNhat == 1 || nghiLe == 1)
	{
		cout << "Khong den truong" << endl;
	}
	else
	{
		cout << "Den truong" << endl;;
	}*/

	// Phát biểu 4 : “Nếu nghỉ học từ đủ 4 buổi hoặc nghỉ học dưới 2 buổi nhưng đi
	// trễ trên 4 buổi thì cấm thi.”

	/*int soBuoiNghiHoc, soBuoiDiTre;
	cout << "Nhap so buoi nghi hoc : ";
	cin >> soBuoiNghiHoc;
	cout << "Nhap so buoi di tre : ";
	cin >> soBuoiDiTre;

	if (soBuoiNghiHoc >= 4 || soBuoiNghiHoc <= 2 && soBuoiDiTre >= 4)
	{
		cout << "Cam thi" << endl;
	}
	else
	{
		cout << "Duoc thi" << endl;
	}*/

	// Bài 5.2 : Viết chương trình kiểm tra năm nhập vào có phải năm nhuận hay không.
	int namNhuan;
	cout << "Hay nhap so nam o day : ";
	cin >> namNhuan;
	if (namNhuan % 400 == 0 || namNhuan % 4 == 0 && namNhuan % 100 != 0 )
	{
		cout << "=> La nam nhuan" << endl;
	}
	else
	{
		cout << "=> khong phai la nam nhuan" << endl;;
	}








	return 0;
}
