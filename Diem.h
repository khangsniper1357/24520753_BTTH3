#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;
#define M_PI 3.14159265358979323846
class Diem {
protected:
	float x, y;
	friend class cTamGiac; //cho phép lớp cTamGiac truy cập vào các thành viên riêng tư của lớp Diem
public:
	Diem(); //hàm tạo
	Diem(float x, float y); //hàm tạo có tham số
	void nhap(); //nhập tọa độ
	void xuat(); //xuất tọa độ
	void tinhTien(float dx, float dy); //tịnh tiến
	void quay(int goc); //quay quanh gốc tọa độ
	void phongTo(float k); //phóng to
	void thuNho(float k); //thu nhỏ
	~Diem(); //hàm hủy
};