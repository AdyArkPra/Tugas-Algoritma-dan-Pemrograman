#include <iostream>
#include <iomanip>
using namespace std;
main()
{
	char nama[50], nim[10];
	float rata2, uts, uas;
	
	cout << "Tugas Praktikum Algoritma dan Pemrograman 1\n" << endl;
  	cout << "NIM  : 124200043" << endl;
  	cout << "Nama : Adyatma Arkaan Pradipa\n" << endl;
  	cout << "------------------------------------------------" << endl;
	cout << "              INPUT NILAI MAHASISWA             " << endl;
  	cout << "------------------------------------------------\n" << endl;
	
	cout << "NIM  : ";
	cin >> nim; cin.ignore();
	cout << "Nama : ";
	cin.getline (nama, sizeof(nama));
	cout << "" << endl;
	
	cout << "Nilai UTS = ";
	cin >> uts;
	cout << "Nilai UAS = ";
	cin >> uas;
	
	rata2 = (uts + uas) / 2;
	
	cout << "Mahasiswa dengan nama\n" << nama;
	cout << " (";
	cout << "" << nim;
	cout << ") ";
	cout << fixed << setprecision(2) << "Rata rata = " << rata2 << endl; 
}
