#include "cTamGIac.h"
int main() {
	cTamGiac tamGiac;
	tamGiac.nhap();
	cout << "Chu vi tam giac: " << tamGiac.ChuVi() << endl;
	cout << "Dien tich tam giac: " << tamGiac.DienTich() << endl;
	cout << "Loai tam giac: " << tamGiac.loai() << endl;
	float dx, dy;
	cout << "Nhap khoang dich chuyen (dx, dy): ";
	cin >> dx >> dy;
	tamGiac.TinhTien(dx, dy);
	cout << "Tam giac sau khi tinh tien: " << endl;
	tamGiac.xuat();
	cout << "quay 90 do: " << endl;
	tamGiac.Quay(90);
	tamGiac.xuat();
	float k;
	cout << "Nhap he so phong to: ";
	cin >> k;
	tamGiac.PhongTo(k);
	cout << "Tam giac sau khi phong to: " << endl;
	tamGiac.xuat();
	cout << "Nhap he so thu nho: ";
	cin >> k;
	tamGiac.ThuNho(k);
	cout << "Tam giac sau khi thu nho: " << endl;
	tamGiac.xuat();
	return 0;
}