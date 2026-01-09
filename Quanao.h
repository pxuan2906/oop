// ============================================================
// FILE: QuanAo.h
// Lớp QuanAo kế thừa từ SanPham
// ============================================================
#ifndef QUANAO_H
#define QUANAO_H

#include "SanPham.h"

class QuanAo : public SanPham {
private:
    string loaiVai;
    string kieuDang;

public:
    QuanAo(string ma = "", string ten = "", double gia = 0,
        string chatLieu = "", string kichCo = "", string mauSac = "",
        int ton = 0, int ban = 0, string loaiVai = "", string kieuDang = "");

    string loai() const override;
    void nhap() override;
    void xuat() const override;
    string toFileString() const override;
};

#endif
