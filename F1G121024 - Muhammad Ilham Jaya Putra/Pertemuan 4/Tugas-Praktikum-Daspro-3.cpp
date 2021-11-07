#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char isi;
	int bakso_biasa,bakso_tenes,bakso_polos,porsi,nilaiuang,total,kembali;
	bakso_biasa = 12000;
	bakso_tenes = 15000;
	bakso_polos = 10000;
	pesan:
		cout<<"================================================ "<<endl;
		cout<<"---------------- Menu Bakso ------------------"<<endl;
		cout<<"================================================"<<endl;
		cout<<"\n\n";
		cout<<"================================================"<<endl;
		cout<<"1. bakso biasa = Rp."<<bakso_biasa<<endl;
		cout<<"2. bakso tenes = Rp."<<bakso_tenes<<endl;
		cout<<"3. bakso polos = Rp."<<bakso_polos<<"\n\n";
		cout<<"================================================ \n";
		cout<<"Silahkan masukkan code menu Anda (1,2,3) \n";
		cin>>isi;
		switch(isi){
			case '1':
				cout<<"Anda memilih bakso biasa dengan harga : Rp."<<bakso_biasa<<"\n";
				cout<<"Berapa porsi yang Anda inginkan ? = ";
				cin>>porsi;
				total=porsi*bakso_biasa;
				cout<<"Anda membeli bakso biasa dengan total Harga = "<<total<<endl;
				cout<<"Silahkan masukkan nilai uang yang Anda miliki = ";
				cin>>nilaiuang;
				if(nilaiuang>total){
					cout<<"Anda berhasil membeli "<<porsi<<" bakso biasa dengan harga Rp."<<total<<"\n";
					kembali=nilaiuang-total;
					cout<<"uang kembalian Anda = Rp."<<kembali<<endl;
					system("pause");
					system ("cls");
					cout<<"Terima Kasih telah belanja di warung bakso kami";
				}
				else if(nilaiuang==total){
					cout<<"Anda berhasil membeli "<<porsi<<" bakso biasa dengan harga Rp."<<total<<"\n";
					kembali=nilaiuang-total;
					cout<<"uang kembalian Anda = Rp."<<kembali<<endl;
					system("pause");
					system ("cls");
					cout<<"Terima Kasih telah belanja di warung bakso kami";
				}
				else{
					cout<<"Maaf uang yang anda miliki tidak cukup untuk membeli pesanan yang anda inginkan \n";
					cout<<"Silahkan pilih ulang pesanan anda \n";
					system("pause");
					system("cls");
					goto pesan;
				}
				break;
			case '2':
				cout<<"Anda memilih bakso tenes dengan harga : Rp."<<bakso_tenes<<"\n";
				cout<<"Berapa porsi yang Anda inginkan ? = ";
				cin>>porsi;
				total=porsi*bakso_tenes;
				cout<<"Anda membeli bakso dengan total Harga = "<<total<<endl;
				cout<<"Silahkan masukkan nilai uang yang Anda miliki = ";
				cin>>nilaiuang;
				if(nilaiuang>total){
					cout<<"Anda berhasil membeli "<<porsi<<" bakso tenes dengan harga Rp."<<total<<"\n";
					kembali=nilaiuang-total;
					cout<<"uang kembalian Anda = Rp."<<kembali<<endl;
					system("pause");
					system ("cls");
					cout<<"Terima Kasih telah belanja di warung bakso kami";
				}
				else if(nilaiuang==total){
					cout<<"Anda berhasil membeli "<<porsi<<" bakso tenes dengan harga Rp."<<total<<"\n";
					kembali=nilaiuang-total;
					cout<<"uang kembalian Anda = Rp."<<kembali<<endl;
					system("pause");
					system ("cls");
					cout<<"Terima Kasih telah belanja di warung bakso kami";
				}
				else{
					cout<<"Maaf uang yang anda miliki tidak cukup untuk membeli pesanan yang anda inginkan \n";
					cout<<"Silahkan pilih ulang pesanan anda \n";
					system("pause");
					system("cls");
					goto pesan;
				}
				break;
			case '3':
				cout<<"Anda memilih gorengan dengan harga : Rp."<<bakso_polos<<"\n";
				cout<<"Berapa porsi yang Anda inginkan ? = ";
				cin>>porsi;
				total=porsi*bakso_polos;
				cout<<"Anda membeli bakso polos dengan total Harga = "<<total<<endl;
				cout<<"Silahkan masukkan nilai uang yang anda miliki = ";
				cin>>nilaiuang;
				if(nilaiuang>total){
					cout<<"Anda berhasil membeli "<<porsi<<" bakso polos dengan harga Rp."<<total<<"\n";
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
					cout<<"Terima Kasih telah belanja di warung bakso kami";
				}
				else{
					cout<<"Maaf uang yang anda miliki tidak cukup untuk membeli pesanan yang anda inginkan \n";
					cout<<"Silahkan pilih ulang pesanan Anda \n";
					system("pause");
					system("cls");
					goto pesan;
				}
				break;
			default:
				cout<<"Maaf silahkan masukkan code pesanan yang sesuai pada daftar menu bakso \n";
				cout<<"silahkan ulang pesanan Anda \n";
				system("pause");
				system("cls");
				goto pesan;				
}
		getch;
}
