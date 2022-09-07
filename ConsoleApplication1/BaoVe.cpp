#include "BaoVe.h"

int sttBV;

BaoVe::BaoVe() {};
void BaoVe::Nhap() {
	sttBV++;
	CanBo::Nhap(  CanBo::SoThuTu(sttBV, "BV"));
	cin.ignore();
	cout << "Nhap khu vuc bao ve: ", getline(cin, khuvuc);
}
void BaoVe::In() {
	CanBo::In();
	cout << khuvuc << "\n";
}

int BaoVe::Luong() {
	return ngaycong * hesoluong;
}