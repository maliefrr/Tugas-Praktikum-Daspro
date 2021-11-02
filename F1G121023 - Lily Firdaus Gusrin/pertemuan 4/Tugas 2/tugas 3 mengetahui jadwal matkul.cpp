#include <iostream>

using namespace std;

int main(){

int Hari;
char ulang;
pilihan_anda:
system("cls");

cout<<"Nama         = Lily Firdaus Gusrin"<<endl;
cout<<"NIM          = F1G121023"<<endl;
cout<<"Jurusan      = Ilmu Komputer"<<endl;
cout<<"Fakultas     = FMIPA"<<endl;
cout<<endl;

cout<<"====Matkul Ilkom Kelas A Semester 1===="<<endl;
cout<<"|| 1. Senin                          ||"<<endl;
cout<<"|| 2. Selasa                         ||"<<endl;
cout<<"|| 3. Rabu                           ||"<<endl;
cout<<"|| 4. Kamis                          ||"<<endl;
cout<<"|| 5. Jumat                          ||"<<endl;
cout<<"======================================="<<endl;
cout<<endl;
cout<<"Masukan pilihan hari: ";cin>>Hari;


switch (Hari){
    case 1:
            system("cls");
            cout<<"Matkul pada hari senin adalah:"<<endl;
            cout<<"-----------------------"<<endl;
            cout<<"| 1. Agama   |  13.00 |"<<endl;
            cout<<"-----------------------"<<endl;
            cout<<endl;
            cout<<"Apakah anda ingin memilih ulang? (y/n) ";cin>>ulang;
            cout<<endl;
                if(ulang == 'y'){
                    goto pilihan_anda;
                }else cout<<"nyeh";
    break;
    case 2:
            system("cls");
            cout<<"Matkul hari Selasa adalah:"<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"| 1. Dasar-dasar Algoritma dan Pemprograman       | 07.00 |"<<endl;
            cout<<"| 2. Pencarian Informasi dan Aplikasi Perkantoran | 13.00 |"<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<endl;
             cout<<"Apakah anda ingin memilih ulang? (y/n) ";cin>>ulang;
             cout<<endl;
                if(ulang == 'y'){
                    goto pilihan_anda;
                }else cout<<"nyeh";
    break;
    case 3:
            system("cls");
            cout<<"Matkul hari Rabu adalah:"<<endl;
            cout<<"--------------------------------"<<endl;
            cout<<"| 1. Kalkulus 1        | 07.00 |"<<endl;
            cout<<"| 2. Bahasa Indonesia  | 13.00 |"<<endl;
            cout<<"--------------------------------"<<endl;
            cout<<endl;
             cout<<"Apakah anda ingin memilih ulang? (y/n) ";cin>>ulang;
             cout<<endl;
                if(ulang == 'y'){
                    goto pilihan_anda;
                }else cout<<"nyeh";
    break;
    case 4:
            system("cls");
            cout<<"Matkul hari kamis adalah:"<<endl;
            cout<<"-----------------------------------"<<endl;
            cout<<"| 1. Teknologi Informasi  | 07.00 |"<<endl;
            cout<<"| 2. Bahasa Inggris       | 13.00 |"<<endl;
            cout<<"| 3. Pancasila            | 15.00 |"<<endl;
            cout<<"-----------------------------------"<<endl;
            cout<<endl;
             cout<<"Apakah anda ingin memilih ulang? (y/n) ";cin>>ulang;
             cout<<endl;
                if(ulang == 'y'){
                    goto pilihan_anda;
                }else cout<<"nyeh";
    break;

    case 5:
            system("cls");
            cout<<"Matkul hari Jumat adalah:"<<endl;
            cout<<"-------------------------------"<<endl;
            cout<<"| 1. Fisika Dasar    |  07.00 |"<<endl;
            cout<<"| 2. Kewirausahaan   |  13.00 |"<<endl;
            cout<<"-------------------------------"<<endl;
            cout<<endl;
             cout<<" Apakah anda ingin memilih ulang? (y/n) ";cin>>ulang;
             cout<<endl;
                if(ulang == 'y'){
                    goto pilihan_anda;
                }else cout<<"nyeh";

    break;
    default:
        system("cls");
        cout<<"Input yang anda masukan salah."<<endl;
         cout<<" Apakah anda ingin memilih ulang? (y/n) ";cin>>ulang;
                if(ulang == 'y'){
                    goto pilihan_anda;
                }else cout<<"nyeh";
    }

    return 0;
}
