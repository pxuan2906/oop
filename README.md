#include "SanPham.h"

class GiayDep : public SanPham {
private:
    double chieuCaoDe;
    bool chongNuoc;

public:
    GiayDep(string ma = "", string ten = "", double gia = 0,
        string chatLieu = "", string kichCo = "", string mauSac = "",
        int ton = 0, int ban = 0, double caoDe = 0, bool chongNuoc = false);

    string loai() const override;
    void nhap() override;
    void xuat() const override;
    string toFileString() const override;
};
