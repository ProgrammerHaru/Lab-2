#include "PhanSo.h"
#include <iostream>

int main() {
    PhanSo ps1, ps2;
    std::cout << "Nhap phan so 1:\n"; ps1.Nhap();
    std::cout << "Nhap phan so 2:\n"; ps2.Nhap();

    std::cout << "Phan so 1 sau rut gon: "; ps1.RutGon(); ps1.Xuat();

    PhanSo tich = ps1.Tich(ps2);
    std::cout << "Tich hai phan so: "; tich.Xuat();

    int ss = ps1.SoSanh(ps2);
    if (ss == 1) std::cout << "Phan so 1 lon hon phan so 2\n";
    else if (ss == -1) std::cout << "Phan so 1 nho hon phan so 2\n";
    else std::cout << "Hai phan so bang nhau\n";

    return 0;
}