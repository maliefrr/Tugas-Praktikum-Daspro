#include<iostream>
using namespace std;

int main(){
	int n, n1, n2, n3,total;
	cout<<"PROGRAM PERULANGAN FOR, WHILE DAN DO WHILE \n"<<endl;
	cout<<"Masukkan berapa kali perulangan : ";
	cin>>n;
	
	cout<<"\nInput 1 : ";
	cin>>n1;
	cout<<"\nInput 2 : ";
	cin>>n2;
	cout<<"\nInput 3 : ";
	cin>>n3;
	  
	  
	  /*  setiap perulangan nilai inputan akan di assignment dengan nilai inputan + variabel i 
	  	contoh nilai inputan 1 : 4
	  	Perulangan dilakukan sebanyak : 2
	  	- i = 1, 1 <= 2, i++
		nilai_inputan1 = 4 + 1;
		- i = 2, 2 <= 2, i++
		nilai_inputan1 = 5 + 2;
		- i = 3, 3<= 2 (false)
		nilai_inputan = 7 
	  */ 
	  
	// Perulangan for
	for(int i=1; i<=n;i++){
		n1 = n1 + i;
	}
	
	// Perulangan while
	int i=1;
	while(i <= n){
		n2 = n2 + i;
		i++;
	}
	
	// Perulangan do while
	do{
		n3 = n3 + i;
		i++;
	}
	while(i<=n);
	
	
	total = n1+n2+n3;
	cout<<"Hasil dari penjumlahan perulangan angka yang di input user : "<<total<<endl;
	
	return 0;
	
}
