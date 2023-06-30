#include <iostream>
#include <string>

struct Mahasiswa {
    std::string nim;
    std::string nama;
    std::string jurusan;
    int tahunLulus;
};

int main() {
    const int jumlahMahasiswaStatis = 4;
    Mahasiswa mahasiswaStatis[jumlahMahasiswaStatis] = {
        {"A11.2020.01234", "Andi", "Broadcasting", 2023},
        {"A11.2010.01234", "Budi", "Sistem Informasi", 2013},
        {"A11.2000.01234", "Ali", "DKV", 2003},
        {"A11.1990.01234", "Siti", "Kesehatan", 1993}
    };

    std::cout << "Array Statis:" << std::endl;
    for (int i = 0; i < jumlahMahasiswaStatis; i++) {
        std::cout << "Mahasiswa " << i+1 << ":" << std::endl;
        std::cout << "NIM: " << mahasiswaStatis[i].nim << std::endl;
        std::cout << "Nama: " << mahasiswaStatis[i].nama << std::endl;
        std::cout << "Jurusan: " << mahasiswaStatis[i].jurusan << std::endl;
        std::cout << "Tahun Lulus: " << mahasiswaStatis[i].tahunLulus << std::endl;
        std::cout << std::endl;
    }

    int jumlahMahasiswaDinamis;
    std::cout << "Masukkan jumlah mahasiswa: ";
    std::cin >> jumlahMahasiswaDinamis;

    Mahasiswa* mahasiswaDinamis = new Mahasiswa[jumlahMahasiswaDinamis];

    for (int i = 0; i < jumlahMahasiswaDinamis; i++) {
        std::cout << "Masukkan data mahasiswa " << i+1 << ":" << std::endl;
        std::cout << "NIM: ";
        std::cin >> mahasiswaDinamis[i].nim;
        std::cout << "Nama: ";
        std::cin.ignore(); // Menghapus karakter newline sebelum membaca string
        std::getline(std::cin, mahasiswaDinamis[i].nama);
        std::cout << "Jurusan: ";
        std::getline(std::cin, mahasiswaDinamis[i].jurusan);
        std::cout << "Tahun Lulus: ";
        std::cin >> mahasiswaDinamis[i].tahunLulus;
        std::cout << std::endl;
    }

    std::cout << "Array Dinamis:" << std::endl;
    for (int i = 0; i < jumlahMahasiswaDinamis; i++) {
        std::cout << "Mahasiswa " << i+1 << ":" << std::endl;
        std::cout << "NIM: " << mahasiswaDinamis[i].nim << std::endl;
        std::cout << "Nama: " << mahasiswaDinamis[i].nama << std::endl;
        std::cout << "Jurusan: " << mahasiswaDinamis[i].jurusan << std::endl;
        std::cout << "Tahun Lulus: " << mahasiswaDinamis[i].tahunLulus << std::endl;
        std::cout << std::endl;
    }

    delete[] mahasiswaDinamis;

    return 0;
}


