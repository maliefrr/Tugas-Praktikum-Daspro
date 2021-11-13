#include <iostream>
using namespace std;

int main(){
	int a;
	int nilai;
	int jumlah = 0;
	
	for (a=0;a<=10;a++){
		cout<<"\nmasukkan nilai : ";
		cin>>nilai;
		
		jumlah += a + nilai; 
		
		cout<<"hasil perulangan = "<<jumlah<<" "<<endl; 
		
	} system ("pause");
}
