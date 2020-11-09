#include <iostream>
using namespace std;
int main()
{
	int pilih;
	cout << "Gambar Bangun Datar\n";
	cout << "1. Kotak bolong\n";
	cout << "2. Segitiga\n";
	cout << "Pilih : ";
	cin >> pilih;
	switch (pilih)
	{
		case 2 :
		int i2, j2, tinggi, bil;

		cout << "\nTinggi  : ";
		cin >> tinggi;

		for (i2 = 1; i2 <= tinggi; i2++)
		{
        bil = i2;
			for(j2 = 1; j2 <= i2; j2++)
			{
			cout << " " << bil;
			bil = bil + tinggi - j2;
			}
		cout << "\n";
		}
	break;
	case 1 :
		int i,j,p,l;
		cout << "\npanjang : ";
		cin >> p;
		cout << "lebar   : ";
		cin >> l;

		for(int i=1; i<=p; i++)
		{
			for(int j=1; j<=l; j++)
			{
				if (i==1||i==p||j==1||j==l)
				{cout <<" *";}
					else
					{cout <<"  ";}
			}
		cout << "" << endl;
		}
	break;
	}
}
