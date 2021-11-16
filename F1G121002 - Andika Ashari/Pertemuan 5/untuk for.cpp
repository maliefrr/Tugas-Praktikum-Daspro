#include<iostream>
using namespace std;

int main(){
	system("color a");
	
	cout<< "=========== PROGRAM SEDERHANA ===========" << endl;
	cout<< "Nama 		: Andika Ashari\n";
	cout<< "NIM 		: F1G121002\n";
	cout<< "Prodi 		: Ilmu Komputer\n";
	cout<< "Fakultas 	: MIPA\n";
	cout<< "=========================================" << endl;
	
	cout<<"===========program pengulangan===========" <<endl;
		int x,y,z,total,sampai;
		
		cout<<endl;
		cout<<"masukkan angka pertama = ";
		cin>>x;
		cout<<"masukkan angka kedua = ";
		cin>>y;
		cout<<"masukkan angka ketiga = ";
		cin>>z;
		cout<<" ingin sampai berapa = ";
		cin>>sampai; 
		cout<<endl;
	for(x;x<=sampai;x++){
		total = x + y + z;
		cout<<x<<" + "<<total<<" = "<<x + total<<endl;
	}
}
