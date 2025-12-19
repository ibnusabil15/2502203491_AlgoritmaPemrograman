#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk menghitung jumlah karakter
int hitungKarakter(string kalimat, char cari) {
    int jumlah = 0;
    for(int i = 0; i < kalimat.length(); i++) {
        if(kalimat[i] == cari) {
            jumlah++;
        }
    }
    return jumlah;
}

int main() {
    string kalimat;
    char karakter;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    cout << "Masukkan karakter yang ingin dihitung: ";
    cin >> karakter;

    int hasil = hitungKarakter(kalimat, karakter);

    cout << "Jumlah karakter '" << karakter << "' dalam kalimat: " << hasil << endl;

    return 0;
}

