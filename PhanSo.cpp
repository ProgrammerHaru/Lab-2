#include "PhanSo.h"
#include <cmath>
#include <iostream>
using namespace std;
int PhanSo::UCLN(int a, int b) {
	a = abs(a); b = abs(b);
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}//Tìm UCLN
void PhanSo::Nhap() {
	cout << "Nhap tu so: "; cin >> iTu;
	do {
		cout << "Nhap mau so (khac 0): "; cin >> iMau;
	} while (iMau == 0);
}//Nhập mẫu cho đến khi khác 0
void PhanSo::Xuat() {
	if (iMau < 0) { iTu = -iTu; iMau = -iMau; }
	if (iMau = 1) cout << iTu;
	else cout << iTu << "/" << iMau;
	cout << endl;
}//Xuất kết quả sau khi chỉnh dấu trừ nếu có
void PhanSo::RutGon() {
	int ucln = UCLN(iTu, iMau);
	iTu /= ucln;
	iMau /= ucln;
}//Rút gọn phân số 
PhanSo PhanSo::Tong(PhanSo b) {
	PhanSo res;
	res.iTu = iTu * b.iMau + b.iTu * iMau;
	res.iMau = iMau * b.iMau;
	res.RutGon();
	return res;
}
PhanSo PhanSo::Hieu(PhanSo b) {
	PhanSo res;
	res.iTu = iTu * b.iMau - b.iTu * iMau;
	res.iMau = iMau * b.iMau;
	res.RutGon();
	return res;
}

PhanSo PhanSo::Tich(PhanSo b) {
	PhanSo res;
	res.iTu = iTu * b.iTu;
	res.iMau = iMau * b.iMau;
	res.RutGon();
	return res;
}

PhanSo PhanSo::Thuong(PhanSo b) {
	PhanSo res;
	res.iTu = iTu * b.iMau;
	res.iMau = iMau * b.iTu;
	res.RutGon();
	return res;
}
int PhanSo::SoSanh(PhanSo b) {
	long long v1 = (long long)iTu * b.iMau;
	long long v2 = (long long)b.iTu * iMau;
	if (v1 > v2) return 1;
	if (v2 > v1) return -1;
	return 0;
}// các yêu cầu bài toán