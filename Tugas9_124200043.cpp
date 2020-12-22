#include <iostream>
using namespace std;
int main()
{
    double rata_akhir=0.0, rata=0.0;
    int i_kurang, selisih[99], maksimum = 0, minimum = 0, i=1, j=1;
    cout << "Masukkan banyak angka : ";
    cin >> j;
    
    int angka_ke[i];
    
    for (i=1; i<=j; i++){
		cout << "Angka ke-" << i << " : ";
		cin >> angka_ke[i];
	}
	
	cout << endl << endl;
    cout << "_____Hasil_____" << endl;
    
    cout << "Deret       : ";
	for (i = 1; i <= j; i++){
		cout << angka_ke[i];
		cout << " ";
	}
	cout << endl;
	
	cout << "Maksimum    : ";
    maksimum = angka_ke[1];
	for (i = 1; i <= j; i++){
		if (angka_ke[i] > maksimum){
			maksimum = angka_ke[i];
		}
	}
	cout << maksimum;
	cout << endl;
	
	cout << "Minimum     : ";
    minimum = angka_ke[1];
	for(i = 1; i <= j; i++){
		if (angka_ke[i] < minimum){
			minimum = angka_ke[i];
		}
	}
	cout << minimum;
	cout << endl;
	
	cout << "Rata-rata   : ";
	for(i = 1; i <= j; i++){
		rata += angka_ke[i];
	}
	rata_akhir = rata / j;
	cout << rata_akhir;
	cout << endl;
	
	cout << "Selisih Max : ";
	for(i = 1; i <= j; i++){
		if (i < j) i_kurang=i+1;
		
		selisih[i] = angka_ke[i] - angka_ke[i_kurang];
		
		if (selisih[i] < 0) selisih[i] = selisih[i] * (-1);
		
		maksimum = selisih[1];
		for (i = 1; i <= j; i++){
		if (selisih[i] > maksimum){
			maksimum = selisih[i];
		}
	}
	cout << maksimum;
	}
	
	return 0;
}
