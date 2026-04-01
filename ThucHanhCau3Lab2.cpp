#include "SoPhuc.h"
#include <iostream>

int main() {
    SoPhuc sp1, sp2;
    std::cout << "Nhap so phuc 1:\n"; sp1.Nhap();
    std::cout << "Nhap so phuc 2:\n"; sp2.Nhap();

    std::cout << "So phuc 1: "; sp1.Xuat();
    std::cout << "So phuc 2: "; sp2.Xuat();

    SoPhuc tong = sp1.Tong(sp2);
    std::cout << "Tong: "; tong.Xuat();

    SoPhuc tich = sp1.Tich(sp2);
    std::cout << "Tich: "; tich.Xuat();

    return 0;
}