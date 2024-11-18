#ifndef QUANLY_H
#define QUANLY_H

#include "bai1_NhanVien.h"

class QuanLy : public NhanVien {
private:
    double tyLeThuong; // Ty le thuong

public:
    // Ham dung
    QuanLy(string ma, string t, double luong, double tyLe)
        : NhanVien(ma, t, luong), tyLeThuong(tyLe) {}

    // Tinh tien thuong cua quan ly
    double TienThuong() override {
        return luongCB * tyLeThuong / 100;
    }

    // Xu ly viec xuat thong tin cho quan ly
    void Xuat() override {
        NhanVien::Xuat();
        cout << "Ty le thuong: " << tyLeThuong << "%" << endl;
    }
};

#endif // QUANLY_H
