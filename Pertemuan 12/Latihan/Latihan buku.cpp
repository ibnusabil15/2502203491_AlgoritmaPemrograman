#include <iostream>
using namespace std;

// Struct buku
struct Buku {
    string judul;
    int tahunTerbit;
    string penulis;
};

int main() {
    Buku buku1, buku2;

    // Input buku pertama
    cout << "=== Input Data Buku Pertama ===" << endl;
    cout << "Judul Buku   : ";
    cin >> buku1.judul;

    cout << "Tahun Terbit : ";
    cin >> buku1.tahunTerbit;

    cout << "Penulis      : ";
    cin >> buku1.penulis;

    cout << endl;

    // Input buku kedua
    cout << "=== Input Data Buku Kedua ===" << endl;
    cout << "Judul Buku   : ";
    cin >> buku2.judul;

    cout << "Tahun Terbit : ";
    cin >> buku2.tahunTerbit;

    cout << "Penulis      : ";
    cin >> buku2.penulis;

    cout << endl;

    // Output data buku
    cout << "=== Data Buku ===" << endl;

    cout << "\nBuku Pertama" << endl;
    cout << "Judul Buku   : " << buku1.judul << endl;
    cout << "Tahun Terbit : " << buku1.tahunTerbit << endl;
    cout << "Penulis      : " << buku1.penulis << endl;

    cout << "\nBuku Kedua" << endl;
    cout << "Judul Buku   : " << buku2.judul << endl;
    cout << "Tahun Terbit : " << buku2.tahunTerbit << endl;
    cout << "Penulis      : " << buku2.penulis << endl;

    return 0;
}

