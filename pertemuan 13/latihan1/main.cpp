#include <iostream>

const double pi = 3.14159;

struct PersegiPanjang {
    double panjang;
    double lebar;
};

struct Lingkaran {
    double jariJari;
};

struct Kerucut {
    double jariJari;
    double tinggi;
};

struct Bola {
    double jariJari;
};

double hitungLuasPersegiPanjang(const PersegiPanjang& persegiPanjang) {
    return persegiPanjang.panjang * persegiPanjang.lebar;
}

double hitungLuasLingkaran(const Lingkaran& lingkaran) {
    return pi * lingkaran.jariJari * lingkaran.jariJari;
}

double hitungVolumeKerucut(const Kerucut& kerucut) {
    return (1.0 / 3.0) * pi * kerucut.jariJari * kerucut.jariJari * kerucut.tinggi;
}

double hitungVolumeBola(const Bola& bola) {
    return (4.0 / 3.0) * pi * bola.jariJari * bola.jariJari * bola.jariJari;
}

int main() {
    PersegiPanjang persegiPanjang;
    persegiPanjang.panjang = 5.0;
    persegiPanjang.lebar = 3.0;

    Lingkaran lingkaran;
    lingkaran.jariJari = 2.5;

    Kerucut kerucut;
    kerucut.jariJari = 3.0;
    kerucut.tinggi = 4.0;

    Bola bola;
    bola.jariJari = 2.0;

    double luasPersegiPanjang = hitungLuasPersegiPanjang(persegiPanjang);
    double luasLingkaran = hitungLuasLingkaran(lingkaran);
    double volumeKerucut = hitungVolumeKerucut(kerucut);
    double volumeBola = hitungVolumeBola(bola);

    std::cout << "Luas Persegi Panjang: " << luasPersegiPanjang << std::endl;
    std::cout << "Luas Lingkaran: " << luasLingkaran << std::endl;
    std::cout << "Volume Kerucut: " << volumeKerucut << std::endl;
    std::cout << "Volume Bola: " << volumeBola << std::endl;

    return 0;
}
