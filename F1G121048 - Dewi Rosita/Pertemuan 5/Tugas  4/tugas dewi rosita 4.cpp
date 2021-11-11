#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main (){
    string nama, sandi, nama1, sandi1;
    int x=0;
        cout<<"===================================================================================="<<endl;
        cout<<"|| Selamat datang diprogram ini, silahkan registrasi akun anda untuk melanjutkan. ||"<<endl;
        cout<<"====================================================================================\n"<<endl;

        cout<<"<====Registrasi====>"<<endl;
        cout<<"buat username anda: ";cin>>nama;
        cout<<"buat password anda: ";cin>>sandi;
        cout<<"<==================>"<<endl;
        cout<<endl;

    while (x<3){
        system("cls");
        cout<<"================================================================"<<endl;
        cout<<"|| Akun anda telah dibuat, silahkan login untuk melanjutkan.  ||"<<endl;
        cout<<"================================================================\n"<<endl;

        cout<<"<========Login========>"<<endl;
        cout<<"masukan username anda: ";cin>>nama1;
        cout<<"masukan password anda: ";cin>>sandi1;
        cout<<"<=====================>"<<endl;

        if(nama==nama1 && sandi==sandi1){
            cout<<"hallo "<<nama<<" ,Selamat datang."<<endl;
            exit(3);
            return 3;
        }else{
            system("cls");
            cout<<"password atau username yang anda masukan salah."<<endl;
            x++;
            cout<<"anda telah melakukan kesalahan login sebanyak "<<x<<" kali."<<endl;
                cout<<endl;

        }
    }cout<<"Anda Telah Gagal Memesan Pembelian Sebanyak 3 Kali, login dibatalkan.";
	cout<<endl;

}
