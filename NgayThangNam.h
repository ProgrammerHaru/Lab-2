#pragma once
class NgayThangNam
{
private:
	int iNgay, iThang, iNam;
	bool NamNhuan(int n);
	int SoNgayTrongThang(int t, int n);
public:
	void Nhap();
	void Xuat();
	void NgayThangNamTiepTheo();
};//Khai báo các lớp để sử dụng