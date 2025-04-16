#include "Diem.h"
Diem::Diem() : x(0), y(0) {}
Diem::Diem(float x, float y) : x(x), y(y) {}
void Diem::nhap() {
	cout << "Nhap toa do diem (x, y): ";
	cin >> x >> y;
}
void Diem::xuat() {
	cout << "Diem(" << x << ", " << y << ")" << endl;
}
void Diem::tinhTien(float dx, float dy) {
	x += dx;
	y += dy;
}
void Diem::quay(int goc) {
	float rad = goc * M_PI / 180.0;
	float x1 = x * cos(rad) - y * sin(rad);
	float y1 = x * sin(rad) + y * cos(rad);
	x = x1;
	y = y1;
}
void Diem::phongTo(float k) {
	x *= k;
	y *= k;
}
void Diem::thuNho(float k) {
	x /= k;
	y /= k;
}
Diem::~Diem() {}