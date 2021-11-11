#include <iostream>
using namespace std;

int main (){
	char Nama [100][100];
	float Nilai, Tugas, UTS, UAS, Rata, Jumlah, Hasil, i;
	i=1;
	
	cout<<"Menghitung Nilai Rata-rata Prodi Ilmu Komputer 021"<<endl;
	cout<<endl;
	cout<<"Masukkan Jumlah Mahasiswa : ";
	cin>>Jumlah;
	
	do {
		cout<<"Masukkan Nama Mahasiswa "<<i<<" : ";
		cin>>Nama[100];
	
		cout<<"Masukkan Nilai Tugas : ";
		cin>>Tugas;
		
		cout<<"Masukkan Nilai UTS : ";
		cin>>UTS;
		
		cout<<"Masukkan Nilai UAS : ";
		cin>>UAS;
		cout<<endl;
		cout<<"Mahasiswa Atas Nama "<<Nama[100];
		Hasil=Tugas+UTS+UAS;
		cout<<"\nTotal Nilai : "<<Hasil<<endl;
		Rata=(Tugas+UTS+UAS)/3;
		cout<<"Nilai Rata-rata : "<<Rata<<endl;
		cout<<endl;
		i++;
	}
	
	while (i<=Jumlah);	
	
return 0;
	
}
