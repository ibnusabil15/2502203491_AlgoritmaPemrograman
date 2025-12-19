#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    string penulis;
    int tahun;
};

int main() {
    // Data buku (hardcoded)
    Buku buku[3] = {
        {"Pemrograman C++", "Budi Santoso", 2020},
        {"Struktur Data", "Andi Wijaya", 2019},
        {"Algoritma Dasar", "Siti Aminah", 2021}
    };

    string cari;
    bool ditemukan = false;

    cout << "Masukkan judul buku yang dicari: ";
    getline(cin, cari);

    // Proses pencarian
    for (int i = 0; i < 3; i++) {
        if (buku[i].judul == cari) {
            cout << "\nBuku ditemukan!" << endl;
            cout << "Judul   : " << buku[i].judul << endl;
            cout << "Penulis : " << buku[i].penulis << endl;
            cout << "Tahun   : " << buku[i].tahun << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "\nBuku tidak ditemukan." << endl;
    }

    return 0;
}

