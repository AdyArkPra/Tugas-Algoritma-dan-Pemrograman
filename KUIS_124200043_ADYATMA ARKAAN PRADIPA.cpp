#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int mode, i, x, y, skor_p1, skor_p2, total_p1 = 0, total_p2 = 0, kali;
	float rata, kuis, rsp, tgs, prj;
	string pil_p1, pil_p2, hrf, nama, jur, nim, p1, p2;
		
	
	cout << "KUISSS ================" << endl;
	cout << "1. Deret Unik" << endl;
	cout << "2. Nilai Akhir" << endl;
	cout << "3. Gunting Batu Kertas (Bonus)" << endl;
	cout << "4. Keluar" << endl;
	cout << "Pilih: ";
	cin >> mode;
	
	switch (mode){
		case 1 :
		cout << "X = ";
		cin >> x;
		cout << "Y = ";
		cin >> y;
		for (i=1; i<=y; i++){
			if (i%x == 0) cout << "|";
			else if (i <= y) cout << "-";
		}
		break;
		
		case 2 :
		cout << "\nInput Nilai Praktikum =========" << endl;
		cout << "Nama            : "; cin.ignore(); getline (cin, nama);
		cout << "NIM             : "; cin >> nim;
		cout << "Kuis            : "; cin >> kuis;
		cout << "Responsi        : "; cin >> rsp;
		cout << "Tugas           : "; cin >> tgs;
		cout << "Project         : "; cin >> prj;
		
		cout << "\nHasil Akhir ===================" << endl;
		cout << "Nama            : " << nama << endl;
		cout << "NIM             : " << nim << endl;
		if (nim[2] == '1') jur = "Teknik Kimia";
		else if (nim[2] == '2') jur = "Teknik Industri";
		else if (nim[2] == '3') jur = "Informatika";
		else if (nim[2] == '4') jur = "Sistem Informasi";
		
		cout << "Jurusan         : " << jur << endl;
		
		rata = (0.2*kuis) + (0.35*rsp) + (0.15*tgs) + (0.3*prj);
		
		if (rata >= 80 && rata <= 100) {hrf = 'A';}
		else if (rata >= 60) hrf = 'B';
		else if (rata >= 40) hrf = 'C';
		else if (rata >= 20) hrf = 'D';
		else if (rata < 20) hrf = 'E';
		
		cout << "Rata-rata       : " << fixed << setprecision(2) << rata  << endl;
		cout << "Nilai Huruf     : " << hrf << endl;
		
		if (rata < 60) cout << "Mohon maaf anda belum lulus praktikum";
		else cout << "Selamat anda lulus praktikum";
		break;
		
		case 3 :
		cout << "Masukkan nama player 1 : "; cin.ignore();
		getline (cin, p1);
		cout << "Masukkan nama player 2 : ";
		getline (cin, p2);
		cout << "Masukkan banyak ronde  : ";
		cin >> kali;
		
		for (i=1; i<=kali; i++){
			cout << "\nRonde ke-" << i << endl;
			cout << "Masukkan kertas/gunting/batu " << p1 << " : ";
			cin >> pil_p1;
			cout << "Masukkan kertas/gunting/batu " << p2 << " : ";
			cin >> pil_p2;
		
			if ( pil_p1 == "batu" && pil_p2 == "batu"){
				skor_p2 = 0; skor_p1 = 0;
			}
			else if ( pil_p1 == "batu" && pil_p2 == "gunting"){
				skor_p1 = 1; skor_p2 = 0;
			}
			else if ( pil_p1 == "batu" && pil_p2 == "kertas"){
				skor_p2 = 1; skor_p1 = 0;
			}
			else if ( pil_p1 == "gunting" && pil_p2 == "batu"){
				skor_p2 = 1; skor_p1 = 0;
			}
			else if ( pil_p1 == "gunting" && pil_p2 == "gunting"){
				skor_p2 = 0; skor_p1 = 0;
			}
			else if ( pil_p1 == "gunting" && pil_p2 == "kertas"){
				skor_p1 = 1; skor_p2 = 0;
			}
			else if ( pil_p1 == "kertas" && pil_p2 == "batu"){
				skor_p1 = 1; skor_p2 = 0;
			}
			else if ( pil_p1 == "kertas" && pil_p2 == "gunting"){
				skor_p2 = 1; skor_p1 = 0;
			}
			else if ( pil_p1 == "kertas" && pil_p2 == "kertas"){
				skor_p2 = 0; skor_p1 = 0;
			}
		total_p1 = total_p1 + skor_p1;
		total_p2 = total_p2 + skor_p2;
		}
		
		cout << "\n_____Hasil Akhir_____" << endl;
		cout << p1 << " menang " << total_p1 << " kali" <<endl;
		cout << p2 << " menang " << total_p2 << " kali" <<endl;
		
		if (total_p1 < total_p2) cout << "Jadi pemenangnya adalah " << p1;
		else if (total_p1 >total_p2) cout << "Jadi pemenangnya adalah " << p2;
		else if (total_p1 == total_p2) cout << "Pertandingan seri";
		
		break;
	}
	return 0;	
}
