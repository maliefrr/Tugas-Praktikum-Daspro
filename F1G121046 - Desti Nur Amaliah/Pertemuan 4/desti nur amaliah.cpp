#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int Produk, Jumlah, Total, Bayar;
	char Pilihan;
	cout<<" Selamat Datang Di INDOMARET KOLAKA UTARA "<<endl;
	cout<<endl;
	
	menu :
	cout<<"Jumlah Produk :"<<endl ;
	cout<<"1. Cimory"<<endl;
	cout<<"2. Quitela"<<endl;
	cout<<"3. Ultramilk"<<endl;
	cout<<endl;
	cout<<"Masukan Pilihan Produk : "<<endl;
	cin>>Produk;
	
	switch(Produk){
		case 1 :
		cout<<"Masukan Jumlah Produk yang Akan Di Beli : ";
		cin>>Jumlah;
		system("clear");
		cout<<"Cimory "<<Jumlah<<" Cimory Berhasil Di Beli ";
		cout<<endl;
		
			tambah_Cimory:
			cout<<"Apakah Anda Ingin Menambah Produk? (y/n)"<<endl;
			cout<<"Masukan Pilihan Anda : "<<endl;
			cin>>Pilihan;
			if (Pilihan == 'y') {
				system("clear");
				goto menu ;
			} 	else if (Pilihan == 'n'){
				system("clear");
				cout<<"Terimakasih Telah Membeli";
			} 	else { 
				cout<<"Opsi yang Anda Pilih Salah ";
				goto tambah_Cimory;
			}
			break;
			
		case 2 :
			cout<<"Masukkan Jumlah Quitela Yang Akan Di tambah : ";
			cin>>Pilihan;
			system("clear");
			cout<<"Quitela "<<Jumlah<<" Quitela Berhasil Di tambah ";
			cout<<endl;
			
			tambah_Quitela:
			cout<<"Apakah Anda Ingin Menambah Produk? (y/n)" <<endl;
			cout<<"Masukan Pilihan Anda : ";
			 cin>>Pilihan;
			if (Pilihan == 'y') {
				system("clear");
				goto menu ;
			} 	else if (Pilihan == 'n') {
				system("clear");
				cout<<"Terimakasih Telah Order";
			} 	else {
				cout<<"Opsi yang Anda Pilih Salah ";
				goto tambah_Quitela;
			}
			break;
				
		
	 		
	 		case 3 :
			cout<<"Masukkan Jumlah Ultramilk yang Akan DI Beli: ";
			cin>>Jumlah;
			system("clear");
			cout<<"Ultramilk "<<Jumlah<<" Ultramilk Berhasil Di tambah";
			cout<<endl;
			
			tambah_Ultramilk:
			cout<<"Apakah Anda Ingin Menambah Produk? (y/n)" <<endl;
			cout<<"Masukkan Pilihan Anda : ";
			cin>>Pilihan;
			if (Pilihan == 'y'){
				system("clear");
				goto menu;
			} 	else if (Pilihan == 'n'){
				system("clear");
				cout<<"Terimakasih Telah Order";
			} 	else {
				cout<<"Opsi yang Anda Pilih Salah";
				goto tambah_Ultramilk;
			}
	 		break;
	default :
		system("clear");
		cout<<"Produk yang anda pilih"<<endl;
		goto tambah_Ultramilk;
		
	}		
}
