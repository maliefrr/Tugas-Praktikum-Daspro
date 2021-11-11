#include<iostream>
using namespace std;
int main(){
	int nilai,nilai1,nilai2;
	cout<<"***** Program Perulangan For ***** \n";
	cout<<"Silahkan masukkan angka pertama : ";
	cin>>nilai;
	cout<<"Silahkan Masukkan Angka Untuk Bilangan Kedua : ";
	cin>>nilai1;
	cout<<"Silahkan Masukkan Angka Untuk Bilangan Ketiga : ";
	cin>>nilai2;
	
	cout<<"Perulangan Untuk For \n";
	for(nilai;nilai<20;nilai=nilai+nilai1+nilai2){
		cout<<nilai<<"  ";
	}
	cout<<"Perulangan dari for selesai \n\n";
	cout<<"Lanjut dengan perulangan dari while \n";
	system("pause");
	system("cls");
	int bil,bil_1,bil_2;
	
	cout<<"***** Program Perulangan While ***** \n";
	cout<<"Silahkan Masukkan Angka Untuk Bilangan Pertama : ";
	cin>>bil;
	cout<<"Masukkan Angka Untuk Bilangan Kedua : ";
	cin>>bil_1;
	cout<<"Silahkan Masukkan Angka Untuk Bilangan Ketiga : ";
	cin>>bil_2;
	while(bil<50){
		cout<<bil<<"  ";
		bil=bil+bil_1+bil_2;
	}
	system("pause");
	system("cls");
	int angka,angka1,angka2;
	cout<<"***** Program Perulangan Do While ***** \n";
	cout<<"Silahkan Masukkan Angka Untuk Bilangan Pertama : ";
	cin>>angka;
	cout<<"Silahkan Masukkan Angka Untuk Bilangan Kedua : ";
	cin>>angka1;
	cout<<"Silahkan Masukkan Angka Untuk Bilangan Ketiga : ";
	cin>>angka2;
	do{
		cout<<angka<<" ";
		angka=angka+angka1+angka2;
	}
	while(angka<50);
}
