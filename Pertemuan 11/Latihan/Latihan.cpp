#include <iostream>
using namespace std;
\
void pangkatTiga(int &nilai) {
    nilai = nilai * nilai * nilai; 
}

int main() {
    int x;

    cout << "Masukkan sebuah angka: ";
    cin >> x;

    // Proses di dalam fungsi
    pangkatTiga(x);

    // Hasil sudah berubah di variabel x
    cout << "Hasil pangkat tiga: " << x << endl;

    return 0;
}

