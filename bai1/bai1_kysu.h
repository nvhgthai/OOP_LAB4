#ifndef KYSU_H
#define KYSU_H

#include "bai1_NhanVien.h"

class KySu : public NhanVien {
private:
    int soGioLamThem; // So gio lam them

public:
    // Ham dung
    KySu(string ma, string t, double luong, int gioLamThem)
        : NhanVien(ma, t, luong), soGioLamThem(gioLamThem) {}

    // Tinh tien thuong cua ky su
    double TienThuong() override {
        return soGioLamThem * 100000; // Moi gio lam them duoc tra 100.000
    }

    // Xu ly viec xuat thong tin cho ky su
    void Xuat() override {
        NhanVien::Xuat();
        cout << "So gio lam them: " << soGioLamThem << endl;
    }
};

#endif
