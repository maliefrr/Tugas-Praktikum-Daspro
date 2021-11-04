#include<iostream>
using namespace std;
int main(){
	int inputlog, jumlah;
	char pilihan;
	awal:
		
	cout<<"===========ilkom shopp==========="<<endl
	<<"=====NAMA       :   MAJID YUNUS====="<<endl
	<<"=====NIM        :   F1G121070====="<<endl
	<<"=====PRODI      :   ILMU KOMPUTER====="<<endl;
	cout<<""<<endl;
	cout<<"daftar pembelian"<<endl;
	cout<<"1.hp oppo a5 2020"<<endl
		<<"2.hp oppo a15"<<endl
		<<"3.hp relme c15"<<endl;
	cout<<""<<endl;
	cout<<"Masukan Pilihan Anda: ";
	cin>>inputlog;
	switch(inputlog){
		system("cls");
		case 1:
		    cout<<"Hp oppo a5 2020 RP.2.499.000"<<endl;
			cout<<"masukan jumah pesanan anda = ";
			cin>>jumlah;
			system("cls");	
			cout<<"pembelian anda berhasil,total harga pembelian anda sebesar= "<<jumlah*2499000<<endl;
			cout<<"jika anda ingin membeli hp model lain (y/n)"<<endl;
			cin>>pilihan;
			if(pilihan == 'n'){
				system("cls");
				
				cout<<"terimakasih telah melakukan pembelian di tokoh kami"<<endl
				<<"kami akan melakukan proses pembelian"<<endl;
				
		
				}		else if(pilihan = 'y'){
					system("cls");
					cout<<"silahkan pilih hp model lain"<<endl;
					goto awal;
			}
				break;
			case 2:
		    cout<<"Hp oppo a15 RP.2.000.000"<<endl;
			cout<<"masukan jumah pesanan anda = ";
			cout<<""<<endl;
			cin>>jumlah;
			system("cls");	
			cout<<"pembelian anda berhasil,total harga pembelian anda sebesar= "<<jumlah*2000000<<endl;
			cout<<"jika anda ingin membeli hp model lain (y/n)"<<endl;
			cin>>pilihan;
			if(pilihan == 'n'){
				system("cls");
				
				cout<<"terimakasih telah melakukan pembelian di tokoh kami"<<endl;
				cout<<"cie dapat hp baru"<<endl;
				
		
				}		else if(pilihan = 'y'){
					system("cls");
					cout<<"silahkan pilih hp model lain"<<endl;
					goto awal;
				
				break;		
			}
				
			
				case 3:
		    cout<<"Hp relme a15 RP.2.200.000"<<endl;
			cout<<"maskan jumah pesanan anda = ";
			cin>>jumlah;
			system("cls");	
			cout<<"pembelian anda berhasil,total harga pembelian anda sebesar= "<<jumlah*2200000<<endl;
			cout<<"jika anda ingin membeli hp model lain (y/n)"<<endl;
			cin>>pilihan;
				if(pilihan == 'n'){
				system("cls");
				
				cout<<"terimakasih telah melakukan pembelian di tokoh kami"<<endl;
				cout<<"cie dapat hp baru"<<endl;
				
		
				}	else if(pilihan = 'y'){
					system("cls");
					cout<<"silahkan pilih hp model lain"<<endl;
					goto awal;
				
				break;
    }
}
}
