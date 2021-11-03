 #include<iostream>
#include <conio.h>
using namespace std;
int main(){
	int inputUser,jumlah;
	char pilihan;
	awal:
	cout<<"==========SELAMAT DATANG DI PAS RENTAL CAR KENDARI==========="<<endl;
	cout<<"============PROJECT BY I MADE ALIT DWI SAPUTRA============"<<endl;
	cout<<"1.Mobil Avanza"<<endl<<"2.Mobil Xenia"<<endl<<"3.Mobil Inova"<<endl;
	cout<<"Masukkan Pilihan Anda : ";
	cin>>inputUser;
	switch(inputUser){
		case 1:
			cout<<"Masukan jumlah Mobil Avanza Yang ingin Anda pakai: ";
			cin>>jumlah;
			system("cls");
			cout<<"Mobil Avanza "<<jumlah<<" untuk satu hari";
			ulang_avanza:
			cout<<"apakah anda ingin mengganti jumlah unit ?? (y/n)"<<endl;
			cout<<"Masukan Pilihan Anda : ";
			cin>>pilihan;
			if(pilihan == 'y'){
		    	system("cls");
				goto awal;
			}   else if(pilihan == 'n'){
				system("cls");
				cout<<"Terima Kasih Atas Kunjungan Anda";
			}   else{
				cout<<"input yang anda masukan salah";
				goto ulang_avanza;
			}
			break;
		case 2:
			cout<<"Masukan jumlah Mobil Xenia Yang ingin Anda pakai: ";
			cin>>jumlah;
			system("cls");
			cout<<"Mobil Xenia "<<jumlah<<" untuk satu hari";
			ulang_xenia:
			cout<<"apakah anda ingin mengganti jumlah unit ?? (y/n)"<<endl;
			cout<<"Masukan Pilihan Anda : ";
			cin>>pilihan;
			if(pilihan == 'y'){
		    	system("cls");
				goto awal;
			}   else if(pilihan == 'n'){
				system("cls");
				cout<<"Terima Kasih Atas Kunjungan Anda";
			}   else{
				cout<<"input yang anda masukan salah";
				goto ulang_xenia;
			}
			break;
		case 3 :
			cout<<"Masukan jumlah Mobil Inova Yang ingin Anda pakai: ";
			cin>>jumlah;
			system("cls");
			cout<<"Mobil Inova "<<jumlah<<" untuk satu hari";
			ulang_Inova:
			cout<<"apakah anda ingin mengganti jumlah unit ?? (y/n)"<<endl;
			cout<<"Masukan Pilihan Anda : ";
			cin>>pilihan;
			if(pilihan == 'y'){
		    	system("cls");
				goto awal;
			}   else if(pilihan == 'n'){
				system("cls");
				cout<<"Terima Kasih Atas Kunjungan Anda";
			}   else{
				cout<<"input yang anda masukan salah";
				goto ulang_Inova;
			}
			break;
		default :
		    system("cls");					
	}
}
