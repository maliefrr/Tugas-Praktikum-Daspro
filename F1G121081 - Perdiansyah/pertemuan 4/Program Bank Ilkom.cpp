#include<iostream>

using namespace std;

int main(){
	int inputuser,jmlh_uang,jmlh_saldo,saldo=10000000;
	char pilihan;
	awal:
	cout<<"======== Bank Ilkom ========= "<<endl;
	cout<<"1. Cek Saldo "<<endl;
	cout<<"2. Tarik Tunai "<<endl;
	cout<<"3. Isi Saldo "<<endl;
	cout<<"============================="<<endl;
	cout<<"Input Pilihan Anda: ";
	cin>>inputuser;
	cout<<endl;
	switch(inputuser){
		case 1:
			goto cek_saldo;
			break;
			system("cls");
			
		case 2:
			goto tarik_tunai;
			break;
			system("cls");
		
		case 3:
			goto isi_saldo;
			break;
			system("cls");
			
		default:
			cout<<"Tulis Ulang PIlihanmu"<<endl;
			goto awal;
	}
	
cek_saldo:
	cout<<"======== Cek Saldo ========="<<endl<<endl;
	cout<<"Sisa Saldo Anda Adalah: Rp"<<saldo<<endl;
	cout<<"Ingin Kembali ke Menu? (y/n) : ";
	cin>>pilihan;
	if(pilihan == 'y'){
		system("cls");
		goto awal;
	}
	else {
		system("cls");
		cout<<"Terima Kasih Telah Menggunakan Bank Ilkom"<<endl;
		return 1;
	}
				
tarik_tunai:
	cout<<"======== Tarik Tunai ========="<<endl<<endl;
	cout<<"Masukan Jumlah Uang Yang Akan Anda Tarik : Rp";
	cin>>jmlh_uang;
	cout<<endl;
	if (jmlh_uang <= saldo){
		system("cls");
		cout<<"Uang Yang Anda Tarik Sebesar: Rp"<<jmlh_uang<<endl;
		cout<<"Sisa Saldo Anda Adalah: Rp"<<saldo-jmlh_uang<<endl;
		cout<<"Silahkan Tunggu Uang Anda Akan Keluar!";
		return 1;
	}
	else {
		cout<<"Saldo Anda Tidak Mencukupi Untuk Melakukan Penarikan"<<endl;
		goto cek_saldo;
		return 1;		
	}
	
isi_saldo:
	cout<<"Masukan Jumlah Saldo Yang Akan Anda Isi; Rp";
	cin>>jmlh_saldo;
	system("cls");
	cout<<"Saldo Anda Sekarang Adalah : Rp"<<jmlh_saldo+saldo<<endl;
	cout<<"Ingin Kembali ke Menu? (y/n) : ";
	cin>>pilihan;
	if(pilihan == 'y'){
		system("cls");
		goto awal;
	}
	else {
		system("cls");
		cout<<"Terima Kasih Telah Menggunakan Bank Ilkom"<<endl;	
	}
	return 0;
		
}

