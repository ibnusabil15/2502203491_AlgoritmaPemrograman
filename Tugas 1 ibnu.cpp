// Kalkulator Sederhana Ibnu Sabil
#include <iostream>
using namespace std;


int main()
{
	// Variabel
	double a1, b1, hasilTambah;
    double a2, b2, hasilKurang;
    double a3, b3, hasilKali;
    double a4, b4, hasilBagi;

    cout << "===== Program Kalkulator Sederhana =====\n";

    // Penjumlahan
    cout << "\nSoal Pertama: Penjumlahan\n";
    cout << "Masukkan 2 angka\n";
    cout << "A = ";
    cin >> a1;
    cout << "B = ";
    cin >> b1;
    hasilTambah = a1 + b1;
    cout << "Hasil A + B = " << hasilTambah << endl;

    // Pengurangan
    cout << "\nSoal Kedua: Pengurangan\n";
    cout << "Masukkan 2 angka\n";
    cout << "A = ";
    cin >> a2;
    cout << "B = ";
    cin >> b2;
    hasilKurang = a2 - b2;
    cout << "Hasil A - B = " << hasilKurang << endl;

    // Perkalian
    cout << "\nSoal Ketiga: Perkalian\n";
    cout << "Masukkan 2 angka\n";
    cout << "A = ";
    cin >> a3;
    cout << "B = ";
    cin >> b3;
    hasilKali = a3 * b3;
    cout << "Hasil A * B = " << hasilKali << endl;
}
