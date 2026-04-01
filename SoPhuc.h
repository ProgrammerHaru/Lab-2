#pragma once
class SoPhuc
{
private:
	float iThuc;
	float iAo;
public:
	void Nhap();
	void Xuat();

	SoPhuc Tong(SoPhuc b);
	SoPhuc Hieu(SoPhuc b);
	SoPhuc Tich(SoPhuc b);
	SoPhuc Thuong(SoPhuc b);
};

