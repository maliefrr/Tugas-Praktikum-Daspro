#include<iostream>
using namespace std;

int main(){
	
	cout<<"===========looping majid==========="<<endl
	<<"=====NAMA       :   MAJID YUNUS====="<<endl
	<<"=====NIM        :   F1G121070====="<<endl
	<<"=====PRODI      :   ILMU KOMPUTER====="<<endl;
	
	
int 
	c,
	c1,
	c2,
	c3,
	hasil;
	
	
		cout<<"PROGRAM PERULANGAN\n"<<endl;
		cout<<"JUMLAH PERULANGAN : ";
		cin>>c;

	cout<<"INPUT 1 = ";
	cin>>c1;
	cout<<"INPUT 2 = ";
	cin>>c2;
	cout<<"INPUT 3 = ";
	cin>>c3;
	
	// LOOPING for
	for(int i=1; i<=c;i++){
		c1 = c1 + i;}
		
	// LOOPING while
	int i=1;
	while(i <= c){
		c2 = c2 + i;
		i++;}
		
	// LOOPING do while
	do{
		c3 = c3 + i;
		i++;}
	while(i<=c);


	hasil = c1+c2+c3;
	cout<<"Hasil dari penjumlahan angka yang di input : "<<hasil<<endl;

	return 0;

}



