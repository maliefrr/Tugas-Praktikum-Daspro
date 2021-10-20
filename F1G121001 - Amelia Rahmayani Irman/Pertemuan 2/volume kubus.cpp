#include<iostream>
using namespace std;
int main()
{
	/*Rumus Mencari Volume Kubus 
	sisi x sisi x sisi = m^2 */
	
	int sisi, volume;
	cout<<"==================================================================="<<endl;
	cout<<"\t Nama \t\t :Amelia rahmayani irman"<<endl;
	cout<<"\t NIm \t\t :F1G121001"<<endl;
	cout<<"\t Jurusan \t :Ilmu Komputer"<<endl;
	cout<<"\t Fakultas \t :MIPA "<<endl;
	cout<<"==================================================================="<<endl;
	cout<<"\n\n\n";
	//Masukkan Nilai Sisi Kubus
	cout<<"Masukkan Nilai Sisi Kubus = ";
	cin>>sisi;
	volume =sisi*sisi*sisi;
	cout<<"Jika Nilai sisi kubusnya "<<sisi<<" maka rumusnya"<<endl;
	cout<<"sisi x sisi x sisi => "<<sisi<<"x"<<sisi<<"x"<<sisi<<" = "<<volume<<"m^2"<<endl;
	cout<<"==================================================================="<<endl;
	
	return 0;
}
