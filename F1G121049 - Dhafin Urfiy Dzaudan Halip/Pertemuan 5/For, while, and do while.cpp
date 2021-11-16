#include <iostream>
using namespace std;

int main () {
	int input, n;
	double s=0;
	
	cout<<"Masukkan berapa kali perulangan :  ";
	cin>>n;
	
	for (int a = 1; a<=n; a++){
		cout<<". Masukkan Input "<<a<<" : ";
		cin>>input;
		s = s + input;
	}
	
	cout<<"Jumlah dari inputan di atas adalah "<<s<<endl;
	
	
	
	
	
	
	
	
	
	
	

}
