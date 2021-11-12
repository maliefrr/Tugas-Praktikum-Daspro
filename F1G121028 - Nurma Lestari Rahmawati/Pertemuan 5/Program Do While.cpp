#include <iostream>
using namespace std;

int main(){
	system("color a");
	
	float nilai,DTA,DTB,DTC,DTD,DTE;
	int jumlah;
	float perbandingan;
	
	cout<<"$$$$$xxxxxxxxxxxxxxxxxxxxxxxxxxxx$$$$$"<<endl;
	cout<<"$$$$$     Program Jumlah Siswa   $$$$$"<<endl;
	cout<<"$$$$$   Nurma Lestari Rahmawati  $$$$$"<<endl;
	cout<<"$$$$$          F1G121028         $$$$$"<<endl;
	cout<<"$$$$$        ILMU KOMPUTER       $$$$$"<<endl;
	cout<<"$$$$$xxxxxxxxxxxxxxxxxxxxxxxxxxxx$$$$$"<<endl;
	cout<<endl;
	
	//Perulangan Do-While Loop
	cout<<"Do-While Loop\n";
	cout<<endl;
		aa:
		cout<<"masukan data siswa kelas A : ";
		cin>>DTA;
		cout<<endl;
		cout<<"masukan data siswa kelas B : ";
		cin>>DTB;
		cout<<endl;
		cout<<"masukan data siswa kelas C : ";
		cin>>DTC;
		cout<<endl;
		cout<<"masukan data siswa kelas D : ";
		cin>>DTD;
		cout<<endl;
		cout<<"masukan data siswa kelas E : ";
		cin>>DTE;
		cout<<endl;

	do {
		jumlah = DTA + DTB + DTC + DTD + DTE;
		cout<<"jumlah keseluruhan siswa sekolah MAN 1 adalah = "<< jumlah <<endl;
		cout<<endl;
		perbandingan = jumlah / 5 ;
		cout<<"perbandingan rata-rata jumlah siswa adalah = "<< perbandingan<<endl;
		cout<<endl;
		
	}while ( perbandingan = 0);
	cout<<endl;
	goto aa;
	cout<< "selesai\n"<<endl;
	cin.get();
}

