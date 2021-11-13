#include<iostream>
using namespace std;

int main(){
	int b,c,d,e,hasil;
	cout<<"-------------- Tugas Praktikum Daspro -------------- \n";
	cout<<"Untuk Perulangan For, While, Do While \n";
	cout<<"Nama			: Asar Ardianto \n";
	cout<<"NIM			: F1G121042\n";
	cout<<"----------------------------------------------------\n";
	cout<<"Input Untuk Bilangan Pertama : "; 
	cin>>b;
	cout<<"Input Untuk Bilangan Kedua : ";
	cin>>c;
	cout<<"Input Untuk Bilangan Ketiga : ";
	cin>>d;
	cout<<"sampai : ";
	cin>>e;
	cout<<"--------------------------------------------------- \n";
	cout<<"for loop : "<<endl;
	hasil=1+2+3;
	for(b;b<=e;b++){
		cout<<b+hasil<<"  ";	
	}
	cout<<endl;
	cout<<"While Loop : "<<endl;
	while(c<=e){
		cout<<c+hasil<<"  ";
		c++;
	}
	cout<<endl;
	cout<<"Do While Loop : "<<endl;
	do{
		cout<<d+hasil<<"  ";
		d++;
	}while(d<=e);
}
