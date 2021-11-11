#include<iostream>
using namespace std;

int main(){
	int bil_1,bil_2,bil_3,sampai,total,akhir,total1,akhir1,total2,akhir2;
	//program perulangan for, while, do while bye amelia rahmayani irman
	cout<<"============================================= \n";
	cout<<"Program Perulangan Penjumlahan \n";
	cout<<"Nama Mahasiswa\t: Amelia Rahmayani Irman \n";
	cout<<"NIM\t\t: F1G121001 \n";
	cout<<"============================================= \n";
	cout<<"------------------- FOR --------------------- \n";
	cout<<"Masukkan Bilangan Pertama Untuk Perulangan For : ";
	cin>>bil_1;
	cout<<"Masukkan BIlangan Kedua Untuk Perulangan For : ";
	cin>>bil_2;
	cout<<"Masukkan Bilangan Ketiga Untuk Perulangan For : ";
	cin>>bil_3;
	total=bil_2+bil_3;
	cout<<"Sampai Batas Berapa : ";
	cin>>sampai;
	cout<<"\nHasil Penjumlahan Untuk Perulangan For \n";
	for(bil_1;bil_1<=sampai;bil_1++){
		cout<<bil_1<<" + "<<total<<" = "<<bil_1+total<<"\n";
		akhir=bil_1+total;
	}
	cout<<"Hasil Penjumlahan Akhir Perulangan For Adalah : "<<akhir<<endl;
	cout<<"\n\n----------------- WHILE --------------------- \n";
	cout<<"Masukkan Bilangan Pertama Untuk Perulangan While : ";
	cin>>bil_1;
	cout<<"Masukkan Bilangan Kedua Untuk Perulangan While : ";
	cin>>bil_2;
	cout<<"Masukkan Bilangan Ketiga Untuk Perulangan While : ";
	cin>>bil_3;
	cout<<"Sampai Batas Berapa : ";
	cin>>sampai;
	cout<<"\nHasil Penjumlahan Perulangan Untuk while \n";
	while(bil_1<=sampai){
		total1=bil_1+bil_2+bil_3;
		cout<<bil_1<<" + "<<total1<<" = "<<bil_1+total1<<endl;
		akhir1=bil_1+total1;	
		bil_1++;
	}
	cout<<"Hasil Penjumlahan Akhir Perulangan While Adalah : "<<akhir1<<endl;
	cout<<"\n\n---------------------- Do While ----------------------\n";
	cout<<"Masukkan Bilangan Pertama Untuk Perulangan Do While : ";
	cin>>bil_1;
	cout<<"Masukkan Bilangan Kedua Untuk Perulangan Do While : ";
	cin>>bil_2;
	cout<<"Masukkan Bilangan Ketiga Untuk Perulangan Do While : ";
	cin>>bil_3;
	cout<<"Sampai Batas Berapa : ";
	cin>>sampai;
	cout<<"Hasil Penjumlahan Perulangan Untuk Do While \n";
	do{
		total2=bil_1+bil_2+bil_3;
		cout<<bil_2<<" + "<<total2<<" = "<<bil_2+total2<<endl;
		akhir2=bil_2+total2;
		bil_2+=2;
	}while(bil_2<=sampai);
	cout<<"Hasil Penjumlahan Akhir Perulangan Do While Adalah : "<<akhir2<<endl;
	
	return 0;
}
