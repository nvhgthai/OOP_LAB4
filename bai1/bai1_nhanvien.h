#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <string>
using namespace std;

class NhanVien {
protected:
    string maSo;      // Ma so nhan vien
    string ten;       // Ten nhan vien
    double luongCB;   // Luong co ban

public:
    // Ham dung mac dinh
    NhanVien(string ma, string t, double luong) : maSo(ma), ten(t), luongCB(luong) {}

    // Phuong thuc ao tinh tien thuong
    virtual double TienThuong() = 0;

    // Ham Xuat() de xuat thong tin nhan vien
    virtual void Xuat() {
        cout << "Ma so: " << maSo << endl;
        cout << "Ten: " << ten << endl;
        cout << "Luong co ban: " << luongCB << endl;
        cout << "Tien thuong: " << TienThuong() << endl;
    }
};

#endif
