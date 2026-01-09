#ifndef KHO_H
#define KHO_H

#include "SanPham.h"
#include <vector>
using namespace std;

class Kho {
private:
    vector<SanPham*> danhSach;

    // Private helper method
    SanPham* taoSanPhamTuString(const string& line) const;

public:
    Kho();
    ~Kho();

    void docFile();
    void ghiFile() const;
    void themSanPham();
    bool xoaSanPham(const string& ma);
    SanPham* timSanPham(const string& ma) const;
    void hienThiSanPham() const;
    void thongKe() const;
};

#endif
