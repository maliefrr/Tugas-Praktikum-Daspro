
#include <iostream>

using namespace std;

int main (){
    string user, pass, user1, pass1;
    int x=0;

        cout<<"buat username anda: ";cin>>user;
        cout<<"buat password anda: ";cin>>pass;
        cout<<endl;

    while (x<3){

        cout<<"masukan username anda: ";cin>>user1;
        cout<<"masukan password anda: ";cin>>pass1;

        if(user==user1 && pass==pass1){
            cout<<"hallo "<<user<<"."<<endl;
        }else{
            system("cls");
            cout<<"password atau username yang anda masukan salah"<<endl;
            x++;
            cout<<"anda telah melakukan kesalahan login sebanyak "<<x<<" kali."<<endl;
                cout<<endl;

        }
    }cout<<"Anda Telah Gagal Memesan Pembelian Sebanyak 3 Kali, login dibatalkan.";
	cout<<endl;

}
