#include <iostream>

using namespace std;
int main(){

	float nilai,DTA,DTB,DTC,DTD,DTE;
	 int jumlah;
	 float perbandingan;
	 
	system ("color b");
	cout<<"$$$$$xxxxxxxxxxxxxxxxxxxxxxxxxxxx$$$$$"<<endl;
	cout<<"$$$$$     Program Jumlah Siswa   $$$$$"<<endl;
	cout<<"$$$$$   Nurma Lestari Rahmawati  $$$$$"<<endl;
	cout<<"$$$$$          F1G121028         $$$$$"<<endl;
	cout<<"$$$$$        ILMU KOMPUTER       $$$$$"<<endl;
	cout<<"$$$$$xxxxxxxxxxxxxxxxxxxxxxxxxxxx$$$$$"<<endl;
	cout<<endl;
	
	//Perulangan For Loop
	cout<<"For Loop\n";
	cout<<endl;
	
		aa :
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
		
		jumlah = DTA + DTB + DTC + DTD + DTE;
		cout<<"jumlah keseluruhan siswa sekolah MAN 1 adalah = "<< jumlah <<endl;
		cout<<endl;
		perbandingan = jumlah / 5 ;
		cout<<"perbandingan rata-rata jumlah siswa adalah = "<< perbandingan<<endl;
		cout<<endl;
		
	
			for(int i = perbandingan; i = 0; i++){
				cout << i <<endl;	
				}
			cout<<endl;
			goto aa;	
			cout<<"keluar"<<endl;
			cout<<endl;
			
			
		}
