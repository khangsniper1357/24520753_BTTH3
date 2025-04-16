#pragma once
#include "Diem.h"
using namespace std;
class cTamGiac : Diem {
private:
	Diem A, B, C;
public:
	cTamGiac(); //hàm tạo
	cTamGiac(Diem A, Diem B, Diem C); //hàm tạo có tham số
	void nhap(); //nhập 3 điểm A, B, C
	void xuat();  //xuất 3 điểm A, B, C
	float khoangCach(Diem A, Diem B); //tính khoảng cách giữa 2 điểm
	float ChuVi(); //tính chu vi tam giác
	float DienTich(); //tính diện tích tam giác
	string loai(); //loại tam giác (cân, vuông, đều, thường)
	void TinhTien(float dx, float dy); //tịnh tiến tam giác
	void Quay(int goc); //quay tam giác quanh gốc tọa độ
	void PhongTo(float k); //phóng to tam giác
	void ThuNho(float k); //thu nhỏ tam giác
	~cTamGiac(); //hàm hủy
};