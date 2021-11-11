#include<iostream>
using namespace std;

int main(){
	int harga_novel,harga_komik,harga_cerpen,batas,total_pembayaran,tambah,tambah1;
	cout<<"Perulangan For \n";
	cout<<"Masukkan Jumlah Novel : ";
	cin>>harga_novel;
	cout<<"Masukkan Jumlah Komik : ";
	cin>>harga_komik;
	cout<<"Masukkan Jumlah Cerpen : ";
	cin>>harga_cerpen;
	cout<<"Sampai Batas Berapa :";
	cin>>batas;
	cout<<"Ingin Menambahkan Berapa Kali : ";
  cin>>tambah;
	for(harga_novel;harga_novel<=batas;harga_novel+=tambah){
		cout<<harga_novel<<"  ";
	}
  cout<<"\n";
  cout<<"Total Novel : "<<harga_novel<<endl;
  cout<<"harga keseluruhan novel = "<<harga_novel*10000<<endl;
	cout<<"\n\n";
	cout<<"Perulangan While \n";
	while(harga_komik<=batas){
    cout<<harga_komik<<" ";
    harga_komik+=tambah;
  }
   cout<<"\n";
  cout<<"Total Komik : "<<harga_komik<<endl;
  cout<<"harga keseluruhan komik = "<<harga_komik*5000<<endl;
	cout<<"\n\n";
do {
  cout<<harga_cerpen<<" ";
  harga_cerpen+=tambah;
}while(harga_cerpen<=batas);
cout<<"Total Cerpen : "<<harga_cerpen<<endl;
  cout<<"harga keseluruhan komik = "<<harga_cerpen*8000<<endl;
}
