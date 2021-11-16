#include <conio.h>
#include <iostream>

using namespace std;
int main() {

	int i = 1, n, hasil, jumlah=0;
  	
	  cout<<"Masukkan Berapa kali pengulangan = " ;
  	  cin>>n;
	while (i <=n) 
	{
	    cout<<"Input "<<i<<"="<<jumlah<<endl;
	    jumlah+= i + 1 ;
	    i++;	
	    
	}
	 if(jumlah%2==0)
  {	cout<<"Hasil Dari penjumlahan dari angka yang di input adalah "<<jumlah<<"  Dan Memiliki Nilai Genap" ;
  }
 
  else {
  	cout<<"Hasil Dari penjumlahan dari angka yang di input adalah "<<jumlah<<"  Dan Memiliki Nilai Ganjil" ;
  	//Disini untuk mencari hasil dari penjumlahan saya tidak tau menggunakan bahasa apa, karena setelah banyak
  	//percobaan hasilnya tetap melanjutkan hasil dari inputan saya :) 
	  }
	return 0 ;
}
