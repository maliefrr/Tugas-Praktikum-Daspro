#include<iostream>
using namespace std;
int main(){
	int b;
	float uang;
	string mobil1,mobil2,mobil3;
	beli:
		cout<<"Pemilihan Mobil \n";
		cout<<"1. Mobil Toyota \n2. Mobil Kijang \n3. Mobil Honda \n";
		cout<<"Tuliskan pesanan nomor mobil mana yang Anda suka \n";
		cin>>b;
		switch (b){
			case 1 :
				cout<<"Anda memilih Mobil Toyota\n";
				cout<<"Dengan harga : Rp200.000.000 \n";
				cout<<"Masukan Jumlah Uang Anda: Rp";
				cin>>uang;
				if(uang>=200000000){
					cout<<"Uang yang Anda miliki cukup untuk Membeli Mobil Toyota \n";
					cout<<"Dengan Harga Rp200.000.000 \n";
					cout<<"Uang yang Anda miliki adalah "<<uang<<endl;
					cout<<"Sisa uang yang Anda miliki "<<uang-200000000<<endl; 
				}
				else{
					system("cls");
					cout<<"Uang yang anda miliki tidak cukup \n";
					cout<<"Uang yang Anda miliki adalah "<<uang<<endl;
					goto beli;
			}
			break;
			case 2 :
				cout<<"Anda memilih Mobil Kijang \n";
				cout<<"Dengan harga : Rp100.000.000 \n";
				cin>>uang;
				if(uang>=100000000){
					cout<<"Uang yang Anda miliki cukup untuk Membeli Mobil Kijang \n";
					cout<<"Dengan Harga Rp100.000.000 \n";
					cout<<"Uang yang Anda miliki adalah "<<uang<<endl;
					cout<<"Sisa uang yang Anda miliki "<<uang-1000000000<<endl; 
				}
				else{
					system("cls");
					cout<<"Uang yang anda miliki tidak cukup \n";
					cout<<"Uang yang Anda miliki adalah "<<uang<<endl; 
					goto beli;
			}
				break;
			case 3 :
			cout<<"Anda memilih Mobil Honda \n";
				cout<<"Dengan harga : Rp300.000.000 \n";
				cin>>uang;
				if(uang>=300000000){
					cout<<"Uang yang Anda miliki cukup untuk Membeli Mobil Honda \n";
					cout<<"Dengan Harga Rp300.000.000 \n";
					cout<<"Uang yang Anda miliki adalah "<<uang<<endl;
					cout<<"Sisa uang yang Anda miliki "<<uang-300000000<<endl; 
				} 
				else{
					system("cls");
					cout<<"Uang yang anda miliki tidak cukup \n";
					cout<<"Uang yang Anda miliki adalah "<<uang<<endl;
					goto beli;
			}
				break;
			default:
				system ("cls");
				cout<<"Masukkan pilihan yang sesuai \n";	
				goto beli;
						
		}
	}
