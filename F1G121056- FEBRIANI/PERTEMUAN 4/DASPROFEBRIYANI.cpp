#include <iostream>
#include <conio.h>
using namespace std;
int main (){
  int pilihan, jumlah_sepatu, harga, total, bayar,kembali, diskon ;
  string sepatu;
   awal:
  cout<< "================================== FEBRI SHOES ================================== "<<endl;
  cout<<endl;
  cout<<endl;
  cout<< "================================== PILIHAN SEPATU ============================="<<endl;
  cout<<endl;
  cout<< " 1. adidas       : Rp. 200.000 "<< endl; 
  cout<< " 2. mizuno       : Rp. 150.000 "<< endl;
  cout<< " 3. nike airforce: Rp. 300.000 "<< endl;
  cout<< " 4. vans         : Rp. 250.000 "<< endl; 
  cout<<endl;
  
  
  	cout<<"masukkan no pilihan : ";
  	cin>> pilihan;
  	
  	 switch(pilihan){
  		case 1 :
  			sepatu = " adidas ";
  			harga = 200000;
  			cout <<"jumlah sepatu : ";
  			cin >>jumlah_sepatu;
  			total = harga*jumlah_sepatu;
  			cout<<"Total Harganya Yaitu : Rp."<<harga<<endl;
  			cout <<" DIBAYAR : Rp.";
			cin>>bayar;
  			if(bayar>harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>pilihan;
				if(pilihan =='Y'){
					system("cls");
					goto awal;
				}
				else{
					cout<<endl;
					cout<<"Terimakasih sudah memesaan di FEBRI SHOES ";
			}
			}
  		
  	break;
  		case 2 :
  			sepatu = " mizuno ";
  			harga = 150000;
  			cout <<"jumlah sepatu : ";
  			cin >>jumlah_sepatu;
  			total = harga*jumlah_sepatu;
  			cout<<"Total Harganya Yaitu : Rp."<<harga<<endl;
  			cout <<" DIBAYAR : Rp.";
			cin>>bayar;
  			if(bayar>harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>pilihan;
				if(pilihan =='Y'){
					system("cls");
					goto awal;
				}
				else{
					cout<<endl;
					cout<<"Terimakasih sudah memesaan di FEBRI SHOES ";
			}
			}
	break;
		case 3 :
  			sepatu = " nike airforce ";
  			harga = 300000;
  			cout <<"jumlah sepatu : ";
  			cin >>jumlah_sepatu;
  			total = harga*jumlah_sepatu;
  			cout<<"Total Harganya Yaitu : Rp."<<harga<<endl;
  			cout <<" DIBAYAR : Rp.";
			cin>>bayar;
  			if(bayar>harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>pilihan;
				if(pilihan =='Y'){
					system("cls");
					goto awal;
				}
				else{
					cout<<endl;
					cout<<"Terimakasih sudah memesaan di FEBRI SHOES ";
			}
			}
	break;
  		case 4 :
  			sepatu = " vans ";
  			harga = 250000;
  			cout <<"jumlah sepatu : ";
  			cin >>jumlah_sepatu;
  			total = harga*jumlah_sepatu;
  			cout<<"Total Harganya Yaitu : Rp."<<harga<<endl;
  			cout <<" DIBAYAR : Rp.";
			cin>>bayar;
  			if(bayar>harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>pilihan;
				if(pilihan =='Y'){
					system("cls");
					goto awal;
				}
				else{
					cout<<endl;
					cout<<"Terimakasih sudah memesaan di FEBRI SHOES ";
			}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup silahkan pesan ulang \n";
				system("cls");
				system("pause");
				goto awal;
			}
			break;
			default:
			cout<<"Masukkan Nomor Pesanan Yang sesuai \n";	  
	  
	  		
  	}
}
