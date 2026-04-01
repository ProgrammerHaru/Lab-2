#include "NgayThangNam.h"
#include <iostream>
int main() {
    NgayThangNam dt;
    dt.Nhap();
    std::cout << "Ngay da nhap: ";
    dt.Xuat();
    dt.NgayThangNamTiepTheo();
    return 0;
}//Chạy hàm Nhap() để sử dụng các lớp rồi xuất ra màn hình kết quả