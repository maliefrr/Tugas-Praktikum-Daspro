#include<iostream>
using namespace std;

int main(){
	
	cout <<"++++++++++++++PROGRAM LOOPING ++++++++++++++"<< endl;
	cout <<"Nama		:MUH. HARJUN SALEHUDDIN\n";
	cout <<"NIM		:F1G121074\n";
	cout <<"Prodi		:ILMU KOMPUTER\n";
	cout <<"Fakultas	:MIPA\n";
	cout <<"++++++++++++++++++++++++++++++++++++++++++++"<< endl;
	cout <<""<<endl;
	cout <<""<<endl;
	
	
int 
	x,
	x1,
	x2,
	x3,
	jumlah;
	
	
		cout<<"LOOPING FOR,WHILE,dan DO WHILE \n"<<endl;
		cout<<"Berapa kali anda ingin melakukan looping : ";
		cin>>x;

	cout<<"MASUKKAN NILAI INPUT 1 : ";
	cin>>x1;
	cout<<"MASUKKAN NILAI INPUT 2 : ";
	cin>>x2;
	cout<<"MASUKKAN NILAI INPUT 3 : ";
	cin>>x3;
	
	// LOOPING for
	for(int i=1; i<=x;i++){
		x1 = x1 + i;}
		
	// LOOPING while
	int i=1;
	while(i <= x){
		x2 = x2 + i;
		i++;}
		
	// LOOPING do while
	do{
		x3 = x3 + i;
		i++;}
	while(i<=x);


	jumlah = x1+x2+x3;
	cout<<"Hasil dari penjumlahan angka yang di input : "<<jumlah<<endl;

	return 0;

}



