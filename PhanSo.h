#pragma once
class PhanSo
{
private:
	int iTu, iMau;
	int UCLN(int a, int b);

public:

	void Nhap();
	void Xuat();
	void RutGon();

PhanSo Tong(PhanSo b);
PhanSo Hieu(PhanSo b);
PhanSo Tich(PhanSo b);
PhanSo Thuong(PhanSo b);

	int SoSanh(PhanSo b);
};