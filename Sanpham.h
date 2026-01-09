// ============================================================
// FILE: SanPham.h
// Lớp cơ sở trừu tượng cho tất cả sản phẩm
// ============================================================
#ifndef SANPHAM_H
#define SANPHAM_H

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class SanPham {
protected:
    string ma;
    string ten;
    double gia;
    string chatLieu;
    string kichCo;
    string mauSac;
    int soLuongTon;
    int soLuongDaBan;

public:
    SanPham(string ma = "", string ten = "", double gia = 0,
        string chatLieu = "", string kichCo = "", string mauSac = "",
        int ton = 0, int ban = 0);
    virtual ~SanPham();

    // Pure virtual functions - đa hình
    virtual string loai() const = 0;
    virtual void nhap() = 0;
    virtual void xuat() const = 0;
    virtual string toFileString() const = 0;

    // Getters
    string getMa() const;
    string getTen() const;
    double getGia() const;
    int getSoLuongTon() const;
    int getSoLuongDaBan() const;

    // Setters
    void setMa(string m);
    void setTen(string t);
    void setGia(double g);
    void setSoLuongTon(int sl);

    // Cập nhật số lượng
    bool giamSoLuong(int sl);
    void tangSoLuong(int sl);

    // Nạp chồng toán tử
    friend ostream& operator<<(ostream& os, const SanPham& sp);
};

#endif
