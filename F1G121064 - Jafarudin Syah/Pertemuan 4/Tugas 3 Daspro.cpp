#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char isi;
	int martabak,terangbulan,gorengan,porsi,nilaiuang,total,kembali;
	martabak = 30000;
	terangbulan = 25000;
	gorengan = 20000;
	pesan:
		cout<<"================================================ "<<endl;
		cout<<"---------------- Menu Makanan ------------------"<<endl;
		cout<<"================================================"<<endl;
		cout<<"\n\n";
		cout<<"================================================"<<endl;
		cout<<"a. Martabak = Rp."<<martabak<<endl;
		cout<<"b. Terangbulan = Rp."<<terangbulan<<endl;
		cout<<"c. Gorengan = Rp."<<gorengan<<"\n\n";
		cout<<"================================================ \n";
		cout<<"Silahkan masukkan code menu Anda (a,b,c) \n";
		cin>>isi;
		switch(isi){
			case 'a':
				cout<<"Anda memilih martabak dengan harga : Rp."<<martabak<<"\n";
				cout<<"Berapa porsi yang Anda inginkan ? = ";
				cin>>porsi;
				total=porsi*martabak;
				cout<<"Anda membeli martabak dengan total Harga = "<<total<<endl;
				cout<<"Silahkan masukkan nilai uang yang Anda miliki = ";
				cin>>nilaiuang;
				if(nilaiuang>total){
					cout<<"Anda berhasil membeli "<<porsi<<" Martabak dengan harga Rp."<<total<<"\n";
					kembali=nilaiuang-total;
					cout<<"uang kembalian Anda = Rp."<<kembali<<endl;
					system("pause");
					system ("cls");
					cout<<"Terima Kasih Telah berbelanja di warung kami";
				}
				else if(nilaiuang==total){
					cout<<"Anda berhasil membeli "<<porsi<<" Martabak dengan harga Rp."<<total<<"\n";
					kembali=nilaiuang-total;
					cout<<"uang kembalian Anda = Rp."<<kembali<<endl;
					system("pause");
					system ("cls");
					cout<<"Terima Kasih Telah berbelanja di warung kami";
				}
				else{
					cout<<"Maaf uang yang Anda miliki tidak cukup untuk membeli pesanan yang Anda inginkan \n";
					cout<<"Silahkan pilih ulang pesanan Anda \n";
					system("pause");
					system("cls");
					goto pesan;
				}
				break;
			case 'b':
				cout<<"Anda memilih Terangbulan dengan harga : Rp."<<terangbulan<<"\n";
				cout<<"Berapa porsi yang Anda inginkan ? = ";
				cin>>porsi;
				total=porsi*terangbulan;
				cout<<"Anda membeli Terangbulan dengan total Harga = "<<total<<endl;
				cout<<"Silahkan masukkan nilai uang yang Anda miliki = ";
				cin>>nilaiuang;
				if(nilaiuang>total){
					cout<<"Anda berhasil membeli "<<porsi<<" terangbulan dengan harga Rp."<<total<<"\n";
					kembali=nilaiuang-total;
					cout<<"uang kembalian Anda = Rp."<<kembali<<endl;
					system("pause");
					system ("cls");
					cout<<"Terima Kasih Telah berbelanja di warung kami";
				}
				else if(nilaiuang==total){
					cout<<"Anda berhasil membeli "<<porsi<<" terangbulan dengan harga Rp."<<total<<"\n";
					kembali=nilaiuang-total;
					cout<<"uang kembalian Anda = Rp."<<kembali<<endl;
					system("pause");
					system ("cls");
					cout<<"Terima Kasih Telah berbelanja di warung kami";
				}
				else{
					cout<<"Maaf uang yang Anda miliki tidak cukup untuk membeli pesanan yang Anda inginkan \n";
					cout<<"Silahkan pilih ulang pesanan Anda \n";
					system("pause");
					system("cls");
					goto pesan;
				}
				break;
			case 'c':
				cout<<"Anda memilih gorengan dengan harga : Rp."<<gorengan<<"\n";
				cout<<"Berapa porsi yang Anda inginkan ? = ";
				cin>>porsi;
				total=porsi*gorengan;
				cout<<"Anda membeli gorengan dengan total Harga = "<<total<<endl;
				cout<<"Silahkan masukkan nilai uang yang Anda miliki = ";
				cin>>nilaiuang;
				if(nilaiuang>total){
					cout<<"Anda berhasil membeli "<<porsi<<" gorengan dengan harga Rp."<<total<<"\n";
					kembali=nilaiuang-total;
					cout<<"uang kembalian Anda = Rp."<<kembali<<endl;
					system("pause");
					system ("cls");
					cout<<"Terima Kasih Telah berbelanja di warung kami";
				}
				else if(nilaiuang==total){
					cout<<"Anda berhasil membeli "<<porsi<<" gorengan dengan harga Rp."<<total<<"\n";
					kembali=nilaiuang-total;
					cout<<"uang kembalian Anda = Rp."<<kembali<<endl;
					system("pause");
					system ("cls");
					cout<<"Terima Kasih Telah berbelanja di warung kami";
				}
				else{
					cout<<"Maaf uang yang Anda miliki tidak cukup untuk membeli pesanan yang Anda inginkan \n";
					cout<<"Silahkan pilih ulang pesanan Anda \n";
					system("pause");
					system("cls");
					goto pesan;
				}
				break;
			default:
				cout<<"Maaf silahkan masukkan code pesanan yang sesuai pada daftar menu \n";
				cout<<"silahkan ulang pesanan Anda \n";
				system("pause");
				system("cls");
				goto pesan;				
}
		getch;
}
