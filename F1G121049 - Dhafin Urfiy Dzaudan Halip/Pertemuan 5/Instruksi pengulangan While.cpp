#include <iostream>
using namespace std;

int main () {
	int awal,akhir,k;
	
	cout<<"Masukkan nilai awal : ";
	cin>>awal;
	
	cout<<"Masukkan nilai akhir : ";
	cin>>akhir;
	
	
	int z = awal;
	double j = 0;
	while (z<=akhir) {
		cout<<z<<". Masukkan nilai "<<z<<" : ";
		cin>>k;
		z++;
		j = j + k;
	}
	cout<<"Jumlah  nilai di atas adalah "<<j<<endl;
	
}
