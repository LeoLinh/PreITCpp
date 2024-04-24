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
	/*int namNhuan;
	cout << "Hay nhap so nam o day : ";
	cin >> namNhuan;
	if (namNhuan % 400 == 0 || namNhuan % 4 == 0 && namNhuan % 100 != 0 )
	{
		cout << "=> La nam nhuan" << endl;
	}
	else
	{
		cout << "=> khong phai la nam nhuan" << endl;
	}*/

	// Bài 5.3 : Viết chương trình kiểm tra số nguyên N do người dùng nhập vào là
	// số chẵn hay số lẻ.

	/*int soNguyen;
	cout << "Nhap so nguyen : ";
	cin >> soNguyen;

	if (soNguyen % 2 == 0)
	{
		cout << "So chan" << endl;
	}
	else
	{
		cout << "So le" << endl;
	}*/

	// bài 5.4 : Viết chương trình cho phép người dùng nhập 2 số a và b. Kiểm tra
	// số a có chia hết cho số b hay không và xuất kết luận tương ứng.

	/*int a, b;
	cout << "Nhap gia tri a : ";
	cin >> a;
	cout << "Nhap gia tri b : ";
	cin >> b;

	if (a % b == 0)
	{
		cout << a << " Chia het cho " << b << endl;
	}
	else
	{
		cout << a << " Khong chia het cho " << b << endl;
	}*/


	 // Bài 5.5 : Viết chương trình cho phép người dùng nhập vào 1 ký tự bảng chữ
	 // cái.Xác định chữ cái nhập vào là viết hoa hay viết thường.

	/*char kyTu;
	cout << "Nhap ky tu : ";
	cin >> kyTu;

	if (kyTu >= 'A' && kyTu <= 'Z')
	{
		cout << "Day la chu viet hoa" << endl;
	}
	else if (kyTu >= 'a' && kyTu <= 'z')
	{
		cout << " Day la chu viet thuong" << endl;
	}*/

	// Bài 5.6 : Viết chương trình nhập vào 3 số. Kiểm tra và in ra số có giá trị lớn
	// nhất trong 3 số

	/*int a, b, c, max;

	cout << "Nhap gia tri a : ";
	cin >> a;
	cout << "Nhap gia tri b : ";
	cin >> b;
	cout << "Nhap gia tri c : ";
	cin >> c;
	max = a;

	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	cout << "So lon nhat la : " << max << endl;*/

	// Bài 5.7 : Viết chương trình nhập vào 3 điểm toán, văn, anh của 1 sinh viên .
	// Sau đó tính điểm trung bình và cho biết sinh viên đó xếp loại gì ? Biết rằng, xếp loại
	//dựa trên thang điểm sau :

	/*float toan, van, anh;
	float diemTrungBinh;

	cout << "Nhap diem Toan : ";
	cin >> toan;
	cout << "Nhap diem Van : ";
	cin >> van;
	cout << "Nhap diem Anh : ";
	cin >> anh;

	diemTrungBinh = (toan + van + anh) / 3;

	if (diemTrungBinh > 8.5)
	{
		cout << "Xep loai A" << endl;
	}
	else if ((diemTrungBinh >= 6.5) && (diemTrungBinh <= 8.49))
	{
		cout << "xep loai B";
	}*/
	
	// Bài 5.8 : Viết chương trình nhập vào điểm thi. Làm tròn điểm có phần lẻ và
	// xuất kết quả theo quy tắc sau :

	double toan;
	cout << "Nhap diem toan: ";
	cin >> toan;

	int lamtron = toan;
	double phanle = toan - lamtron;

	cout << "diem lam tron: " << lamtron << endl;
	cout << "diem le: " << phanle << endl;

	if (phanle < 0.25)
	{
		cout << "diem = " << lamtron;
	}
	else if (phanle <= 0.5)
	{
		cout << "diem = " << lamtron + 0.5;
	}
	else
	{
		cout << "diem = " << 1 + lamtron;
	}
	
	// Bài 5.9 : 


	return 0; 
}
