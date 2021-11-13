#include <conio.h>
#include <iostream>

using namespace std;
int main() {
system("title contoh sederhana pengulangan while");

cout<<"Nama      : Lily Fidaus Gusrin"<<endl;
cout<<"NIM       : F1G121023"<<endl;
cout<<"Jurusan   : Ilmu Komputer"<<endl;
cout<<"Fakultas  : FMIPA"<<endl;
cout<<"Angkatan  : 2021\n"<<endl;

cout<<"Tekan apa saja untuk menampilkan contoh output pengulangan while."<<endl;

system("pause");

	int a=1;
	while (a<=20){
	    cout<<"contoh pengulangan while "<<a<<endl;
	    a++;
	}system("pause");
	cout<<endl;
	cout<<"Program ini hanya menampilkan berapa kali pengulangan jumlah nilai yang ditulis dalam source code."<<endl;
	getch();
}
