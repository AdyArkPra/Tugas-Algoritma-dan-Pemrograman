#include <iostream>
using namespace std;

void prog_luas();
void prog_keliling();
void prog_volume();
void ulang();

int mode;
double jari, tinggi, hitung[3];
char pilihan;

int main(){
	cout << "Hitung Lingkaran ==========" << endl;
	cout << "1. Luas Lingkaran" << endl;
	cout << "2. Keliling Lingkaran" << endl;
	cout << "3. Volume Tabung" << endl;
	cout << "Pilih: ";
	cin >> mode;
	
	switch (mode){
		case 1 : prog_luas(); break;
		case 2 : prog_keliling(); break;
		case 3 : prog_volume(); break;
		default :
		cout << "Input Salah :)" << endl;
		ulang();
	}
}

void prog_luas(){
	cout << "Jari - jari     : ";
	cin >> jari;
	
	hitung[1] = 3.14 * jari * jari;
	
	cout << "Luas Lingkaran adalah " << hitung[1];
	cout << endl;
	ulang();
}
	
void prog_keliling(){
	cout << "Jari - jari     : ";
	cin >> jari;
	
	hitung[2] = 3.14 * jari * 2;
	
	cout << "Keliling Lingkaran adalah " << hitung[2];
	cout << endl;
	ulang();
}
	
void prog_volume(){
	cout << "Jari - jari     : ";
	cin >> jari;
	cout << "Tinggi          : ";
	cin >> tinggi;
	
	hitung[3] = 3.14 * jari * jari * tinggi;
	
	cout << "Keliling Lingkaran adalah " << hitung[3];
	cout << endl;
	ulang();
}
	
void ulang(){
	cout << "Ulangi program? (y/n) ";
	cin >> pilihan;
	
	while (pilihan == 'y'){
		cout << endl;
		main ();
	}
}
