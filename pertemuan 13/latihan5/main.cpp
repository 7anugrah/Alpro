#include <iostream>
#include <string>

struct Sepeda {
    std::string Merk;
    std::string Type;
    int Tahun;
    std::string Harga;
};

int main() {
    Sepeda sepeda;
    Sepeda* pointerSepeda;

    pointerSepeda = &sepeda;

    pointerSepeda->Merk = "Polygon";
    pointerSepeda->Type = "Sepeda Gunung";
    pointerSepeda->Tahun = 2013;
    pointerSepeda->Harga = "2.000.000";

    std::cout << "Merk: " << pointerSepeda->Merk << std::endl;
    std::cout << "Type: " << pointerSepeda->Type << std::endl;
    std::cout << "Tahun: " << pointerSepeda->Tahun << std::endl;
    std::cout << "Harga: " << pointerSepeda->Harga << std::endl;

    return 0;
}
