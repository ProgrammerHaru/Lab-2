#include "GioPhutGiay.h"
using namespace std;
void GioPhutGiay::Nhap() {
	do {
		cout << "Nhap gio: "; cin >> iGio;
		cout << "Nhap phut: "; cin >> iPhut;
		cout << "Nhap giay: "; cin >> iGiay;
		if (iGio < 0 || iGio > 23 || iPhut < 0 || iPhut > 59 || iGiay < 0 || iGiay > 59) {
			cout << "Du lieu nhap vao khong hop le, vui long nhap laij \n";
		}
	} while (iGio < 0 || iGio > 23 || iPhut < 0 || iPhut > 59 || iGiay < 0 || iGiay > 59);
}
void GioPhutGiay::Xuat() {
	cout << setfill('0') << setw(2) << iGio << ":"
		<< setw(2) << iPhut << ":" << setw(2) << iGiay << endl;
}
void GioPhutGiay::TinhCongThemMotGiay() {
	iGiay++;
	if (iGiay >= 60) {
		iGiay = 0;
		iPhut++;
		if (iPhut >= 60) {
			iPhut = 0;
			iGio++;
			if (iGio >= 24) {
				iGio = 0;
			}
		}
	}
}