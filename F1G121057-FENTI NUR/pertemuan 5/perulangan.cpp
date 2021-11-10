#include<iostream>
using namespace std;
int main(){
	int bil,bil_1;
	cout<<"===========================================================\n";
	cout<<"		for loop			 \n";
	cout<<"=========================================================== \n";
	cout<<"Masukkan Bilangan Pertama : ";
	cin>>bil;
	cout<<"Masukkan Bilangan Kedua : ";
	cin>>bil_1;
	for(bil;bil<=50;bil=bil+bil_1){
		
		cout<<bil<<" ";
	
	}
	system("pause");
	system("cls");
	
	int angka,angka_1;
	cout<<"===========================================================\n";
	cout<<"		while loop			 \n";
	cout<<"=========================================================== \n";
	cout<<"Masukkan Bilangan Pertama : ";
	cin>>angka;
	cout<<"Masukkan Bilangan Kedua : ";
	cin>>angka_1;

	while(angka<30){
		cout<<angka<<"  ";
		angka=angka+angka_1;
	}
	system("pause");
	system("cls");
	
	int nilai,nilai_1;
	cout<<"===========================================================\n";
	cout<<"		do while loop			 \n";
	cout<<"=========================================================== \n";
	cout<<"Masukkan Bilangan Pertama : ";
	cin>>nilai;
	cout<<"Masukkan Bilangan Kedua : ";
	cin>>nilai_1;
	
	do{
		cout<<nilai<<" ";
		nilai=nilai+nilai_1;
	}
	while(nilai<=60);
	
}
