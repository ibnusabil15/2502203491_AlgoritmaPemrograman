// Program menghitung harga total
#include <iostream>
#include <iomanip>     // biar bisa atur angka di belakang koma

using namespace std;

int main()
{
    const float HARGA = 4500.02;  
    float jumlah, total;

    cout << "Masukkan jumlah barang = ";
    cin >> jumlah;

    total = HARGA * jumlah;

    cout << fixed << setprecision(2);   
    cout << "\nYang harus dibayar = " << total << endl;

    return 0;
}

