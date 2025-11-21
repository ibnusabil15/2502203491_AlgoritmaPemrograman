#include <iostream>
using namespace std;

int main() {
	int angka[6];
	int Baiksekali, baik, cukup, kurang;
	
	cout << "Masukan 5 Nilai: " << endl; 
	for (int i = 0; i < 5; i++) {
		cout << "Nilai ke-" << i + 1 << ": ";
		cin >> angka[i];
	}
	
	Baiksekali = angka[0];
	Baik = angka[0];
	Cukup = angka[0];
	Kurang = angka[0];
	
	for (int i = 1; i < 5; i++) {
		if (angka[i] > Baik sekali)
			Baiksekali = angka [i];
		if (angka[i] < baik)
			baik = angka [i];
		if (angka[i] > Cukup)
			Cukup = angka [i]; 
		if (angka[i] > Kurang)
			Kurang = angka [i];
	}
	
	   cout << "\nBaiksekali = " << baikk << endl;
    cout << "Baik = " << baik << endl;
    cout << "Cukup = " << cukup << endl;
    cout << "Kurang = " << kurang << endl;

    return 0;
}
		
