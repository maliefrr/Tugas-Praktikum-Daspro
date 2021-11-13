#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    system("title contoh sederhana pengulangan do while");

    cout<<"Nama      : Lily Fidaus Gusrin"<<endl;
    cout<<"NIM       : F1G121023"<<endl;
    cout<<"Jurusan   : Ilmu Komputer"<<endl;
    cout<<"Fakultas  : FMIPA"<<endl;
    cout<<"Angkatan  : 2021\n"<<endl;

    cout<<"Tekan apa saja untuk menampilkan contoh output pengulangan for.\n"<<endl;
    system("pause");

	int a=1, b=1;

       //loop While
	while (a<10)
	{
	    cout<<"Contoh output Perulangan While "<<a<<endl;
	    a++;
	}system("pause");


        //loop Do While
	do {
	     cout<<"Contoh output Perulangan Do While "<<b<<endl;
	     b++;
	} while (b<10);

    system("pause");
    cout<<endl;
    cout<<"Program ini hanya menampilkan berapa kali pengulangan jumlah nilai yang ditulis dalam source code\n namun dapat dua atau lebih cabang sekaligus, dalam program ini hanya menampilkan 2 cabang output yang berbeda.\n mirip if elese namun untuk pengulangan ;-;."<<endl;
	getch();
}
