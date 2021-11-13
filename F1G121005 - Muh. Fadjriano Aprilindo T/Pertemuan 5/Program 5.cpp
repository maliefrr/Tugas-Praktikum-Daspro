#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
  long harga, biaya, diskon, grandtotal, bayar, kembalian;
  int jumlah;
  char paket;

  cout<<"-------------------------"<<endl;
  cout<<"    DATA KASIR    "<<endl;
  cout<<"-------------------------"<<endl<<endl;

  cout<<"MENU PAKET:              "<<endl;
  cout<<"A. Nasi Campur + jus     "<<endl;
  cout<<"B. Nasi Goreng + jus     "<<endl;
  cout<<"C. Mie Goreng  + jus      "<<endl<<endl;

  cout<<"Tipe Paket [ A/B/C ]= "; cin>>paket;
  cout<<"Jumlah          = "; cin>>jumlah;

  switch(paket)
  {
    case 'A':
    case 'a'  :
     harga=28000;
    break;

    case 'B':
    case 'b'   :
     harga=24000;
    break;

    case 'C':
    case  'c'   :
     harga=27000;
    break;
  }
system("cls");
  biaya=harga*jumlah;
  diskon=0.1*biaya;
  grandtotal=biaya-diskon;



  cout<<"-------------------------"<<endl;
  cout<<"    WARUNG GLOBALITI     "<<endl;
  cout<<"-------------------------"<<endl<<endl;

  cout<<"RINCIAN PEMBAYARAN:      "<<endl;
  cout<<"Menu Paket       = "<<paket<<endl;
  cout<<"Jumlah           = "<<jumlah<<endl;
  cout<<"                 ------------ x"<<endl;
  cout<<"Biaya            = "<<biaya<<endl;
  cout<<"Diskon 5%        = "<<diskon<<endl;
  cout<<"                 ------------ -"<<endl;
  cout<<"Grand Total      = "<<grandtotal<<endl;
  cout<<"Bayar            = "; cin>>bayar; kembalian=bayar-grandtotal;
  cout<<"                 --------------"<<endl;
  cout<<"Uang Kembalian   = "<<kembalian<<endl;

  getch();
}
