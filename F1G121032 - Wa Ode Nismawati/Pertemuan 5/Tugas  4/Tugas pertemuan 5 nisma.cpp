#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){

int pilihan=0, jumlah, total, uang;

ulang:
cout<<"<===Ilkom Outfit-Shop===>"<<endl;
cout<<"|| 1. Hoodie           ||"<<endl;
cout<<"|| 2. Cardigan         ||"<<endl;
cout<<"|| 3. exit             ||"<<endl;
cout<<"<=======================>\n"<<endl;
cout<<"masukan input pilihan yang ingin dibeli: ";cin>>pilihan;
cout<<endl;

if(pilihan !=3){
    while(pilihan<3 && pilihan>0){
    switch(pilihan){
    case 1:
        cout<<"harga Hoodie = 150000/lembar"<<endl;
        cout<<"Masukkan jumlah barang yang ingin anda beli: ";cin>>jumlah;
        cout<<endl;
        total=jumlah*150000;
        cout<<"Total harga barang keseluruhan: Rp. "<<total;
        cout<<endl;
        cout<<"Masukkan uang pembayaran anda: ";cin>>uang;
            if(uang==total){
                system("cls");
                cout<<"Pembayaran anda berhasil.\n"<<endl;
                exit(3);
                return 3;

            }else if(uang>total){
                system("cls");
                cout<<"Pembayaran anda berhasil"<<endl;
                cout<<"Total sisa uang anda adalah: Rp. "<<uang-total;
                 exit(3);
                 return 3;

            }else {
                system ("cls");
                cout<<"Maaf uang tidak cukup.\n"<<endl;}

            break;

    case 2:
        cout<<"Harga cardigan = 250000/lembar"<<endl;
        cout<<"Masukkan jumlah barang yang ingin anda beli: ";cin>>jumlah;
        cout<<endl;
        total=jumlah*250000;
        cout<<"Total harga barang keseluruhan: Rp. "<<total;
        cout<<endl;
        cout<<"Masukkan uang pembayaran anda: ";cin>>uang;
            if(uang==total){
                system("cls");
                cout<<"Pembayaran anda berhasil.\n"<<endl;
                 exit(3);
                return 3;

            }else if(uang>total){
                system("cls");
                cout<<"Pembayaran anda berhasil"<<endl;
                cout<<"Total sisa uang anda adalah: Rp. "<<uang-total;
                exit(3);
                return 3;
            }else {
                system ("cls");
                cout<<"Maaf uang tidak cukup.\n"<<endl;}
            break;

    }  goto ulang;
    }
}else{
        cout << "Anda telah keluar dari program." << endl;}

}
