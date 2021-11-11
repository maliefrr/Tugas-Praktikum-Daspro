#include<iostream>
using namespace std;

int main(){
	int bil_a,bil_b,bil_c,jumlah,batas;
	cout<<"---------------------------------------------- \n";
	cout<<"XXXXXXXXXX| Tugas Praktikum Daspro |XXXXXXXXXX \n";
	cout<<"Aswan"<<endl;
	cout<<"F1G121043"<<endl;
	cout<<"---------------------------------------------- \n";
	cout<<"Input Bilangan Pertama = ";
	cin>>bil_a;
	cout<<"Input Bilangan Kedua = ";
	cin>>bil_b;
	cout<<"Input Bilangan Ketiga = ";
	cin>>bil_c;
	cout<<"Input Sampai Batas Berapa = ";
	cin>>batas;
	cout<<"============================================== \n";
	cout<<"Perulangan For : "<<endl;
	jumlah=2+1;
	for(bil_a;bil_a<=batas;bil_a+=jumlah){
		cout<<bil_a<<" + "<<jumlah<<" = "<<bil_a+jumlah<<endl;
}
	cout<<"\n\n";
	cout<<"Perulangan dengan while "<<endl;
	while(bil_b<=batas){
		cout<<bil_b<<" * "<<jumlah<<" = "<<bil_b*jumlah<<endl;
		bil_b+=2;
	}
	cout<<"\n\n";
	cout<<"Perulangan dengan do while "<<endl;
	do{
		cout<<bil_c<<" + "<<jumlah<<" = "<<bil_c+jumlah<<endl;
		bil_c+=3;		
	}while(bil_c<=batas);
}
