#include <iostream>
using namespace std;

int main () {
	int ulang, in, t = 1;
	double y = 1;
	
	cout<<"Masukkan berapa kali perulangan : ";
	cin>>ulang;
	
	do{
		cout<<"Masukkan nilai ke-"<<t<<" : ";
		cin>>in;
		t++;
		y = y * in;
	
	}	while (t <= ulang);
	cout<<"Hasil perkalian nilai di atas adalah "<<y;
	
	
}
