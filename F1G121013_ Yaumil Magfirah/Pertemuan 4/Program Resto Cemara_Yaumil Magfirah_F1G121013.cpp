#include <iostream>
using namespace std;

int main(){

	int nasgor, Jumlah_porsi , harga_1, harga_2, harga_3, harga_total;
	char pilihan;
	awal:
	cout<<"============================== RESTO CEMARA ========================== "<<endl;
	cout<<" Selamat datang di resto kami silahkan memesan menu anda di daftar menu"<<endl;
	cout<<" Daftar menu = "<<endl;
	cout<<" 1. nasi goreng siput   Rp 18.000 " <<endl;
	cout<<" 2. nasi goreng ayam    Rp 15.000 " <<endl;
	cout<<" 3. nasi goreng kambing Rp 20.000 " <<endl;
	cout<<"======================================================================= "<<endl;
	harga_1= 18000;
	harga_2= 15000;
	harga_3= 20000;
	cout<<"masukkan pilihan menu anda = ";
	cin >> nasgor;
	switch(nasgor){
		case 1:
			cout<<"masukkan jumlah porsi nasi goreng siput yang ingin anda pesan = ";
			cin>>Jumlah_porsi;{
			system ("cls");
			}harga_total = Jumlah_porsi * harga_1;
			cout<< "harga_total = "<< Jumlah_porsi * harga_1<< " Rp "<<endl;
			cout<<" nasi goreng siput " << Jumlah_porsi << " porsi anda siap diantarkan dengan harga " << harga_total << " Rp " <<endl;
			nasgor_siput:
			cout<<"apakah anda ingin memesan lagi? (y/n)"<<endl;
			cout<<"masukkan pilihan anda = ";
			cin>>pilihan;
			if(pilihan == 'y'){
		    	system("cls");
		    	goto awal;
		    }	else if(pilihan == 'n'){
		    		system("cls");
		    		cout<<"Terimakasih telah berkunjung di resto kami"<<endl;
			}		else{
						cout<<"pilihan yang anda masukkan salah";
						goto nasgor_siput;
			}
			break;
		case 2:
			cout<<" masukkan jumlah porsi nasi goreng ayam yang ingin anda pesan = ";
			cin>>Jumlah_porsi;{
			system("cls");
			}harga_total = Jumlah_porsi * harga_2;
			cout<< "harga_total = "<< Jumlah_porsi * harga_2<< " Rp "<<endl;
			cout<<" nasi goreng siput " << Jumlah_porsi << " porsi anda siap diantarkan dengan harga " << harga_total << " Rp " <<endl;
			cout<<" nasi goreng ayam " <<Jumlah_porsi<< " porsi anda siap diantarkan "<<endl;
			nasgor_ayam:
			cout<<"apakah anda ingin memesan lagi? (y/n)"<<endl;
			cout<<"masukkan pilihan anda = ";
			cin>>pilihan;
			if(pilihan == 'y'){
		    	system("cls");
		    	goto awal;
		    }	else if(pilihan == 'n'){
		    		system("cls");
		    		cout<<"Terimakasih telah berkunjung di resto kami"<<endl;
			}		else{
						cout<<"pilihan yang anda masukkan salah";
						goto nasgor_ayam;
			}
			break;
		case 3:
			cout<<" masukkan jumlah porsi nasi goreng kambing yang ingin anda pesan = ";
			cin>>Jumlah_porsi;{
			system("cls");
			}harga_total = Jumlah_porsi * harga_3;
			cout<< "harga_total = "<< Jumlah_porsi * harga_3<< " Rp "<<endl;
			cout<<" nasi goreng siput " << Jumlah_porsi << " porsi anda siap diantarkan dengan harga " << harga_total << " Rp " <<endl;

			cout<<"nasi goreng kambing " <<Jumlah_porsi<< " porsi anda siap diantarkan"<<endl;
			nasgor_kambing:
			cout<<"apakah anda ingin memesan lagi? (y/n)"<<endl;
			cout<<"masukkan pilihan anda = ";
			cin>>pilihan;
			if(pilihan == 'y'){
		    	system("cls");
		    	goto awal;
		    }	else if(pilihan == 'n'){
		    		system("cls");
		    		cout<<"Terimakasih telah berkunjung di resto kami"<<endl;
			}		else{
						cout<<"pilihan yang anda masukkan salah";
						goto nasgor_kambing;
			}
		
		break;
		default :
			system("cls");{
			cout<<"menu yang anda pilih tidak terdaftar di pilihan menu"<<endl;
			cout<<"silahkan lihat daftar pilihan menu yang tertera"<<endl;
			goto awal;
		}
	}
}
