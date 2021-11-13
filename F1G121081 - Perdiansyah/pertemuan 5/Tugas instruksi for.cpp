#include <iostream>
using namespace std;

//Nama 		: Perdiansyah
//Nim 		: F1G121081
//Jurusan 	: Ilmu Komputer

int main(){
	
	system("color 0B");
	int a, input,berat,harga = 10000,hasil = 0;
	
	cout<<"============= Laundry Ilkom =============== "<<endl;
	cout<<"\t Harga Perkilo = Rp10.000"<<endl<<endl;//menampilkan info harga
	cout<<"Ingin berapa kali melakukan pencucian: ";//memasukan berapa kali akan melakukan pengulangan
	cin>>input;
	
	for(a = 1; a <= input; a++)
	{
		cout<<"masukan berat cucian ke "<<a<<"(kg): ";//input berat cucian yang akan di cuci
		cin>>berat;
		hasil=hasil+berat;
	}
	cout<<"Total berat cucian anda adalah = "<<hasil<<" Kg"<<endl;
	cout<<"Total harga yang harus di bayarkan = Rp"<<hasil*harga;
	
	return 0;
}


