#include <iostream>
using namespace std;

struct Mahasiswa {
    float tugas;
    float praktikum;
    float uts;
    float uas;
    float rata;
    char grade;
};

int main() {
    Mahasiswa m;

    // Input nilai
    cout << "Masukkan nilai Tugas      : ";
    cin >> m.tugas;
    cout << "Masukkan nilai Praktikum : ";
    cin >> m.praktikum;
    cout << "Masukkan nilai UTS       : ";
    cin >> m.uts;
    cout << "Masukkan nilai UAS       : ";
    cin >> m.uas;

    // Hitung rata-rata
    m.rata = (m.tugas + m.praktikum + m.uts + m.uas) / 4;

    // Penentuan grade
    if (m.rata >= 90) {
        m.grade = 'A';
    } else if (m.rata > 80) {
        m.grade = 'B';
    } else if (m.rata > 70) {
        m.grade = 'C';
    } else if (m.rata > 60) {
        m.grade = 'D';
    } else {
        m.grade = 'E';
    }

    // Output
    cout << "\nRata-rata nilai : " << m.rata << endl;
    cout << "Nilai huruf     : " << m.grade << endl;

    return 0;
}

