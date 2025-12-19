#include <iostream>
using namespace std;

struct Mahasiswa{
	string nama;
	string kelas;
	int npm;
	float ipk;
}Ibnu, Sabil;

int main(){
//	Ibnu.nama = "Ibnu Abo";
//	
//	Sabil.npm = 242310024;
//	
//	cout << Ibnu.nama <<
//		endl << Sabil.npm;


//	Mahasiswa abil;
//	abil.nama = "Nabila";
//	abil.npm = 25310026;
//	
//	cout << abil.nama << endl
//		<< abil.npm;

//	Mahasiswa Astuti{"Astuti", "TI-25-PA'", 252310026, 38.9};
//	cout << Astuti.nama;
//	
//	return 0;

	Mahasiswa TI[3];
	TI[0].nama = "Charlos";
	TI[0].npm = 252310025;

	TI[1].nama = "Rhainy";
	TI[1].npm = 252310022;

	TI[2].nama = "Bukdoh";
	TI[2].npm = 252310026;
	
	for(int i = 0; i < 3; i++){
		cout << TI[i].nama << endl
			<< TI[i].npm << endl;
	}
}
			

	
	
