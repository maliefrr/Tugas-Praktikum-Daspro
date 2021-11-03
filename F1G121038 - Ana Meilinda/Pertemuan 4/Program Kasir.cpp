#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int menu, Jumlah;
	char Pilihan;
	cout<<"==== Selamat Datang Di ADHELHYA Cafe ===="<<endl;
	cout<<endl;
	
	menu :
	cout<<"Menu Yang Dapat Anda Order :"<<endl ;
	cout<<"1. Thai Tea"<<endl;
	cout<<"2. Roti Bakar"<<endl;
	cout<<"3. Corndog"<<endl;
	cout<<endl;
	cout<<"Masukan Pilihan Menu Orderan : "<<endl;
	cin>>menu;
	
	switch(menu){
		case 1 :
		cout<<"Masukan Jumlah Thai Tea yang Akan Anda order : ";
		cin>>Jumlah;
		system("cls");
		cout<<"Thai Tea "<<Jumlah<<" Cup Berhasil Diorder ";
		cout<<endl;
		
			ganti_ThaiTea :
			cout<<"Apakah Anda Ingin Menambah jumlah Orderan Thai Tea? (y/n)"<<endl;
			cout<<"Masukan Pilihan Anda : "<<endl;
			cin>>Pilihan;
			if (Pilihan == 'y') {
				system("cls");
				goto menu ;
			} 	else if (Pilihan == 'n'){
				system("cls");
				cout<<"Terimakasih Telah Order";
			} 	else { 
				cout<<"Opsi yang Anda Pilih Salah ";
				goto ganti_ThaiTea;
			}
			break;
			
		case 2 :
			cout<<"Masukkan Jumlah Roti Bakar yang Akan Diorder : ";
			cin>>Jumlah;
			system("cls");
			cout<<"Roti Bakar "<<Jumlah<<" Porsi Berhasil Diorder ";
			cout<<endl;
			
			ganti_RotiBakar :
			cout<<"Apakah Anda Ingin Menambah Jumlah Orderan Roti Bakar? (y/n)" <<endl;
			cout<<"Masukan Pilihan Anda : ";
			 cin>>Pilihan;
			if (Pilihan == 'y') {
				system("cls");
				goto menu ;
			} 	else if (Pilihan == 'n') {
				system("cls");
				cout<<"Terimakasih Telah Order";
			} 	else {
				cout<<"Opsi yang Anda Pilih Salah ";
				goto ganti_RotiBakar;
			}
			break;
				
		case 3 :
			cout<<"Masukkan Jumlah Corndog yang Akan Anda Order : ";
			cin>>Jumlah;
			system("cls");
			cout<<"Corndog "<<Jumlah<<" Porsi Berhasil Diorder";
			cout<<endl;
			
			ganti_Corndog :
			cout<<"Apakah Anda Ingin Menambah Jumlah Orderan Corndog? (y/n)" <<endl;
			cout<<"Masukkan Pilihan Anda : ";
			cin>>Pilihan;
			if (Pilihan == 'y'){
				system("cls");
				goto menu;
			} 	else if (Pilihan == 'n'){
				system("cls");
				cout<<"Terimakasih Telah Order";
			} 	else {
				cout<<"Opsi yang Anda Pilih Salah";
				goto ganti_Corndog;
			}
	 		break;
	 		
	default :
		system("cls");
		cout<<"Opsi yang Anda Pilih Invalid"<<endl;
		goto menu;
		
	}		
}
