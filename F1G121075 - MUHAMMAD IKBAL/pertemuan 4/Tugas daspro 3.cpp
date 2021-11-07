#include<iostream>
using namespace std;
int main(){
	int pantai,gunung,bukit,a,tiket,bayar,total;
	char y;
	//harga tiket wisata
	pantai = 50000;
	gunung = 150000;
	bukit = 25000;
	wisata :
	cout<<"************************************************************* \n";
	cout<<"========= Selamat Datang di program destinasi Wisata ======== \n";
	cout<<"************************************************************* \n";
	cout<<"1. Gunung Semeru \n2. Pantai Pasir Putih \n3. Bukit Ahuawali \n";
	cout<<"============================================================= \n";
	cout<<"Silahkan Masukkan Nomor Tujuan Wisata Anda \n";
	cin>>a;
	switch (a){
		case 1 :
			cout<<"Anda memilih ke wisata gunung semeru \n";
			cout<<"Dengan Harga tiket rp,"<<gunung<<endl;
			cout<<"Silahkan masukkan jumlah tiket yang Anda inginkan \n";
			cin>>tiket;
			total = tiket * gunung ;
			cout<<"Jumlah yang Anda bayar adalah Rp,"<<total<<endl;
			cout<<"Input uang yang Anda miliki \n";
			cin>>bayar;
			if(bayar>total){
				cout<<"Uang yang Anda miliki cukup untuk membeli tiket gunung semeru \n";
				cout<<"dengan jumlah tiket yang diinginakn "<<tiket<<endl;
				cout<<"Dan total keseluruhan Rp,"<<total<<endl;
				cout<<"Uang yang Anda miliki Rp,"<<bayar<<endl;
				cout<<"Kembalian uang Rp,"<<bayar-total<<endl;
				system("pause");
				system("cls");
				cout<<"Apakah Anda inging mengulang lagi (y/n) :";
				cin>>y;
				if(y=='y'){
					cout<<"Anda bersedia mengulang kembali program \n";
					system("cls");
					goto wisata;
				}
				else{
					cout<<"Terima kasih sudah memakai program kami \n";
					cout<<"Sampai jumpa di lain hari \n";
				}
			}
			else if(bayar==total){
				cout<<"Uang yang Anda miliki cukup untuk membeli tiket gunung semeru \n";
				cout<<"dengan jumlah tiket yang diinginakn "<<tiket<<endl;
				cout<<"Dan total keseluruhan Rp,"<<total<<endl;
				cout<<"Uang yang Anda miliki Rp,"<<bayar<<endl;
				cout<<"Kembalian uang Rp,"<<bayar-total<<endl;
				system("pause");
				system("cls");
				cout<<"Apakah Anda inging mengulang lagi (y/n) :";
				cin>>y;
				if(y=='y'){
					cout<<"Anda bersedia mengulang kembali program \n";
					system("cls");
					goto wisata;
				}
				else{
					cout<<"Terima kasih sudah memakai program kami \n";
					cout<<"Sampai jumpa di lain hari \n";
				}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup \n";
				cout<<"periksa kembali uang Anda dan silahkan cek ulang pesanan \n";
				system("pause");
				system("cls");
				goto wisata;
			}
			break;
			case 2 :
			cout<<"Anda memilih ke Pantai pasir putih \n";
			cout<<"Dengan Harga tiket rp,"<<pantai<<endl;
			cout<<"Silahkan masukkan jumlah tiket yang Anda inginkan \n";
			cin>>tiket;
			total = tiket * pantai ;
			cout<<"Jumlah yang Anda bayar adalah Rp,"<<total<<endl;
			cout<<"Input uang yang Anda miliki \n";
			cin>>bayar;
			if(bayar>total){
				cout<<"Uang yang Anda miliki cukup untuk membeli tiket Pantai pasir putih \n";
				cout<<"dengan jumlah tiket yang diinginakn "<<tiket<<endl;
				cout<<"Dan total keseluruhan Rp,"<<total<<endl;
				cout<<"Uang yang Anda miliki Rp,"<<bayar<<endl;
				cout<<"Kembalian uang Rp,"<<bayar-total<<endl;
				system("pause");
				system("cls");
				cout<<"Apakah Anda inging mengulang lagi (y/n) :";
				cin>>y;
				if(y=='y'){
					cout<<"Anda bersedia mengulang kembali program \n";
					system("cls");
					goto wisata;
				}
				else{
					cout<<"Terima kasih sudah memakai program kami \n";
					cout<<"Sampai jumpa di lain hari \n";
				}
			}
			else if(bayar==total){
				cout<<"Uang yang Anda miliki cukup untuk membeli tiket Pantai pasir putih \n";
				cout<<"dengan jumlah tiket yang diinginakn "<<tiket<<endl;
				cout<<"Dan total keseluruhan Rp,"<<total<<endl;
				cout<<"Uang yang Anda miliki Rp,"<<bayar<<endl;
				cout<<"Kembalian uang Rp,"<<bayar-total<<endl;
				system("pause");
				system("cls");
				cout<<"Apakah Anda inging mengulang lagi (y/n) :";
				cin>>y;
				if(y=='y'){
					cout<<"Anda bersedia mengulang kembali program \n";
					system("cls");
					goto wisata;
				}
				else{
					cout<<"Terima kasih sudah memakai program kami \n";
					cout<<"Sampai jumpa di lain hari \n";
				}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup \n";
				cout<<"periksa kembali uang Anda dan silahkan cek ulang pesanan \n";
				system("pause");
				system("cls");
				goto wisata;
			}
			break;
			case 3 :
			cout<<"Anda memilih ke Bukit Ahuawali \n";
			cout<<"Dengan Harga tiket rp,"<<bukit<<endl;
			cout<<"Silahkan masukkan jumlah tiket yang Anda inginkan \n";
			cin>>tiket;
			total = tiket * bukit ;
			cout<<"Jumlah yang Anda bayar adalah Rp,"<<total<<endl;
			cout<<"Input uang yang Anda miliki \n";
			cin>>bayar;
			if(bayar>total){
				cout<<"Uang yang Anda miliki cukup untuk membeli tiket Bukit Ahuawali \n";
				cout<<"dengan jumlah tiket yang diinginakn "<<tiket<<endl;
				cout<<"Dan total keseluruhan Rp,"<<total<<endl;
				cout<<"Uang yang Anda miliki Rp,"<<bayar<<endl;
				cout<<"Kembalian uang Rp,"<<bayar-total<<endl;
				system("pause");
				system("cls");
				cout<<"Apakah Anda inging mengulang lagi (y/n) :";
				cin>>y;
				if(y=='y'){
					cout<<"Anda bersedia mengulang kembali program \n";
					system("cls");
					goto wisata;
				}
				else{
					cout<<"Terima kasih sudah memakai program kami \n";
					cout<<"Sampai jumpa di lain hari \n";
				}
			}
			else if(bayar==total){
				cout<<"Uang yang Anda miliki cukup untuk membeli tiket Bukit Ahuawali \n";
				cout<<"dengan jumlah tiket yang diinginkan "<<tiket<<endl;
				cout<<"Dan total keseluruhan Rp,"<<total<<endl;
				cout<<"Uang yang Anda miliki Rp,"<<bayar<<endl;
				cout<<"Kembalian uang Rp,"<<bayar-total<<endl;
				system("pause");
				system("cls");
				cout<<"Apakah Anda inging mengulang lagi (y/n) :";
				cin>>y;
				if(y=='y'){
					cout<<"Anda bersedia mengulang kembali program \n";
					system("cls");
					goto wisata;
				}
				else{
					cout<<"Terima kasih sudah memakai program kami \n";
					cout<<"Sampai jumpa di lain hari \n";
				}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup \n";
				cout<<"periksa kembali uang Anda dan silahkan cek ulang pesanan \n";
				system("pause");
				system("cls");
				goto wisata;
			}
			break;
			default:
				cout<<"masukkan nomor pesanan wisata yang sesuai \n";
				system("pause");
				system("cls");
				goto wisata;
	}
	return 0;
	
}

