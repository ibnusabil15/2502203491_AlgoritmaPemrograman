#include <iostream>
using namespace std;

int main()
{
	char y[30]; char z[35]; char x[40];
	cout<<"Masukkan NPM Anda:";
	cin>>x;
	cin.ignore();
	cout<<"Masukkan Nama Anda";
	cin>>y;
	cout<<"Masukkan Alamat Anda";
	cin>>z;
	cout<<"NPM Anda Adalah";
	cout<<"\nNama Anda adalah: "<<y;
	cout<<"\nAlamat Anda adalah "<<y;
	return 0;
}
