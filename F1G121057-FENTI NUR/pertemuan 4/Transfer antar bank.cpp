#include<iostream>
using namespace std;
int main ()
{
	
	string pin,pin1;
	
	cout<<"============================================== "<<endl;
	cout<<"		TRANSFER"<<endl;
	cout<<"		ANTAR BANK"<<endl;
	cout<<"============================================== "<<endl;
	cout<<"masukkan Pin Anda	: ";
	getline(cin,pin);
	cout<<"\n\n";
		
	login:
	cout<<"Masukan Kembali Pin Anda"<<endl;
	cout<<"Masukan pin		: ";
	getline(cin,pin1);

	if(pin1 == pin)
	
	{
		cout<<"Akun Anda sudah benar "<<endl;
		system("cls");
		goto welcome;
	
	}
	else
	
		cout<<"Pin Anda salah, coba lagi!! "<<endl;
		cout<<"\n\n";
		goto login;
				
	welcome:
	int jumlah, input,norek;
	char pilihan;
	awal :
	cout<<"Pilih Bank Tujuan"<<endl;
	cout<<"1.Bank BNI"<<endl<<"2.Bank BRI"<<endl<<"3.Bank BPD"<<endl;
	cout<<"Masukan Pilihan Anda :";
	cin>>input;
		system ("cls");
	switch (input){
		case 1:
		ulang:
		cout<<"Masukan Jumlah Nominal Yang Anda Transfer :";
		cin>>jumlah;
		cout<<"Masukan Nomor Rekening Tujuan :";
		cin>>norek;
			system("cls");
		cout<<"Anda Telah Melakukan Transfer Sebesar"<<endl<<"RP"<<jumlah<< "ke Pengguna Bank BNI"<<endl<< "dengan nomor rekening tujuan" <<norek<<endl;
		cout<<"\n\n";
		cout<<"Apakah Anda Ingin Melakukan Transfer ulang? (y/n) "<<endl;
		cout<<"Masukan Pilihan Anda :";
		cin>>pilihan;
		if(pilihan=='y'){
			system ("cls");
		goto ulang;
		}else if (pilihan=='n'){
			system("cls");
			cout<<"Terima Kasih Telah Menggunakan Program Kami";
		}else{
			cout<<"Input Yang Anda Masukan Salah"	;
			goto awal;
		}
		break;
	case 2:
		ulang1:
		cout<<"Masukan Jumlah Nominal Yang Anda Transfer :";
		cin>>jumlah;
		cout<<"Masukan Nomor Rekening Tujuan :";
		cin>>norek;
		system("cls");
		cout<<"Anda Telah Melakukan Transfer Sebesar"<<endl<<"RP" <<jumlah<< "ke Pengguna Bank BRI"<<endl<<"dengan nomor rekening tujuan"<<norek<<endl;
		cout<<"Apakah Anda Ingin Melakukan Transfer ulang? (y/n) "<<endl;
		cout<<"Masukan Pilihan Anda :";
		cin>>pilihan;
		if(pilihan=='y'){
			system ("cls");
			goto ulang1;
		}else if (pilihan=='n'){
			system("cls");
			cout<<"Terima Kasih Telah Menggunakan Program Kami";
		}else{
			cout<<"Input Yang Anda Masukan Salah"	;
			goto awal;
		}
		break;
	case 3:
		ulang2:
		cout<<"Masukan Jumlah Nominal Yang Anda Transfer :";
		cin>>jumlah;
		cout<<"Masukan Nomor Rekening Tujuan :";
		cin>>norek;
		system("cls");
		cout<<"Anda Telah Melakukan Transfer Sebesar"<<endl<<"RP" <<jumlah<< "ke Pengguna Bank BPD"<<endl<<"dengan nomor rekening tujuan"<<norek<<endl;
		cout<<"Apakah Anda Ingin Melakukan Transfer ulang? (y/n) "<<endl;
		cout<<"Masukan Pilihan Anda :";
		cin>>pilihan;
		if(pilihan=='y'){
			system ("cls");
			goto ulang2;
		}else if (pilihan=='n'){
			system("cls");
			cout<<"Terima Kasih Telah Menggunakan Program Kami";
		}else{
			cout<<"Input Yang Anda Masukan Salah"	;
			goto awal;
		}
		break;	
	default :
		system("cls");
		cout<<"Input Yang Anda Masukan Salah"<<endl;
		goto awal;
		
	}
	
	
	
}
