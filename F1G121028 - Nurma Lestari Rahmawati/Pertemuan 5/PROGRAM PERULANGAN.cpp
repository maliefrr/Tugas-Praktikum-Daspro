#include<iostream>

using namespace std;

int main(){
	string belanja = "kemeja" "kaos", warna = "hitam" "putih", pembayaran = "tunai",
	inputBelanja, inputWarna, inputPembayaran;
	int x = 0;
	
	//Program Perulangan Belanja
	cout<<"$$$$$xxxxxxxxxxxxxxxxxxxxxxxxxxxx$$$$$"<<endl;
	cout<<"$$$$$ Program Perulangan Belanja $$$$$"<<endl;
	cout<<"$$$$$   Nurma Lestari Rahmawati  $$$$$"<<endl;
	cout<<"$$$$$          F1G121028         $$$$$"<<endl;
	cout<<"$$$$$        ILMU KOMPUTER       $$$$$"<<endl;
	cout<<"$$$$$xxxxxxxxxxxxxxxxxxxxxxxxxxxx$$$$$"<<endl;
	cout<<endl;
	
	// Perulangan While
	while(x < 3){
		cout<<"Silahkan Masukkan Pesanan Baju Anda : ";
		cin>>inputBelanja;
		cout<<"Silahkan Masukkan Pesanan Warna Anda : ";
		cin>>inputWarna;
		cout<<"Silahkan Masukkan Metode Pembayaran Anda : ";
		cin>>inputPembayaran;
		cout<<endl;
		
		if(belanja != inputBelanja && warna != inputWarna && pembayaran != inputPembayaran){
			cout<<"Pilihan Pesanan yang Anda Masukkan Salah";
			cout<<endl;
			
			// x
			x++;
			cout<<"Anda Telah Melakukan Kesalahan Pesanan Pembelian "<< x << "Kali"<<endl;
			cout<<endl;
			
		}else {
			cout<<"Anda Telah Berhasil Memesan Pembelian"<<endl;
			cout<<endl;
		
		}
	}
	cout<<"Anda Telah Gagal Memesan Pembelian Sebanyak 3 Kali, Pesanan Terbatalkan";
	cout<<endl;
	
}
