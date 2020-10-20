#include <iostream>
#include <iomanip>
using namespace std;
main()
{
	int total_tagihan, tagihan, tagihan2, tagihan3, tagihan4, ayah, ibu, anak1, anak2;
	
	cout << "==================================\n";
	cout << " No.    Anggota keluarga     Umur\n";
	cout << "==================================\n";
	cout << " 1.     Ayah                 ";
	cin >> ayah;
	cout << " 2.     Ibu                  ";
	cin >> ibu;
	cout << " 3.     Anak 1               ";
	cin >> anak1;
	cout << " 4.     Anak 2               ";
	cin >> anak2;
	cout << "==================================\n";
	
	if (ayah >0 && ayah <= 12)
	{tagihan = 15000*30;}
	else if (ayah >=12 && ayah <= 20)
	{tagihan = 20000*30;}
	else if (ayah >20)
	{tagihan = 30000*30;}
	else
	{cout << "umur salah\n";}

	if (ibu >0 && ibu <= 12)
	{tagihan2 = 15000*30;}
	else if (ibu >=12 && ibu <= 20)
	{tagihan2 = 20000*30;}
	else if (ibu >20)
	{tagihan2 = 30000*30;}
	else
	{cout << "umur salah\n";}
	
	if (anak1 >0 && anak1 <= 12)
	{tagihan3 = 15000*30;}
	else if (anak1 >=12 && anak1 <= 20)
	{tagihan3 = 20000*30;}
	else if (anak1 >20)
	{tagihan3 = 30000*30;}
	else
	{cout << "umur salah\n";}
	
	if (anak2 >0 && anak2 <= 12)
	{tagihan4 = 15000*30;}
	else if (anak2 >=12 && anak2 <= 20)
	{tagihan4 = 20000*30;}
	else if (anak2 >20)
	{tagihan4 = 30000*30;}
	else
	{cout << "umur salah\n";}
	
	total_tagihan = tagihan + tagihan2 + tagihan3 + tagihan4;
	
	cout << "Tagihan selama 1 bulan sebesar \n";
	cout << "= Rp. " << total_tagihan << endl;
	return 0;
}
