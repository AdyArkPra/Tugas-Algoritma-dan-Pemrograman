#include <iostream>
#include <iomanip>
using namespace std;
main()
{
	int n, m, loop, pilih;
	double jumlah;
	
	cout << "Tugas 4 Praktikum Algoritma dan Pemrograman 1\n" << endl;
  	cout << "NIM  : 124200043" << endl;
  	cout << "Nama : Adyatma Arkaan Pradipa\n" << endl;
  	cout << "------------------------------------------------------------------" << endl;
	cout << "                 PROGRAM PERKALIAN DAN PERPANGKATAN               " << endl;
  	cout << "------------------------------------------------------------------\n";
	cout << "Pilih metode operasi penghitungan dari daftar dibawah ini!\n";
	cout << "1. Perkalian\n";
	cout << "2. Perpangkatan\n";
	cout << "Pilihan       : ";
	cin >> pilih;
	
	switch (pilih)
	{
	case 1 :
		cout << "Input angka M : ";
		cin >> m;
		cout << "Input angka N : ";
		cin >> n;
			jumlah = 0;
			for (int loop = 1; loop <= n; loop++)
			{
			jumlah += m;
				if (loop != n)
				{cout << m << " + ";}
				else
				{cout << m << " = " <<jumlah;}
			}
	break;
	case 2 :
		cout << "Input angka M : ";
		cin >> m;
		cout << "Input angka N : ";
		cin >> n;
			jumlah = 1;
			for (int loop = 1; loop <= n; loop++)
			{
			jumlah *= m;
				if (loop != n)
				{cout << m << " X "; }
			}
			{cout << setprecision(999999) <2< m << " = " <<jumlah;}
	break;
	default : 
	cout << ("Input salah !\n");
	}
}
