#include <iostream>
using namespace std;

int main() 
{
	int pilihan;
	do
	{
		int a, jum_barang, awal, hasil=0, harga = 25000, input;
		cout<<"===========PENJUALAN SAPU==========";
		cout<<"\n\n";
		cout<<"Harga Satu Buah Sapu = 25000"<<endl;
		cout<<"\n\n";
		cout<<"Berapa Kali Anda Ingin Melakukan Pembelian : ";
		cin>>input;
	
	for(a = 1; a <= input;a++)
	{
		cout<<"Masukkan Jumlah Barang : ";
		cin>>jum_barang;
		hasil=hasil+jum_barang;
	}
	cout<<"Jumlah Barang Yang Anda beli adalah : "<<hasil<<endl;
	cout<<"Total Harga Yang Akan Anda Bayarkan Adalah : Rp. "<<hasil*harga;
	cout<<"\n\n";
	cout<<"Apakah Ingin Melakukan Pembelian lagi ? [1(Ya)/2(Tidak)] : ";
	cin>>pilihan;
	}while(pilihan == 1);
	
	
	
	return 0;
}
