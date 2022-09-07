#include "CanBo.h"
CanBo::CanBo() {};
string CanBo::SoThuTu(int stt, string type) {
	string temp = to_string(stt);
	if (temp.length() >= 3) {
		return temp;
	}
	else {
		ostringstream prefix;
		for (int i = 0; i < 3 - temp.length(); i++)
			prefix << "0";
	
		return  type + prefix.str() + temp;
	}
}

void CanBo::Nhap(string macanbo) {
	cin.ignore();
	cout << "Nhap ten: ", getline(cin, ten);
	cout << "Nhap tuoi: ", cin >> tuoi;
	cout << "Nhap gioi tinh: ", cin >> gioitinh;
	cout << "Nhap dia chi: ", cin >> diachi;
	cout << "Nhap so dien thoai: ", cin >> sodt;
	cin.ignore();
	cout << "Nhap que quan: ", getline(cin, quequan);
	this->macanbo = macanbo;
	cout << "Nhap he so luong: ", cin >> hesoluong;
	cout << "Nhap so ngay cong: ", cin >> ngaycong;
}
void CanBo::In() {
	cout << "[" << macanbo << "]-" << ten << "-" << tuoi << "-" << gioitinh << "-";
	cout << diachi << "-" << sodt << "-";
	cout << quequan << "-";
	cout << hesoluong << "-" << ngaycong << "-";
}
string CanBo::TenCanBo() {
	return ten;
}