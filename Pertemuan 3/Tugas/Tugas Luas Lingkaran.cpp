// Program Hitung Luas Lingkaran
#include <iostream>
using namespace std;

int main ()
{
	//variabel
	const double pi = 3.14;
	double r, luas;
	
	//Progres
	cout << "=== Program Menghitung Luas Lingkaran ===" << endl;
	cout << "\nMasukan Jari-Jari : "; 
	cin >> r;
	luas = pi * r * r;
	
	//output
	cout << "Luas Lingkaran = PI x r x r" << endl;
	cout << "PI = " << pi << endl;
	cout << "r = " << r << endl;
	cout << "Luas = " << pi << " x " << r << " x " << r << endl;
	cout << "Hasil Luas Lingkaran Adala = " << luas;
}
