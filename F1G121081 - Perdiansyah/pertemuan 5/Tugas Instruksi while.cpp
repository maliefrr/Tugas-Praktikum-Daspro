#include <iostream>
using namespace std;

//Nama 		: Perdiansyah
//Nim 		: F1G121081
//Jurusan 	: Ilmu Komputer

int main(){
	system ("color 0A");
	int a = 1, input,berat,harga = 10000,hasil = 0;
	
	cout<<"============= Laundry Ilkom =============== "<<endl;
	cout<<"\t Harga Perkilo = Rp10.000"<<endl<<endl;
	cout<<"Ingin berapa kali melakukan pencucian: ";
	cin>>input;
	
	while(a <= input)
	{
		cout<<"masukan berat cucian ke "<<a<<"(kg): ";
		cin>>berat;
		a++;
		hasil=hasil+berat;
	}
	cout<<"Total berat cucian anda adalah = "<<hasil<<" Kg"<<endl;
	cout<<"Total harga yang harus di bayarkan = Rp"<<hasil*harga;
	
	return 0;
}

