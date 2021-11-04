#include<iostream>
using namespace std;

int main(){
	int uang,harga_makanan1,harga_makanan2,harga_makanan3,harga_makanan4,a,kembalian;
	
	cout<<"=== Program Menu Rumah Makan Anggun Pratiwi ===\n \n";
	cout<<"1. Ayam Bakar (Rp.35.000)\n2. Nasi Goreng (Rp.20.000)\n3. Es Jeruk (Rp. 8.000)\n4. Pangsit (Rp. 15.000)\n"<<endl;
	cout<<"Jumlah uang anda: ";
	cin>>uang;
	cout<<"Pilih Menu anda : ";
	cin>>a;

	switch(a){
		case 1:
			harga_makanan1 = 35000;
			if(uang >= harga_makanan1){
				cout<<"Selamat pembelian anda berhasil"<<endl;
				 kembalian = uang - harga_makanan1;
				cout<<"Total kembalian anda adalah = "<<kembalian<<endl;
			}
			else{
				cout<<"Uang anda kurang"<<endl;
			}
			break;
		case 2:
			harga_makanan2 = 20000;
			if(uang >= harga_makanan2){
				cout<<"Selamat pembelian anda berhasil"<<endl;
				 kembalian = uang - harga_makanan2;
				cout<<"Total kembalian anda adalah = "<<kembalian<<endl;
			}
			else{
				cout<<"Uang anda kurang"<<endl;
			}
			break;
		case 3:
			harga_makanan3 = 8000;
			if(uang >= harga_makanan3){
				cout<<"Selamat pembelian anda berhasil"<<endl;
				 kembalian = uang - harga_makanan3;
				cout<<"Total kembalian anda adalah = "<<kembalian<<endl;
			}
			else{
				cout<<"Uang anda kurang"<<endl;
			}
			break;
			
		case 4:
			harga_makanan4 = 15000;
			if(uang >= harga_makanan4){
				cout<<"Selamat pembelian anda berhasil"<<endl;
				 kembalian = uang - harga_makanan4;
				cout<<"Total kembalian anda adalah = "<<kembalian<<endl;
			}
			else{
				cout<<"Uang anda kurang"<<endl;
			}
			break;
	}	
	
	return 0;
}
