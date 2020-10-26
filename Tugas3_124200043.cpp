#include <iostream>
#include <iomanip>
using namespace std;
main()
{
	string isi_user, isi_sandi;
	float harian1, uts1, uas1, total1, harian2, uts2, uas2, total2;
	int matkul;
	
	string user = "admin";
	string sandi = "123";
	
	cout << "============== Login Akun ===============\n";
	cout << "Username  = ";
	cin >> isi_user;
	cout << "Password  = ";
	cin >> isi_sandi;
	
	if (isi_user == user  && isi_sandi == sandi)
	{
	cout << "\n";
	cout << "------------ Login berhasil ! -----------\n";
	cout << "\n";
	cout << "=========================================\n";
	cout << "            Daftar Mata Kuliah           \n";
	cout << "=========================================\n";
	cout << "1. Algoritma dan Pemrograman\n";
	cout << "2. Kalkulus\n";
	cout << "=========================================\n";
	cout << "Ketik nomor untuk memilih Mata Kuliah : ";
	cin >> matkul;
	cout << "=========================================\n";
	cout << "              Daftar Nilai\n";
	cout << "=========================================\n";
	
	switch (matkul)
		{
		case 1 :
			cout << "Nilai Harian : ";
			cin >> harian1;
			cout << "Nilai UTS    : ";
			cin >> uts1;
			cout << "Nilai UAS    : ";
			cin >> uas1;
			cout << "\n";
			total1 = (harian1 + uts1 + uas1) / 3;
			if (total1 >= 80)
			{cout << fixed << setprecision(2) << "Selamat anda lulus Algoritma dan Pemrograman dengan nilai " << total1 << endl;}
			else if (total1 < 80)
			{cout << fixed << setprecision(2) << "Anda tidak lulus Algoritma dan Pemrograman dengan nilai " << total1 << endl;}
			break;
		case 2 :
			cout << "Nilai Harian : ";
			cin >> harian2;
			cout << "Nilai UTS    : ";
			cin >> uts2;
			cout << "Nilai UAS    : ";
			cin >> uas2;
			cout << "\n";
			total2 = (harian2 + uts2 + uas2) / 3;
			if (total2 >= 80)
			{cout << fixed << setprecision(2) << "Selamat anda lulus Kalkulus dengan nilai " << total2 << endl;}
			else if (total2 < 80)
			{cout << fixed << setprecision(2) << "Anda tidak luluss Kalkulus dengan nilai " << total2 << endl;}
			break;
		default :
			cout << "\n";
			cout << "Input tidak sesuai dengan daftar\n";
		}
	}
	else if (isi_user != user  && isi_sandi == sandi)
	{cout << "\n"; cout << "------------ Username salah ! -----------\n";}	
	else if (isi_user == user  && isi_sandi != sandi)
	{cout << "\n"; cout << "------------ Password salah ! -----------\n";}	
	else
	{cout << "\n"; cout << "----- Username dan Password salah ! -----\n";}
	
	return 0;
}
