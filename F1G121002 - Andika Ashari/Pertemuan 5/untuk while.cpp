#include<iostream>
using namespace std;
	int main() {
	system("color a");
	
	cout<< "=========== PROGRAM SEDERHANA ===========" << endl;
	cout<< "Nama 		: Andika Ashari\n";
	cout<< "NIM 		: F1G121002\n";
	cout<< "Prodi 		: Ilmu Komputer\n";
	cout<< "Fakultas 	: MIPA\n";
	cout<< "=========================================" << endl;
		//while
		int x,y;
			cout<<"masukan angka pertama = ";
			cin>>x;
			cout<<"masukan batas penjumlahan yang anda ingin anda lakukan = ";
			cin>>y;
			
		while(x<=15){
		x++;// bisa juga menggunakan x = x + x, tapi sama saja
		cout<<x<<"+"<<x<<"="<<x+x<<endl;
		}
			
					
	}
