#pragma once
#include<iostream>
#include <sstream>
#include<string>
using namespace std;

class CanBo {
protected:
	string ten, gioitinh, diachi, sodt, quequan, macanbo;
	int tuoi, hesoluong, ngaycong;

public:
	static string SoThuTu(int,string);
	CanBo();
	void Nhap(string);
	void In();
	string TenCanBo();
	virtual int Luong() = 0;
};