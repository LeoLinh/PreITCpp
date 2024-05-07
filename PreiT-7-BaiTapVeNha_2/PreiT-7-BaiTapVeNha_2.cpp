// PreiT-7-BaiTapVeNha_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    float array[] = { 36.5, 98, 27.8, 63, 78.1,
        48.3, 69, 72, 41.5, 32,  29.5, 120, 52.3, 23, 50.2, 56, 72.5, 70, 68.4, 65 };

    // Yêu cầu 1 : in ứng viên thừa thiếu cân
    cout << "Yeu cau 1 : " << endl << "Nhung ung vien Thieu Can : ";
    for (int i = 0; i < array[i]; i++)
    {
        if (array[i] < 38)
        {
            cout << array[i] << "; " << endl;
        }
        if (array[i] > 75)
        {
            cout << "Nhung ung vien Thua Can : " ;
            cout << array[i] << "; " ;
        }
    }
    cout << endl;
    
    // Yêu cầu 2 : Tìm ứng viên có kg thấp nhất và cao nhất
    cout << "Yeu cau 2 : " << endl;
    float min = array[0];
    float max = array[0];

    for (int i = 1; i < 20; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
        else if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << "Nhung ung vien co kg thap nhat : " << min << endl;
    cout << "Nhung ung vien co kg cao nhat : " << max << endl;
    cout << endl;
    // Yêu cầu 3 : Đếm số lượng ứng viên đạt tiêu chuẩn.
    cout << "Yeu cau 3 :" << endl;
    for (int i = 0; i < 20; i++)
    {
        if (array[i] >= 38 && array[i] <= 75)
        {
            
            cout << "Nhung ung vien dat tieu chuan : " << array[i] << endl;
        }
    }
    cout << endl;

    // Yêu cầu 4 : Chưa làm được
    


    return 0;
}


