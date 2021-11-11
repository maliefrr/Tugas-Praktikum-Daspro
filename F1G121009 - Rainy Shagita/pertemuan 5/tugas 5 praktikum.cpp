#include<iostream>
using namespace std;

int main(){
	cout<<"Nama    : Rainy Shagita "<<endl;
	cout<<"Nim     : F1G121009 "<<endl;
	cout<<"Jurusan : Ilmu Komputer "<<endl;
	
	cout<<"=====================TUGAS PEMROGRAMAN====================="<<endl;
	
	//penggunaa for
	int awal, akhir;
	cout<<"mulai berpa  : ";
	cin>>awal;
	cout<<"sampai berapa  : ";
	cin>>akhir;
	for(int a = awal; a <= akhir; a++){
		cout<<a<<" .gita cantik"<<endl;
	}
	cout<<"selesai"<<endl;
	//penggunaan while
	cout<<"masukkan nilai awal :  ";
	cin>>awal;
	cout<<"sampai akhir :  ";
	cin>>akhir;
	int a = awal;
	while(a <= akhir){
		cout<<a<<" .gita cantik"<<endl;
		a++;
	}
	cout<<"selesai"<<endl;
	//penggunaan do-while
	cout<<"masukkan nilai awal :  ";
	cin>>awal;
	cout<<"sampai akhir : ";
	cin>>akhir;
	do{
		cout<<a<<" .gita cantik"<<endl;
		a++;
	}
	while(a <= akhir);
	cout<<"selesai"<<endl;
	
	
}
