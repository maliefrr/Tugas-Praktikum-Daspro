#include<iostream>
using namespace std;
int main(){
	int satu,dua,tiga,batas,jumlah;
	cout<<"******************************************** \n";
	cout<<"Tugas Perulangan Praktikum Daspro Pertemuan 5 \n";
	cout<<"Input Bilangan Pertama : ";
	cin>>satu;
	cout<<"Input Bilangan Kedua : ";
	cin>>dua;
	cout<<"Input Bilangan Ketiga : ";
	cin>>tiga;
	cout<<"sampai batas : ";
	cin>>batas;
	cout<<"Perulangan For : \n";
	for(satu;satu<=batas;satu+=2){
		jumlah=satu+dua+tiga;
		cout<<satu+jumlah<<"  ";
	}
	cout<<"\n\n\n";
	cout<<"Perulangan While : \n";
	while(dua<=batas){
		jumlah=satu+dua+tiga;
		cout<<dua+jumlah<<"  ";
		dua+=3;
	}
	cout<<"\n\n\n";
	cout<<"Perulangan Do While : \n";
	do{
		jumlah=satu+dua+tiga;
		cout<<tiga+jumlah<<"  ";
		tiga+=4;
	}while(tiga<=batas);
}

