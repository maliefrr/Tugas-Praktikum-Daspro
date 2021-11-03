#include <iostream>
#include <conio.h>

	using namespace std;
	
int main(){

	system("color a");
	int inputuser,jumlah;
	char pilihan;
	
	cout<<endl;
	awal:
	cout<<"============SELAMAT DATANG DI WARUNG MAKAN PRIMA============"<<endl;
	cout<<endl;
	cout<<"=====MENU MAKAN====="<<endl;
	cout<<endl;
	cout<<" 1. AYAM GEPREK "<<endl;
	cout<<" 2. AYAM RENDANG"<<endl;
	cout<<" 3. AYAM RICA RICA"<<endl;
	cout<<endl;
	
	cout<<"masukan pilihan anda =";
	cin>>inputuser;
	
	switch (inputuser){
		case 1:
	
			cout<<"harga menu Rp.10.000/porsi";
			cout<<" masukan jumlah pesanan anda = ";
			cin>>jumlah;
			system("cls");
			cout<<"total pembayaran"<<jumlah*10000<<endl;
			cout<<"ayam geprek porsi"<<jumlah*10000<<"pemesanan anda berhasil"<<endl;
			ulang_ayam_geprek:
			cout<<"apakah anda ingin melakukan pemesanan ulang ???? (Y/N)" <<endl;
			cout<<"masukan pilihan anda =";
			cin>>pilihan;
		
			if(pilihan == 'Y'){
			system("cls");
			goto awal;
			} else if(pilihan == 'N'){
			system("cls");
			cout<<"terima kasih anda telah memesan di warung makan kami :)";
			cout<<endl;
			cout<<" selamat mencicipi :)";
			} else{
			cout<<"input yang anda masukan salah";
			goto ulang_ayam_geprek;
			}
	 		break;
		case 2:
			cout<<"harga menu Rp.10.000/porsi";
			cout<<" masukan jumlah pesanan anda = ";
			cin>>jumlah;
			system("cls");
			cout<<"total pembayaran"<<jumlah*10000<<endl;
			cout<<" ayam rendang "<<jumlah*10000<<"pemesanan anda berhasil"<<endl;
			ulang_ayam_rendang:
			cout<<"apakah anda ingin melakukan pemesanan ulang ???? (Y/N)" <<endl;
			cout<<"masukan pilihan anda =";
			cin>>pilihan;
		
			if(pilihan == 'Y'){
			system("cls");
			goto awal;
			} else if(pilihan == 'N'){
			system("cls");
			cout<<"terima kasih anda telah memesan di warung makan kami :)";
			cout<<endl;
			cout<<" selamat mencicipi :)";
			} else{
			cout<<"input yang anda masukan salah";
			goto ulang_ayam_rendang;
			}
	 	break;
	case 3:	
			cout<<"harga menu Rp.10.000/porsi";
			cout<<" masukan jumlah pesanan anda =";
			cin>>jumlah;
			system("cls");
			cout<<"total pembayaran"<<jumlah*10000<<endl;
			cout<<" ayam rica-rica "<<jumlah*10000<<"pemesanan anda berhasil"<<endl;
			ulang_ayam_rica_rica:
			cout<<"apakah anda ingin melakukan pemesanan ulang ???? (Y/N)" <<endl;
			cout<<"masukan pilihan anda =";
			cin>>pilihan;
		
			if(pilihan == 'Y'){
			system("cls");
			goto awal;
			} else if(pilihan == 'N'){
			system("cls");
			cout<<"terima kasih anda telah memesan di warung makan kami :)";
			cout<<endl;
			cout<<" selamat mencicipi :)";
			} else{
			cout<<"input yang anda masukan salah";
			goto ulang_ayam_rica_rica;
			}
			break;
			default:
			system("cls");
			cout<<"input yang anda masukan salah"<<endl;
			goto awal;
	}
	
}
