#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	/*Tugas Praktikum Daspro membuat contoh program c++ Instruksi Perulangan Dengan Melibatkan for, while, dan do while atas nama:
	 Muhammad Ilham Jaya Putra dengan Nim F1G121024
	*/
	
	string Nama = "Muhammad Ilham Jaya Putra", Nim = "F1G121024";
	
	cout<<"========== Tugas Praktikum Daspro ========== \n";
	cout<<"Nama Mahasiswa\t: "<<Nama<<"\n";
	cout<<"Nim\t\t: "<<Nim<<"\n";
	cout<<"\n\n";
	
	int mujair,emas,gabus,tambah,tambahemas,tambahgabus,hasil,total,hasil1,total1,hasil2,total2,seluruh;
	
	const int rpmujair=20000,rpemas=30000,rpgabus=50000;
	
	cout<<"--------------------------------------------------------------------------\n";
	cout<<"***** Perulangan For,While,Do While Untuk Pembelian Ikan Air Tawar ***** \n";
	cout<<"1. Berapa Kg Ikan Mujair yang ingin dibeli = ";
	cin>>mujair;
	
	cout<<"2. Berapa Kg Ikan Emas yang ingin dibeli = ";
	cin>>emas;
	
	cout<<"3. Berapa Kg Ikan Gabus yang ingin dibeli = ";
	cin>>gabus;
	
	cout<<"********************* \n";
	cout<<"Berapa Kg batas penjumlahan Ikan Mujair yang diinginkan : ";
	
	cin>>tambah;

	for(mujair;mujair<=tambah;mujair=mujair+mujair){
		
		cout<<mujair<<" Ikan Mujair + "<<mujair<<" = "<<mujair+mujair<<"Jumlah Ikan Mujair "<<endl;
		hasil=mujair+mujair;
}
	cout<<"----------------------------------------------- \n";
	cout<<"Total keseluruhan Ikan Mujair yang dibeli ="<<hasil<<" Ikan Mujair \n";
	
	total=hasil*rpmujair;
	cout<<"Harga 1 Kg Ikan Mujair : Rp."<<rpmujair<<endl;	
	cout<<"Total keseluruhan harga Ikan Mujair yang dibeli : Rp."<<total<<"\n";
	cout<<"--------------------------------------------------------------------\n\n";
	cout<<"Pembelian dan total harga peembelian Ikan Mujair telah selesai \n";
	cout<<"Klik sebuah tombol pada keyboard untuk melanjutkan \n";
	system ("pause");
	
	system("cls");	
	cout<<"=================================================================\n";
	cout<<"--------------- Perulangan While Untuk Ikan Emas -----------------\n";
	cout<<"Anda memasukkan mulai dari : "<<emas<<" untuk pembelian Ikan Emas \n";
	cout<<"Masukkan sampai batas berapa pembelian Ikan Emas yang diinginkan : ";
	cin>>tambahemas;
	cout<<"\n\n";
	
	while(emas<=tambahemas){
		cout<<emas<<" Ikan Emas + "<<emas<<" = "<<emas+emas<<" Jumlah Ikan Emas "<<endl;
		hasil1=emas+emas; 
		emas+=emas;	
}
	cout<<"\n============================================================\n";
	
	cout<<"Total keseluruhan Ikan Emas yang dibeli = "<<hasil1<<" Ikan Emas \n";
	total1=hasil1*rpemas;
	cout<<"Harga 1 Kg Ikan Emas : Rp."<<rpemas<<endl;
	cout<<"Total keseluruhan Harga Ikan Emas yang dibeli : Rp."<<total1<<"\n";
	cout<<"==================================================================\n\n";
	cout<<"Pembelian dan total harga pembelian Ikan Emas sudah selesai \n";
	cout<<"Klik sebuah tombol pada keyboard untuk melanjutkan \n";
	system ("pause");
	system("cls");
	cout<<"---------------------------------------------------------------------\n";
	cout<<"-------------- Perulangan Do While Untuk Ikan Gabus -----------------\n";
	cout<<"Anda menginput mulai dari : "<<gabus<<" untuk pembelian Ikan Gabus \n";
	cout<<"Masukkan sampai batas berapa pembelian Ikan Gabus yang diinginkan : ";
	cin>>tambahgabus;
	cout<<"\n\n";

	do {
		cout<<gabus<<" Ikan Gabus + "<<gabus<<" = "<<gabus+gabus<<" Jumlah Ikan Gabus "<<endl;
		hasil2=gabus+gabus;
		gabus+=gabus ;
}	while(gabus<=tambahgabus);
	cout<<"\n-----------------------------------------------------------------------\n";
	cout<<"Total keseluruhan Ikan Gabus yang dibeli = "<<hasil2<<" Ikan Gabus \n";
	total2=hasil2*rpgabus;
	cout<<"Harga 1 Kg Ikan Gabus : Rp."<<rpgabus<<endl;
	cout<<"Total keseluruhan harga Ikan Gabus yang dibeli : Rp."<<total2<<"\n";
	cout<<"---------------------------------------------------------------\n\n";
	cout<<"Pembelian dan total harga pembelian Ikan Gabus sudah selesai \n";
	cout<<"Klik sebuah tombol pada keyboard untuk melanjutkan \n";
	system ("pause");
	
	system("cls");
	
	cout<<"-----------------------------------------------------------\n";
	cout<<"Jadi total harga dari Ikan yang sudah dibeli adalah : \n";
	cout<<"Ikan Mujair = Rp."<<total<<endl;
	cout<<"Ikan Emas = Rp."<<total1<<endl;
	cout<<"Ikan Gabus = Rp."<<total2<<endl;
	seluruh=total+total1+total2;
	cout<<"Total keseluruhan harga Ikan Mujair, Ikan Emas dan Ikan Gabus Adalah : Rp."<<seluruh<<endl;
	cout<<"-------------------------------------------------------------\n";
	system("pause");
	cout<<"\n\n";
	
	
	getch;
}

