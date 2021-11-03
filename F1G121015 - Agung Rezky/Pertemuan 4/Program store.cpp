#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int barang, jumlah;
	char pilihan;
	menu :
	cout<< "===== SELAMAT DATANG DI ABEH STORE =====" << endl ;
	
	cout<< "Barang yang bisa anda order :" << endl ;
	cout<< "|1. Baju distro" << endl ;
	cout<< "|2. Hoodie polos" << endl ;
	cout<< "|3. Sweeter costum" << endl;
	cout<< "Masukan pilihan barang : " << endl ;
	cin>> barang;
	
	switch(barang){
		case 1 :
		cout<< "Masukan jumlah hoodie yang akan anda order :" ;
		cin>>jumlah;
		system("clear");
		cout<< "Baju distro "<<jumlah<<"pcs Berhasil Anda Order ";
		
		ganti_baju :
			cout<< " Apakah anda ingin mengganti jumlah pemesanan Baju distro yang telah dipilih ?? (y/n)" << endl ;
			cout<< "Masukan pilihan anda : " << endl ;
			cin>> pilihan;
			if (pilihan == 'y') {
				system("clear") ;
			goto menu ;
			} else if (pilihan == 'n'){
				system("clear") ;
			cout<< "Terima kasih karena telah berbelanja di store kami" ;
			} else {
			cout<<"opsi yang anda pilih salah " ;
			goto ganti_baju ;
			}
			break;
			
		case 2 :
			cout<< "Masukkan jumlah hoodie yang akan order : ";
			cin>>jumlah;
			system("clear");
			cout<< "Hoodie polos "<<jumlah<<"pcs Berhasil di Order " ;
			ganti_hoodie :
			cout<< " Apakah anda ingin mengganti jumlah pemesanan Hoodie yang telah dipilih ?? (y/n)" << endl ;
			cout<<"Masukan Pilihan Anda :" ;
			 cin>>pilihan;
			if (pilihan == 'y') {
				system("clear");
			goto menu ;
			} else if (pilihan == 'n') {
				system("clear");
			cout<< "Terima kasih karena telah berbelanja di store kami" ;
			} else {
			cout<< "opsi yang anda pilih salah, " ;
			goto ganti_hoodie ;
			}
			break;
				
			case 3 :
			cout<< "Masukkan jumlah Sweeter yang akan anda order : ";
			cin>>jumlah;
			system("clear");
			cout<< "Sweeter polos "<<jumlah<<"pcs Berhasil diorder" ;
			ulang_sweeter :
			cout<< " Apakah anda ingin mengganti jumlah pemesanan sweeter yang telah dipilih ?? (y/n)" << endl ;
			cout<< "Masukkan pilihan anda :" ;
			cin>>pilihan;
			if (pilihan == 'y'){
				system("clear");
			goto menu ;
		} else if (pilihan == 'n'){
			system("clear");
			cout<<"Terima kasih telah berbelanja distore kami" ;
		} else {
			cout<< "opsi yang anda pilih salah, " ;
			goto ulang_sweeter ;
	}
	break ;
	default :
		system("clear");
		cout<<"opsi yang anda pilih invalid!!" << endl ;
		goto menu ;
			
	}
	
}
