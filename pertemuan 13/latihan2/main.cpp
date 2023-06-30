#include <iostream>
#include <string>

struct Sepeda {
    std::string merk;
    std::string type;
    int tahun;
    std::string harga;
};

int main() {
    Sepeda sepeda;
    sepeda.merk = "Polygon";
    sepeda.type = "Sepeda Gunung";
    sepeda.tahun = 2013;
    sepeda.harga = "2.000.000";

    std::cout << "Merk: " << sepeda.merk << std::endl;
    std::cout << "Type: " << sepeda.type << std::endl;
    std::cout << "Tahun: " << sepeda.tahun << std::endl;
    std::cout << "Harga: " << sepeda.harga << std::endl;

    return 0;
}
