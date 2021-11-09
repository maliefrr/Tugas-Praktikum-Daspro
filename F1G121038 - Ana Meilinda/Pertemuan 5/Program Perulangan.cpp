#include <iostream>
using namespace std;

int main (){
	int n;
	string Nama [10], Status [10];
	int Nilai [10];
	
	cout<<"Menentukan Kelulusan Siswa"<<endl;
	cout<<endl;
	cout<<"Masukkan Jumlah Data Mahasiswa : ";
	cin>>n;
	cout<<endl;
	
	for (int i=0; i<n; i++){
		cout<<"Masukkan Nama Mahasiswa : ";
		cin>>Nama[i];
		cout<<"Masukkan Nilai Mahasiswa : ";
		cin>>Nilai[i];
		
		if(Nilai[i]>=70){
			cout<<Nama[i]<<"\nDengan Nilai : "<<Nilai[i]<<"\nDinyatakan Lulus";
			cout<<endl;
		}
		
		else {
			cout<<Nama[i]<<"\nDengan Nilai : "<<Nilai[i]<<"\nDinyatakan Tidak Lulus"<<endl;
		}	cout<<endl;
	}
	
return 0;
}
