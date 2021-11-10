#include <iostream>
using namespace std;

int main()
{
	system ("color 3");
	a:
	int a = 1, input ,panjang ,harga = 2000 ,hasil = 0;
	
	cout<<"====== Welcome to Toko Kain Agung jaya prima ======" << endl;
	cout<<"\n Harga kain Permeter = Rp2000" << endl << endl;
	//Harga kain rata Rp.2000 untuk semua jenis kain dengan warna yang berbeda-beda
	cout<<"Berapa kali ingin melakukan pembeli kain : ";
	//memasukkan angka akan melakukan perulangan sebanyak apa yang anda inputkan
	cin>>input;

	while(a <= input)
	{
		cout<<"Masukkan panjang kain ke "<<a<<"(m): ";
		cin>>panjang;
		//inputkan angka (panjang kain) yang akan anda pesan
		a++;
		hasil=hasil+panjang;
		//berikut akan tampil total panjang kain yang anda pesan
	}
	cout<<"Jumlah panjang kain yang anda pesan adalah = "<<hasil<<" m"<<endl;
	cout<<"Total harga yang anda bayar adalah = Rp"<<hasil*harga;
	//Harga yang akan anda bayar akan muncul dilayar dengan mengalikan total panjang kain yang anda pesan dengan harga permeter kain
	cout<<endl<<endl;
	goto a;

	return 0;
}
