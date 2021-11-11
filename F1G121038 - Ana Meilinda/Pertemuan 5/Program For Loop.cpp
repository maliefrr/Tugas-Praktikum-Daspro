#include <iostream>
using namespace std;

int main (){
	char Nama[100][100];
	float Nilai[100], Tugas[100], UTS[100], UAS[100], Rata[100], Hasil[100], Jumlah;
	
	cout<<"Menghitung Nilai Rata-rata Prodi Ilmu Komputer 021"<<endl;
	cout<<endl;
	cout<<"Masukkan Jumlah Mahasiswa : ";
	cin>>Jumlah;
	
	for (int i=1; i<=Jumlah; i++){
		cout<<"Masukkan Nama Mahasiswa "<<i<<" : ";
		cin>>Nama[100];
		
		cout<<"Masukkan Nilai Tugas : ";
		cin>>Tugas[i];
		
		cout<<"Masukkan Nilai UTS : ";
		cin>>UTS[i];
		
		cout<<"Masukkan Nilai UAS : ";
		cin>>UAS[i];
		cout<<endl;
		
		cout<<"Mahasiswa Atas Nama "<<Nama[100];
		Hasil[100]=Tugas[i]+UTS[i]+UAS[i];
		cout<<"\nTotal Nilai : "<<Hasil[100]<<endl;
		Rata[100]=(Tugas[i]+UTS[i]+UAS[i])/3;
		cout<<"Nilai Rata-rata : "<<Rata[100]<<endl;
		cout<<endl;	
	}
	
return 0;

}
