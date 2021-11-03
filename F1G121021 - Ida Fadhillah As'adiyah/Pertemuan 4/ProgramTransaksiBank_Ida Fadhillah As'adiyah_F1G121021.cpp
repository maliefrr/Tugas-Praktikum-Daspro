#include <iostream>
using namespace std;

int main (){
	int input,nominal,pin;
	char pilihan;
	cout<<"========================================"<<endl;
	cout<<"======== PROGRAM TRANSAKSI BANK ========"<<endl;
	cout<<"========================================"<<endl;
	cout<<"Creator : Ida Fadhillah As'adiyah (F1G121021)"<<endl;
	
	beranda:
	cout<<endl;
	cout<<"=== Menu ==="<<endl;
	cout<<"1. Tarik Tunai"<<endl<<"2. Setor Tunai"<<endl<<"3. Transfer"<<endl;
	cout<<"Masukkan Pilihan Anda : ";
	cin>>input;
	system("cls");
	switch(input){
		case 1:
		cout<<"Masukkan nominal yang Anda inginkan : ";
		cin>>nominal;
		system("cls");
		cout<<"Masukkan pin Anda : ";
		cin>>pin;
		system("cls");
		cout<<"Selamat! Tarik tunai Anda senilai "<<nominal<<" telah berhasil"<<endl;
		cout<<endl;
		coba_lagi1:
		cout<<"Apakah Anda ingin melakukan transaksi lagi? (y/n)"<<endl;
		cout<<"Masukkan pilihan Anda : ";
		cin>>pilihan;
		 if (pilihan == 'y'){
		 system("cls");
		 goto beranda;
	   } else if (pilihan == 'n'){
		 system("cls");
		 cout<<"Terima kasih telah menggunakan program ini :) "<<endl;
	   } else {
		 cout<<"Perintah yang Anda masukkan tidak tersedia"<<endl;
		 cout<<endl;
		 goto coba_lagi1;
		}
		break;
		
		case 2:
		cout<<"Masukkan nominal yang Anda inginkan : ";
		cin>>nominal;
		system("cls");
		cout<<"Masukkan pin Anda : ";
		cin>>pin;
		system("cls");
		cout<<"Selamat! Setor tunai Anda senilai "<<nominal<<" telah berhasil"<<endl;
		cout<<endl;
		coba_lagi2:
		cout<<"Apakah Anda ingin melakukan transaksi lagi? (y/n)"<<endl;
		cout<<"Masukkan pilihan Anda : ";
		cin>>pilihan;
		 if (pilihan == 'y'){
		 system("cls");
		 goto beranda;
	   } else if (pilihan == 'n'){
		 system("cls");
		 cout<<"Terima kasih telah menggunakan program ini :) "<<endl;
	   } else {
		 cout<<"Perintah yang Anda masukkan tidak tersedia"<<endl;
		 cout<<endl;
		 goto coba_lagi2;
		}
		break;
		
		case 3:
		cout<<"Masukkan nominal yang Anda inginkan : ";
		cin>>nominal;
		system("cls");
		cout<<"Masukkan pin Anda : ";
		cin>>pin;
		system("cls");
		cout<<"Selamat! Transfer Anda senilai "<<nominal<<" telah berhasil"<<endl;
		cout<<endl;
		coba_lagi3:
		cout<<"Apakah Anda ingin melakukan transaksi lagi? (y/n)"<<endl;
		cout<<"Masukkan pilihan Anda : ";
		cin>>pilihan;
		 if (pilihan == 'y'){
		 system("cls");
		 goto beranda;
	   } else if (pilihan == 'n'){
		 system("cls");
		 cout<<"Terima kasih telah menggunakan program ini :) "<<endl;
	   } else {
		 cout<<"Perintah yang Anda masukkan tidak tersedia"<<endl;
		 cout<<endl;
		 goto coba_lagi3;
		}
		break;
	default :
		system("cls");
		cout<<"Ops! Perintah yang Anda masukkan tidak tersedia"<<endl;
		cout<<"Silakan masukkan perintah dengan benar"<<endl;
		goto beranda;
	}
	return 0;
}
