#include "GioPhutGiay.h"
#include <iostream>

int main() {
    GioPhutGiay t;
    std::cout << "Nhap thoi gian\n";
    t.Nhap();

    std::cout << "Thoi gian hien tai: ";
    t.Xuat();

    t.TinhCongThemMotGiay();
    std::cout << "Thoi gian sau khi cong 1 giay: ";
    t.Xuat();

    return 0;
}