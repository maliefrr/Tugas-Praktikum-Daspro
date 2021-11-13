#include <iostream>

using namespace std;

int main()
{
system("title contoh sederhana pengulangan for");

cout<<"Nama      : Lily Fidaus Gusrin"<<endl;
cout<<"NIM       : F1G121023"<<endl;
cout<<"Jurusan   : Ilmu Komputer"<<endl;
cout<<"Fakultas  : FMIPA"<<endl;
cout<<"Angkatan  : 2021\n"<<endl;

cout<<"Tekan apa saja untuk menampilkan contoh output pengulangan for.\n"<<endl;
system("pause");

  int a;
  for (a = 1; a<20; a++) {
    cout << "Contoh pengulangan for" << endl;
  }
    system("pause");
	cout<<endl;
	cout<<"Program ini hanya menampilkan berapa kali pengulangan jumlah nilai yang ditulis dalam source code\n namun harus menggunakan syarat seperti a=1, lalu a<20 agar bisa berjalan,\n tidak seperti while yang dapat langsung ditulis a=<20 untuk menampilkan berapa jumlah yang ingin diulang."<<endl;

  return 0;
}
