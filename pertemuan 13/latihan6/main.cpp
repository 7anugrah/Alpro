#include <iostream>

enum GearKendaraan {
    Parkir,
    Maju,
    Mundur,
    Netral
};

int main() {
    GearKendaraan gearMobil = Maju;

    std::cout << "Gear mobil: ";
    switch (gearMobil) {
        case Parkir:
            std::cout << "Parkir";
            break;
        case Maju:
            std::cout << "Maju";
            break;
        case Mundur:
            std::cout << "Mundur";
            break;
        case Netral:
            std::cout << "Netral";
            break;
    }
    std::cout << std::endl;

    return 0;
}
