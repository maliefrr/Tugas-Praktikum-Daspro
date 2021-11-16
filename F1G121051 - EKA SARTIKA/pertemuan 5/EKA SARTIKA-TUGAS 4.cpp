#include<iostream>
using namespace std;

int main(){
	int harga_baju, batas_baju;
	
	//perulangan for//
	cout<<"------instruksi perulangan for------"<<endl;
	cout<<"Masukkan mulai dari berapa harga_baju yang ingin anda beli : ";
	cin>>harga_baju;
	cout<<"Masukkan harga batas_baju yang bisa di beli : ";
	cin>>batas_baju;
	   for(int e = harga_baju; e<=batas_baju; e+=15000){
	   cout<<"harga baju yang akan anda beli : "<<e<<endl;
	   }
	   
	//perulangan while//
	cout<<"\n";
	cout<<"------instruksi perulangan while------"<<endl;
	int harga_celana, batas_celana;
	cout<<"Masukkan mulai dari berapa harga_celana yang akan anda beli : ";
	cin>>harga_celana;
	cout<<"Masukkan harga batas_celana yang akan di beli : ";
	cin>>batas_celana;
		while(harga_celana<=batas_celana){
		cout<<"celana yang anda beli seharga : "<<harga_celana<<endl;
		harga_celana+=20000;
		}
		
	//perulangan do while//
	cout<<"\n";
	cout<<"------instruksi perulangan do while------"<<endl;
	int harga_hijab, batas_hijab, total;
	string ulang;
	do{
		cout<<"masukkan harga hijab yang akan anda beli  : ";
		cin>>harga_hijab;
		cout<<"masukkan harga baju yang akan anda beli   : ";
		cin>>harga_baju;
		cout<<"masukkan harga celana yang akan anda beli : ";
		cin>>harga_celana;
		total = harga_hijab + harga_baju + harga_celana;
		cout<<"Total belanjaan anda adalah  =  "<<total<<endl;
		cout<<"apakah anda ingin ulangi total belanjaan (y/n) : ";
		cin>>ulang;
	}while(ulang == "y");
		cout<<"terima kasih telah berbelanja :) "<<endl;	

return 0;		
}
	


