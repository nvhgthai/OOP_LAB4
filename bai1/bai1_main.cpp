#include <iostream>
#include "bai1_QuanLy.h"
#include "bai1_KySu.h"

using namespace std;

int main() {
    string ma, ten;
    double luong, tyLe;
    int gioLamThem;

    // Nhap thong tin cho Quan ly
    cout << "Nhap thong tin Quan Ly:" << endl;
    cout << "Ma so: ";
    cin >> ma;
    cout << "Ten: ";
    cin.ignore();
    getline(cin, ten);
    cout << "Luong co ban: ";
    cin >> luong;
    cout << "Ty le thuong: ";
    cin >> tyLe;

    // Tao doi tuong Quan ly
    QuanLy quanLy(ma, ten, luong, tyLe);

    // Nhap thong tin cho Ky su
    cout << "\nNhap thong tin Ky Su:" << endl;
    cout << "Ma so: ";
    cin >> ma;
    cout << "Ten: ";
    cin.ignore(); // Xoa bo dem sau khi nhap
    getline(cin, ten);
    cout << "Luong co ban: ";
    cin >> luong;
    cout << "So gio lam them: ";
    cin >> gioLamThem;

    // Tao doi tuong Ky su
    KySu kySu(ma, ten, luong, gioLamThem);

    // Hien thi thong tin cua Quan ly va Ky su
    cout << "\nThong tin Quan Ly:" << endl;
    quanLy.Xuat();

    cout << "\nThong tin Ky Su:" << endl;
    kySu.Xuat();

    return 0;
}
