#include <iostream>

using namespace std;

int main(){

int baju=0, nominal, total, uang;

nyeh:
cout<<"1. kemeja"<<endl;
cout<<"2. jaket"<<endl;
cout<<"3. exit"<<endl;
cout<<"masukan input pilihan baju.";cin>>baju;
cout<<endl;

if(baju !=3){
    while(baju<3 && baju>0){
    switch(baju){
    case 1:
        cout<<"harga kemeja = 15000/lembar"<<endl;
        cout<<"Masukkan jumlah barang yang ingin anda beli: ";cin>>nominal;
        cout<<endl;
        total=nominal*15000;
        cout<<"Total harga barang keseluruhan: Rp. "<<total;
        cout<<endl;
        cout<<"Masukkan uang pembayaran anda: ";cin>>uang;
            if(uang==total){
                system("cls");
                cout<<"Pembayaran anda berhasil.\n"<<endl;

            }else if(uang>total){
                system("cls");
                cout<<"Pembayaran anda berhasil"<<endl;
                cout<<"Total sisa uang anda adalah: Rp. "<<uang-total;

            }else {
                system ("cls");
                cout<<"Maaf uang tidak cukup.\n"<<endl;}
            break;

    case 2:
        cout<<"harga jaket = 20000/lembar"<<endl;
        cout<<"Masukkan jumlah barang yang ingin anda beli: ";cin>>nominal;
        cout<<endl;
        total=nominal*20000;
        cout<<"Total harga barang keseluruhan: Rp. "<<total;
        cout<<endl;
        cout<<"Masukkan uang pembayaran anda: ";cin>>uang;
            if(uang==total){
                system("cls");
                cout<<"Pembayaran anda berhasil.\n"<<endl;

            }else if(uang>total){
                system("cls");
                cout<<"Pembayaran anda berhasil"<<endl;
                cout<<"Total sisa uang anda adalah: Rp. "<<uang-total;

            }else {
                system ("cls");
                cout<<"Maaf uang tidak cukup.\n"<<endl;}
            break;

    }  goto nyeh;
    }
}else{
        cout << "Anda telah keluar dari program." << endl;}

}
