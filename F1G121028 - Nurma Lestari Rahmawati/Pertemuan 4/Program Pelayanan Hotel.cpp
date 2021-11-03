#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int kamar, total;
	char Pilihan;
	cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
	cout<<"xxxxxx==========Selamat Datang Di Hotel Azera==========xxxxxx"<<endl;
	cout<<"xxxxxx================Selamat Menikmati================xxxxxx"<<endl;
	cout<<"xxxxxx========Semoga Senang Dengan Pelayanannya========xxxxxx"<<endl;
	cout<<"xxxxxx=============Sekian Dan Terima Kasih=============xxxxxx"<<endl;
	cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
	cout<<endl;
	
	cout<<"============================================"<<endl;
	cout<<"SISTEM INFORMASI PENYEWAAN KAMAR HOTEL AZERA"<<endl;
	cout<<"============================================"<<endl;
	cout<<endl;
	
	kamar :
	cout<<"Jenis Pelayanan Kamar :"<<endl ;
	cout<<"1. Single Room"<<endl;
	cout<<"2. Twin Room"<<endl;
	cout<<"3. Double Room"<<endl;
	cout<<endl;
	cout<<"Masukan Jenis Pelayanan Kamar : "<<endl;
	cin>>kamar;
	
	switch(kamar){
		case 1 :
		cout<<"Masukan Jenis Pelayanan Kamar yang dipesan : ";
		cin>>total;
		system("clear");
		cout<<"Single Room "<<total<<" Pesanan berhasil dipesan ";
		cout<<endl;
		
		ulang_SingleRoom :
		cout<<"Apakah Anda Ingin Menambah Jenis Kamar yang dipesan? (y/n)"<<endl;
		cout<<"Masukan Pilihan Anda : "<<endl;
		cin>>Pilihan;
		if (Pilihan == 'y') {
			system("clear");
			goto kamar ;
		} 	else if (Pilihan == 'n'){
			system("clear");
			cout<<"Terimakasih, Kamar Anda Berhasil dipesan, Selamat Menikmati";
		} 	else { 
			cout<<"Opsi yang Anda Pilih Salah ";
			goto ulang_SingleRoom;
		}
		break;
			
		case 2 :
		cout<<"Masukkan Pesanan Twin Room yang dipesan : ";
		cin>>total;
		system("clear");
		cout<<"Twin Room "<<total<<" Pesanan Kamar Berhasil Diorder ";
		cout<<endl;
			
		ulang_TwinRoom :
		cout<<"Apakah Anda Ingin Menambah Pesanan Kamar? (y/n)" <<endl;
		cout<<"Masukan Pilihan Anda : ";
		cin>>Pilihan;
		if (Pilihan == 'y') {
			system("clear");
			goto kamar ;
		} 	else if (Pilihan == 'n') {
			system("clear");
			cout<<"Terimakasih, Kamar Anda Berhasil dipesan, Selamat Menikmati";
		} 	else {
			cout<<"Opsi yang Anda Pilih Salah ";
			goto ulang_TwinRoom;
		}
		break;
				
		case 3 :
		cout<<"Masukkan Pesanan Double Room yang Dipesan : ";
		cin>>total;
		system("clear");
		cout<<"Double Room "<<total<<" Pesanan Kamar Anda Telah Berhasil ";
		cout<<endl;
			
		ulang_DoubleRoom :
		cout<<"Apakah Anda Ingin Menambah Pesanan Double Room? (y/n)" <<endl;
		cout<<"Masukkan Pilihan Anda : ";
		cin>>Pilihan;
		if (Pilihan == 'y'){
			system("clear");
			goto kamar;
		} 	else if (Pilihan == 'n'){
			system("clear");
			cout<<"Terimakasih, Kamar Anda Berhasil dipesan, Selamat Menikmati";
		} 	else {
			cout<<"Opsi yang Anda Pilih Salah";
			goto ulang_DoubleRoom;
		}
 		break;
	 		
	default :
		system("clear");
		cout<<"Opsi yang Anda Pilih Salah"<<endl;
		goto kamar;
		
	}		
}
