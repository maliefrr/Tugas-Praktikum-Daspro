 #include<iostream>
#include <conio.h>
using namespace std;
int main(){
	int inputUser,jumlah;
	char pilihan;
	awal:
	cout<<"==========SELAMAT DATANG DI LAPAK YOGI SAPUTRA==========="<<endl;
	cout<<"============PROJECT BY YOGI SAPUTRA============"<<endl;
	cout<<"1.Ayam Bangkok"<<endl<<"2.Ayam Philipin"<<endl<<"3.Ayam Kampung"<<endl;
	cout<<"Masukkan Pilihan Anda : ";
	cin>>inputUser;
	switch(inputUser){
		case 1:
			cout<<"Masukan jumlah ayam bangkok yang anda beli: ";
			cin>>jumlah;
			system("cls");
			cout<<"ayam bangkok "<<jumlah<<" untuk satu ekor";
			ulang_bangkok:
			cout<<"apakah anda ingin mengganti jumlah ayam ?? (y/n)"<<endl;
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
				goto ulang_bangkok;
			}
			break;
		case 2:
			cout<<"Masukan jumlah ayam philipin yang Anda beli: ";
			cin>>jumlah;
			system("cls");
			cout<<"Ayam Philipin "<<jumlah<<" untuk satu ekor";
			ulang_philipin:
			cout<<"apakah anda ingin mengganti jumlah ayam?? (y/n)"<<endl;
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
				goto ulang_philipin;
			}
			break;
		case 3 :
			cout<<"Masukan jumlah ayam kampung yang anda beli: ";
			cin>>jumlah;
			system("cls");
			cout<<"ayam kampung "<<jumlah<<" untuk satu ekor";
			ulang_kampung:
			cout<<"apakah anda ingin mengganti jumlah ayam ?? (y/n)"<<endl;
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
				goto ulang_kampung;
			}
			break;
		default :
		    system("cls");					
	}
}
