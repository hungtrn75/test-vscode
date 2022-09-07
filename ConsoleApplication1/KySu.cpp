#include "KySu.h"

int sttKS;
KySu::KySu() {};

void KySu::Nhap() {
	sttKS++;
	CanBo::Nhap(CanBo::SoThuTu(sttKS, "KS"));
	cin.ignore();
	cout << "Nhap nganh dao tao: ", getline(cin, nganhdaotao);
	cout << "Nhap so nam kinh nghiem: ", cin >> namkinhnghiem;
}
void KySu::In() {
	CanBo::In();
	cout << nganhdaotao << " " << namkinhnghiem << "\n";
}

int KySu::Luong() {
	return namkinhnghiem * ngaycong * hesoluong;
}