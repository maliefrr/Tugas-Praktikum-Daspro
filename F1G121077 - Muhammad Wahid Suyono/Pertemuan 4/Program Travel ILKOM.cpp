#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int inputUser,jumlah;
	char pilihan;
	awal:
	cout<<"==============================" <<endl;
	cout<<"======== Travel ILKOM ========"<<endl;
	cout<<"=============================="<<endl ;
	cout<<"***** Selamat Datang di Travel Ilkom ***** "<<endl<<endl ;
	cout<<"Silahkan Pilih Tiket Pemesanan TRAVEL Anda : "<<endl ;
	cout<<"  1. Tiket Pesawat" <<endl<<"  2. Tiket Kapal"<<endl<<"  3. Tiket Bus"<<endl <<endl ;
	cout<<" Masukkan Pilihan Anda : " ;
	cin>>inputUser;
	switch(inputUser){
		case 1:
			system("color a") ;
			cout<<"Masukkan Jumlah Tiket Yang ingin anda Pesan : " ;
			cin>>jumlah ;
			cout<<"Selamat, "<<jumlah<<" Tiket Pesawat Anda Berhasil Di proses " <<endl <<endl;
			ulang_Pesawat :
			cout<<"Apakah Anda Ingin Melakukan Pemesanan Tiket Lagi ? " <<endl;
			cout<<"Masukkan Pilihan Anda (y/n) : ";
			cin>>pilihan;
			if(pilihan == 'y'){
				system("cls");
				goto awal;
				} else if(pilihan == 'n'){
					system("cls");
					cout<<"Terima Kasih telah menggunakan Layanan kami " ;
					} else {
					cout<<"Maaf, Input yang Anda Masukkan Salah " <<endl;
					goto ulang_Pesawat;
				} 
				break;
				case 2:
			system("color b") ;
			cout<<"Masukkan Jumlah Tiket Yang ingin anda Pesan : " ;
			cin>>jumlah ;
			cout<<"Selamat, "<<jumlah<<" Tiket Kapal Anda Berhasil Di proses " <<endl <<endl;
			ulang_Kapal :
			cout<<"Apakah Anda Ingin Melakukan Pemesanan Tiket Lagi ? " <<endl;
			cout<<"Masukkan Pilihan Anda (y/n) : ";
			cin>>pilihan;
			if(pilihan == 'y'){
				system("cls");
				goto awal;
				} else if(pilihan == 'n'){
					system("cls");
					cout<<"Terima Kasih telah menggunakan Layanan kami " ;
					} else {
					cout<<"Maaf, Input yang Anda Masukkan Salah " <<endl;
					goto ulang_Pesawat;
				} 
				break;
					case 3:
			system("color c") ;
			cout<<"Masukkan Jumlah Tiket Yang ingin anda Pesan : " ;
			cin>>jumlah ;
			cout<<"Selamat, "<<jumlah<<" Tiket Bus Anda Berhasil Di proses " <<endl <<endl;
			ulang_Bus :
			cout<<"Apakah Anda Ingin Melakukan Pemesanan Tiket Lagi ? " <<endl;
			cout<<"Masukkan Pilihan Anda (y/n) : ";
			cin>>pilihan;
			if(pilihan == 'y'){
				system("cls");
				goto awal;
				} else if(pilihan == 'n'){
					system("cls");
					cout<<"Terima Kasih telah menggunakan Layanan kami " ;
					} else {
					cout<<"Maaf, Input yang Anda Masukkan Salah " <<endl;
					goto ulang_Pesawat;
				} 
				break;
					default :
						system("cls") ;
						cout<<"input yang anda masukkan invalid"<< endl;
						goto awal;
		}
	}
