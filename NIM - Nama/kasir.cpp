#include <iostream>
#include <string>

using namespace std;

void display_menu();

void struk(int data[],int total , int bayar ,int kembalian,int ulang);

void perhitungan();


int main(){
	perhitungan();
	return 0;
}

void display_menu(){
	cout << "\t\t\t\t\t*****************************************************************"<<endl;
	cout << "\t\t\t\t\t|                               MENU                            |"<<endl;
	cout << "\t\t\t\t\t|                                                               |" << endl;
	cout << "\t\t\t\t\t================================================================="<<endl;
	cout << "\t\t\t\t\t|          Makanan              |            Minuman            |"<<endl;
	cout << "\t\t\t\t\t================================================================="<<endl;
	cout << "\t\t\t\t\t| 1. Rawon       (Rp.15.000)    | 5. Es Teh          (Rp.3000)  |"<<endl;
	cout << "\t\t\t\t\t| 2. Soto Ayam   (Rp.18.000)    | 6. Es Jeruk        (Rp.5000)  |"<<endl;
	cout << "\t\t\t\t\t| 3. Nasi Campur (Rp.10.000)    | 7. Es Melon        (Rp.8000)  |"<<endl;
	cout << "\t\t\t\t\t| 4. Nasi Kuning (Rp.10.000)    | 8. Es Teh Tarik    (Rp.8000)  |"<<endl;
	cout << "\t\t\t\t\t================================================================="<<endl;
}

void struk(int data[],int total , int bayar ,int kembalian,int ulang){
	int harga[8] = {15000,18000,10000,10000,3000,5000,8000,8000};
	string menu_tulisan[8] = {"Rawon","Soto Ayam","Nasi Campur","Nasi Kuning","Es Teh","Es Jeruk","Es Melon","Es Teh Tarik"};
	
}

void perhitungan(){
	int menu,total,kembalian,count,data[20],bayar;
	int harga[8] = {15000,18000,10000,10000,3000,5000,8000,8000};
	string menu_tulisan[8] = {"Rawon","Soto Ayam","Nasi Campur","Nasi Kuning","Es Teh","Es Jeruk","Es Melon","Es Teh Tarik"};
	char konfirmasi;
	menu:
		display_menu();
		total = 0;
		count = 0;
		while(true){
			cout << endl << "Silakan masukkan nomor menu yang ingin dipesan (1-8): ";cin>>menu;
			cout << "Apakah ada menu lain yang di pesan? (y/n): ";cin>>konfirmasi;
			total += harga[menu - 1];
			data[count] = menu - 1;
			count++;
			if(konfirmasi == 'y'){
				continue;
			}
			else if(konfirmasi == 'n'){
				break;
			}
			else {
				system("cls");
				system("color 0E");
				cout << "Input yang anda masukkan invalid! Silakan input ulang ....\n\n";
				goto menu;
			}
	}
	cout << "\nTotal belanja Anda adalah Rp."<<total<<endl;
	cout << "Uang yang dibayar \t: Rp.";cin>>bayar;
		kembalian = bayar - total;
		if(bayar > total){
			cout << "Kembali \t\t: Rp."<<kembalian<<endl;
			konfirmasi:
			cout << "\nApakah Anda ingin melihat detail pembelian ? (y/n): ";cin>>konfirmasi;
			if(konfirmasi == 'y'){
				system("cls");
				system("color 0A");
				cout << "\t\t\t\t\t*********************************************************" << endl;
				cout << "\t\t\t\t\t|                    MENU YANG DIPESAN                  |" << endl;
				cout << "\t\t\t\t\t|                                                       |" << endl;
				cout << "\t\t\t\t\t*********************************************************" << endl;
				for(int i = 0 ; i<count ; i++){
					cout<<"\t\t\t\t\t|  " << menu_tulisan[data[i]]<<"\t: Rp."<<harga[data[i]]<< "\t\t\t\t|" << endl;
				}
			cout<<"\t\t\t\t\t========================================================="<<endl;
			cout<<"\t\t\t\t\t|  Total\t: Rp."<<total<< "\t\t\t\t|" <<endl;
			cout<<"\t\t\t\t\t|  Bayar\t: Rp."<<bayar<<"\t\t\t\t|" <<endl;
			cout<<"\t\t\t\t\t|  Kembali\t: Rp."<<kembalian<<"\t\t\t\t|" <<endl;
			cout<<"\t\t\t\t\t========================================================="<<endl;
			}
			else if(konfirmasi == 'n'){
				system("cls");
				cout << "Terima Kasih telah menggunakan aplikasi kami";
			}
			else {
				system("cls");
			    system("color 0C");
				cout <<"\t\t\t\t\t\t\t********\INVALID INPUT!********\n\n";
				goto konfirmasi;
			}	
		}
		else if(bayar == total){
			cout << "Kembali \t\t: Rp.0"<<endl;
			confirmation:
			cout << "\nApakah Anda ingin melihat detail pembelian ? (y/n): ";cin>>konfirmasi;
			if(konfirmasi == 'y'){
				system("color 0A");
				system("cls");
				cout << "\t\t\t\t\t*********************************************************" << endl;
				cout << "\t\t\t\t\t|                    MENU YANG DIPESAN                  |" << endl;
				cout << "\t\t\t\t\t|                                                       |" << endl;
				cout << "\t\t\t\t\t*********************************************************" << endl;
				for(int i = 0 ; i<count ; i++){
					cout<<"\t\t\t\t\t|  " << menu_tulisan[data[i]]<<"\t: Rp."<<harga[data[i]]<< "\t\t\t\t|" << endl;
				}
			cout<<"\t\t\t\t\t========================================================="<<endl;
			cout<<"\t\t\t\t\t|  Total\t: Rp."<<total<< "\t\t\t\t|" <<endl;
			cout<<"\t\t\t\t\t|  Bayar\t: Rp."<<bayar<<"\t\t\t\t|" <<endl;
			cout<<"\t\t\t\t\t|  Kembali\t: Rp."<<kembalian<<"\t\t\t\t\t|" <<endl;
			cout<<"\t\t\t\t\t========================================================="<<endl;
			}
			else if(konfirmasi == 'n'){
				system("cls");
				cout << "Terima Kasih telah menggunakan aplikasi kami";
			}
			else {
				system("cls");
				system("color 0C");
				cout <<"\t\t\t\t\t\t\t********INVALID INPUT!********\n\n";
				goto confirmation;
			}
		}
		else {
			system("color 0C");
			cout << "\t\t\t\t\t\t\t********UANG ANDA KURANG!********\n\n";
		}	
}
