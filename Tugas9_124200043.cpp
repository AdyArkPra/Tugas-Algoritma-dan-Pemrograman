#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double rata_akhir=0.0, rata=0.0;
    int i_kurang, selisih[999] = {0}, maksimum = 0, maksimum2 = 0, minimum = 0, i=1, j=1;
    cout << "Masukkan banyak angka : ";
    cin >> j;
    
    int angka_ke[i] = {0};
    
    for (i=0; i< j; i++){
		cout << "Angka ke-" << i+1 << " : ";
		cin >> angka_ke[i];
	}
	
	cout << endl << endl;
    cout << "_____Hasil_____" << endl;
    
    cout << "Deret       : ";
	for (i = 0; i < j; i++){
		cout << angka_ke[i] << " ";
	}
	cout << endl;
	
    minimum = angka_ke[0];
    maksimum = angka_ke[0];
    
	for (i = 0; i < j; i++){
		if (angka_ke[i] > maksimum){
			maksimum = angka_ke[i];
		}
		else if (angka_ke[i] < minimum){
			minimum = angka_ke[i];
		}
	}
	cout << "Maksimum    : " << maksimum << endl;
	cout << "Minimum     : " << minimum << endl;
	
	for(i = 0; i < j; i++){
		rata += angka_ke[i];
	}
	
	rata_akhir = rata / j;
	cout << "Rata-rata   : " << setprecision(3) << rata_akhir << endl;
	
	j=j-1;
	for(i = 0; i < j; i++){
		i_kurang=i+1;
		
		if (i < j) selisih[i] = angka_ke[i] - angka_ke[i_kurang];
		else selisih[i] = 0;
		
		if (selisih[i] < 0) selisih[i] = selisih[i] * (-1);
		
		maksimum2 = selisih[0];
		if (selisih[i] > maksimum2){
				maksimum2 = selisih[i];
		}
	}
	cout << "Selisih Max : " << maksimum2;
	
	return 0;
}
