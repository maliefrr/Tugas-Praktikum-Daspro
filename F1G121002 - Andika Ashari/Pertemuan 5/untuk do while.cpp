#include<iostream>
using namespace std;
	int main() {
	system("color a");
	
	cout<< "=========== PROGRAM SEDERHANA ===========" << endl;
	cout<< "Nama 		: Andika Ashari\n";
	cout<< "NIM 		: F1G121002\n";
	cout<< "Prodi 		: Ilmu Komputer\n";
	cout<< "Fakultas 	: MIPA\n";
	cout<< "=========================================" << endl;	//do while
		int x,y;//variabel
			cout<<"masukan angka pertama = ";
			cin>>x;
			cout<<"masukan batas penjumalahan yang anda inginkan = ";
			cin>>y;
				
		do {
		cout<<x<<"+"<<x<<"="<<x+x<<endl;
		x = x + x;//atau bisa menggunakan x++ agar lebih mudah dan singgkat
		}
		while(x<=y);
		}
			

