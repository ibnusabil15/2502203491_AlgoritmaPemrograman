#include <iostream>
using namespace std;

float konversi(int pilihan, float suhu) {
    switch (pilihan) {
        case 1:  return (suhu - 32) * 5/9;              // F ke C
        case 2:  return suhu - 273.15;                  // K ke C
        case 3:  return suhu * 5/4;                     // R ke C
        case 4:  return (suhu * 9/5) + 32;              // C ke F
        case 5:  return ((suhu - 273.15) * 9/5) + 32;   // K ke F
        case 6:  return (suhu * 9/4) + 32;              // R ke F
        case 7:  return suhu * 4/5;                     // C ke R
        case 8:  return (suhu - 32) * 4/9;              // F ke R
        case 9:  return (suhu - 273.15) * 4/5;          // K ke R
        case 10: return suhu + 273.15;                  // C ke K
        case 11: return ((suhu - 32) * 5/9) + 273.15;   // F ke K
        case 12: return (suhu * 5/4) + 273.15;          // R ke K
        default: return 0;
    }
}

int main() {
    int pilihan;
    float suhu;

    cout << "Pilih konversi suhu:\n";
    cout << "1. Farenheit ke Celcius\n";
    cout << "2. Kelvin ke Celcius\n";
    cout << "3. Reamur ke Celcius\n";
    cout << "4. Celcius ke Farenheit\n";
    cout << "5. Kelvin ke Farenheit\n";
    cout << "6. Reamur ke Farenheit\n";
    cout << "7. Celcius ke Reamur\n";
    cout << "8. Farenheit ke Reamur\n";
    cout << "9. Kelvin ke Reamur\n";
    cout << "10. Celcius ke Kelvin\n";
    cout << "11. Farenheit ke Kelvin\n";
    cout << "12. Reamur ke Kelvin\n";

    cout << "Masukkan pilihan (1-12): ";
    cin >> pilihan;

    // Menentukan teks input sesuai pilihan
    if (pilihan == 1)  cout << "Masukkan suhu dalam Farenheit: ";
    if (pilihan == 2)  cout << "Masukkan suhu dalam Kelvin: ";
    if (pilihan == 3)  cout << "Masukkan suhu dalam Reamur: ";
    if (pilihan == 4)  cout << "Masukkan suhu dalam Celcius: ";
    if (pilihan == 5)  cout << "Masukkan suhu dalam Kelvin: ";
    if (pilihan == 6)  cout << "Masukkan suhu dalam Reamur: ";
    if (pilihan == 7)  cout << "Masukkan suhu dalam Celcius: ";
    if (pilihan == 8)  cout << "Masukkan suhu dalam Farenheit: ";
    if (pilihan == 9)  cout << "Masukkan suhu dalam Kelvin: ";
    if (pilihan == 10) cout << "Masukkan suhu dalam Celcius: ";
    if (pilihan == 11) cout << "Masukkan suhu dalam Farenheit: ";
    if (pilihan == 12) cout << "Masukkan suhu dalam Reamur: ";

    cin >> suhu;

    float hasil = konversi(pilihan, suhu);

    cout << "Hasil konversi: " << hasil << endl;

    return 0;
}

