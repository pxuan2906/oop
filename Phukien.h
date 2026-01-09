#ifndef PHUKIEN_H
#define PHUKIEN_H

#include "SanPham.h"

class PhuKien : public SanPham {
private:
    string congDung;
    string loaiPhuKien;

public:
    PhuKien(string ma = "", string ten = "", double gia = 0,
        string chatLieu = "", string kichCo = "", string mauSac = "",
        int ton = 0, int ban = 0, string congDung = "", string loaiPK = "");

    string loai() const override;
    void nhap() override;
    void xuat() const override;
    string toFileString() const override;
};

#endif
