#include "NgayThangNam.h"
#include <iostream>
#include <iomanip>
using namespace std;

bool NgayThangNam::NamNhuan(int n) {
    return (n % 400 == 0) || (n % 4 == 0 && n % 100 != 0);
}//Kiểm tra năm nhuận

int NgayThangNam::SoNgayTrongThang(int t, int n) {
    switch (t) {
    case 4: case 6: case 9: case 11: return 30;
    case 2: return NamNhuan(n) ? 29 : 28;
    default: return 31;
    }
}//Sử dụng cấu trúc switch-case
 //tháng 2 sẽ gọi hàm NamNhuan(n) để trả về 29 ngày nếu nhuận, ngược lại là 28.

void NgayThangNam::Nhap() {
    cout << "Nhap ngay, thang, nam: ";
    cin >> iNgay >> iThang >> iNam;
}//Sử dụng đối tượng cin để nhận dữ liệu từ người dùng.

void NgayThangNam::Xuat() {
    cout << setfill('0') << setw(2) << iNgay << "/"
        << setw(2) << iThang << "/"
        << setw(4) << iNam << endl;
}//hàm setw(2) và setfill('0') để nếu ngày hoặc tháng là số có 1 chữ số thì tự động thêm số 0 ở trước

void NgayThangNam::NgayThangNamTiepTheo() {
    int nNgay = iNgay, nThang = iThang, nNam = iNam;
    nNgay++;
    if (nNgay > SoNgayTrongThang(nThang, nNam)) {
        nNgay = 1;
        nThang++;
        if (nThang > 12) {
            nThang = 1;
            nNam++;
        }//Cong them 1 ngay,neu nThang = 13 se quay ve 1 va tang 1 nam
    }
    cout << "Ngay tiep theo: " << setfill('0') << setw(2) << nNgay
        << "/" << setw(2) << nThang << "/" << nNam << endl;
}//Xuất ngày tiếp theo theo các hàm logic đã gọi