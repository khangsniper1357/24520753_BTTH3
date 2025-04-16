#include "cTamGIac.h"
float cTamGiac::khoangCach(Diem A, Diem B) {
	return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}
cTamGiac::cTamGiac() : A(), B(), C() {}
cTamGiac::cTamGiac(Diem A, Diem B, Diem C) : A(A), B(B), C(C) {}
void cTamGiac::nhap() {
	cout << "Nhap toa do diem A: ";
	A.nhap();
	cout << "Nhap toa do diem B: ";
	B.nhap();
	cout << "Nhap toa do diem C: ";
	C.nhap();
}
void cTamGiac::xuat() {
	cout << "Diem A: ";
	A.xuat();
	cout << "Diem B: ";
	B.xuat();
	cout << "Diem C: ";
	C.xuat();
}
float cTamGiac::ChuVi() {
	return khoangCach(A, B) + khoangCach(B, C) + khoangCach(C, A);
}
float cTamGiac::DienTich() {
	float p = ChuVi() / 2;
	return sqrt(p * (p - khoangCach(A, B)) * (p - khoangCach(B, C)) * (p - khoangCach(C, A)));
}
string cTamGiac::loai() {
	float ab = khoangCach(A, B);
	float bc = khoangCach(B, C);
	float ca = khoangCach(C, A);
	if (ab == bc && bc == ca) return "Tam giac deu";
	if (ab == bc || bc == ca || ca == ab) return "Tam giac can";
	if (pow(ab, 2) + pow(bc, 2) == pow(ca, 2) || pow(bc, 2) + pow(ca, 2) == pow(ab, 2) || pow(ca, 2) + pow(ab, 2) == pow(bc, 2)) return "Tam giac vuong";
	return "Tam giac thuong";
}
void cTamGiac::TinhTien(float dx, float dy) {
	A.tinhTien(dx, dy);
	B.tinhTien(dx, dy);
	C.tinhTien(dx, dy);
}
void cTamGiac::Quay(int goc) {
	A.quay(goc);
	B.quay(goc);
	C.quay(goc);
}
void cTamGiac::PhongTo(float k) {
	A.phongTo(k);
	B.phongTo(k);
	C.phongTo(k);
}
void cTamGiac::ThuNho(float k) {
	A.thuNho(k);
	B.thuNho(k);
	C.thuNho(k);
}
cTamGiac::~cTamGiac() {}