#include <conio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int P,B,K;
	char U;
	string Nama;
	
	
	cout<<"Masukan Nama Anda = "; 
	getline(cin, Nama);
	system("cls");
	
	do{
	
	cout<<"=== SELAMAT DATANG DI RESTORAN KAMI ==="<<endl;
	cout<<"\nSilahkan Pilih Menu Yang Akan Anda Pesan";
	cout<<"\n1."<<"Makanan";
	cout<<"\n2."<<"Minuman";
	cout<<"\nMasukan Pilihan Anda, "<<Nama<<"=";
	cin>>K;
	
	switch(K)
	{
	case 1: 
	system("cls");
	cout<<"Silahkan Pilih Menu Makanan Anda,"<<Nama;
	cout<<"\n1."<<"Nasi Ayam Geprek";
	cout<<"\n2."<<"Nasi Ayam Crispy";
	cout<<"\nMasukan Pilihan Anda =";
	cin>>P;
		if(P==1){
			cout<<"\nHarga Rp 10.000"<<endl;
		} else if(P==2){
			cout<<"\nHarga Rp 8.000"<<endl;
		} else {
			cout<<"\nPilihan yang anda masukan salah!!!";
			
		}
		break;
		case 2:
			system("cls");
		cout<<"Silahkan Memilih Menu Minuman Yang Ada di Restoran Kami,"<<Nama;
		cout<<"\n1."<<"Es Teh";
		cout<<"\n2."<<"Jus Jeruk";
		cout<<"\nMasukan Pilihan Anda =";
		cin>>B;
		if(B==1){
			cout<<"\nHarga Rp 2.000"<<endl;
		} else if(B==2){
			cout<<"\nHarga Rp 4.000"<<endl;
		} else {
			cout<<"\nPilihan yang anda masukan salah!!!";
			}
			break;
	default : cout<<"Menu Tidak Ada"<<endl;
	break;
}
	cout<<"Apakah Masih Ada Menu yang Ingin Anda Pesan (y/n)";
	cin>>U;
	} while(U== 'y');
	
	return 0;
	
}
