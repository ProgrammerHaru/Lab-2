#include "SoPhuc.h"
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

void SoPhuc::Nhap() {
    cout << "Nhap phan thuc: "; cin >> iThuc;
    cout << "Nhap phan ao: "; cin >> iAo;
}//Nhập số 
void SoPhuc::Xuat() {
    if (iAo >= 0)
        cout << iThuc << " + " << iAo << "i";
    cout << endl;
}
SoPhuc SoPhuc::Tong(SoPhuc b) {
    SoPhuc res;
    res.iThuc = iThuc + b.iThuc;
    res.iAo = iAo + b.iAo;
    return res;
}

SoPhuc SoPhuc::Hieu(SoPhuc b) {
    SoPhuc res;
    res.iThuc = iThuc - b.iThuc;
    res.iAo = iAo - b.iAo;
    return res;
}

SoPhuc SoPhuc::Tich(SoPhuc b) {
    SoPhuc res;
    res.iThuc = iThuc * b.iThuc - iAo * b.iAo;
    res.iAo = iThuc * b.iAo + iAo * b.iThuc;
    return res;
}
SoPhuc SoPhuc::Thuong(SoPhuc b) {
    SoPhuc res;
    float mau = b.iThuc * b.iThuc + b.iAo * b.iAo;

    if (mau == 0) {
        cout << "Loi: khong the chia so phuc 0" << endl;
        res.iThuc = 0;
        res.iAo = 0;
        return res;
    }
    res.iThuc = (iThuc * b.iThuc + iAo * b.iAo) / mau;
    res.iAo = (iAo * b.iThuc - iThuc * b.iAo) / mau;
    return res;
}