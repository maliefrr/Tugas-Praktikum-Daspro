#include <conio.h>
#include <iostream>
using namespace std;

int main(){
	system("color 3");
	int i,l,y,n,m;
	cout<<"========================================================================= \n";
	cout<<"\t\t\tMasukan angka yang ingin di perulangkan \n";
	cout<<"========================================================================= \n\n"<<endl;
	
	 cout<<"masukkan angka i = ";
	 cin>>i;
	 cout<<"masukkan angka l = ";
	 cin>>l;
	 cout<<"masukkan angka y = ";
	 cin>>y;
	 n = i * l * y;
	 cout<<"\n\Hasil perkalian m = "<<n<<endl;
	 cout<<"Hasil kali ="<<n<<endl;
	 cout<<"Hasil dari perkalian angka yang diinput user" ;
	 cout<<endl;
	 
	 do{
	 	cout<<"Maka n adalah = "<<n<<endl;
	 		n *= 2 ;
	 }while (n <= 999999) ;
	 cout<<endl;
	 cout<<"\t\Finish" ;
	 	cin.get();
		
		
		return 0;
	 
}
