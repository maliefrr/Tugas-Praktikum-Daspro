#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
int main(){
	const int mie=75000,beras=500000,minyak=25000,kecap=20000,sambal=18000,susu=45000,teh=30000,milo=35000,kopi=25000;
	int jumlah,harga,bayar,kembali;
	char isi,pilih_nomor;
	utama:
	system("color 74");
	cout<<"========================================================================= \n";
	cout<<"\t\t\tMINI MARKET AMELIA \n";
	cout<<"\t\tAplikasi Kasir Mini Market Amelia \n";
	cout<<"========================================================================= \n\n";
	cout<<"Pesanan\t\t\t\t\tHarga \n";
	cout<<"1. Indomie\t\t\t\tRp."<<mie<<endl;
	cout<<"2. Beras\t\t\t\tRp."<<beras<<endl;
	cout<<"3. Minyak\t\t\t\tRp."<<minyak<<endl;
	cout<<"4. Kecap\t\t\t\tRp."<<kecap<<endl;
	cout<<"5. Sambal\t\t\t\tRp."<<sambal<<endl;
	cout<<"6. Susu\t\t\t\t\tRp."<<susu<<endl;
	cout<<"7. Teh\t\t\t\t\tRp."<<teh<<endl;
	cout<<"8. Kopi\t\t\t\t\tRp."<<kopi<<endl;
	cout<<"9. Milo\t\t\t\t\tRp."<<milo<<endl;
	cout<<"\n\n";
	cout<<"Masukkan Pilihan Anda : ";
	cin>>pilih_nomor;
	switch(pilih_nomor){
		case '1':
			cout<<"Indomie \n";
			cout<<"Masukkan Jumlah : ";
			cin>>jumlah;
			harga=jumlah*mie;
			cout<<"Total Harganya Yaitu : Rp."<<harga<<endl;
			cout<<"DIBAYAR : Rp.";
			cin>>bayar;
			if(bayar>harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto utama;
				}
				else{
					cout<<"\n\n";
					cout<<"Terimakasih sudah belanja di minimarket amelia \n";
			}
			}
			else if(bayar==harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto utama;
				}
				else{
					cout<<"\n\n";
					cout<<"Terimakasih sudah belanja di minimarket amelia \n";
			}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup silahkan pesan ulang \n";
				system("cls");
				system("pause");
				goto utama;
			}
			break;
			case '2':
			cout<<"Beras \n";
			cout<<"Masukkan Jumlah : ";
			cin>>jumlah;
			harga=jumlah*beras;
			cout<<"Total Harganya Yaitu : Rp."<<harga<<endl;
			cout<<"DIBAYAR : Rp.";
			cin>>bayar;
			if(bayar>harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto utama;
				}
				else{
					cout<<"\n\n";
					cout<<"Terimakasih sudah belanja di minimarket amelia \n";
			}
			}
			else if(bayar==harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto utama;
				}
				else{
					cout<<"\n\n";
					cout<<"Terimakasih sudah belanja di minimarket amelia \n";
			}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup silahkan pesan ulang \n";
				system("pause");
				system("cls");
				goto utama;
			}
			break;
			case '3':
			cout<<"Minyak \n";
			cout<<"Masukkan Jumlah : ";
			cin>>jumlah;
			harga=jumlah*minyak;
			cout<<"Total Harganya Yaitu : Rp."<<harga<<endl;
			cout<<"DIBAYAR : Rp.";
			cin>>bayar;
			if(bayar>harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto utama;
				}
				else{
					cout<<"\n\n";
					cout<<"Terimakasih sudah belanja di minimarket amelia \n";
			}
			}
			else if(bayar==harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto utama;
				}
				else{
					cout<<"\n\n";
					cout<<"Terimakasih sudah belanja di minimarket amelia \n";
			}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup silahkan pesan ulang \n";
				system("pause");
				system("cls");
				goto utama;
			}
			break;
			case '4':
			cout<<"Kecap \n";
			cout<<"Masukkan Jumlah : ";
			cin>>jumlah;
			harga=jumlah*kecap;
			cout<<"Total Harganya Yaitu : Rp."<<harga<<endl;
			cout<<"DIBAYAR : Rp.";
			cin>>bayar;
			if(bayar>harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto utama;
				}
				else{
					cout<<"\n\n";
					cout<<"Terimakasih sudah belanja di minimarket amelia \n";
			}
			}
			else if(bayar==harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto utama;
				}
				else{
					cout<<"\n\n";
					cout<<"Terimakasih sudah belanja di minimarket amelia \n";
			}
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup silahkan pesan ulang \n";
				system("pause");
				system("cls");
				goto utama;
			}
			break;
			case '5':
			cout<<"Sambal \n";
			cout<<"Masukkan Jumlah : ";
			cin>>jumlah;
			harga=jumlah*sambal;
			cout<<"Total Harganya Yaitu : Rp."<<harga<<endl;
			cout<<"DIBAYAR : Rp.";
			cin>>bayar;
			if(bayar>harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto utama;
				}
				else{
					cout<<"\n\n";
					cout<<"Terimakasih sudah belanja di minimarket amelia \n";
			}
			}
			else if(bayar==harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto utama;
				}
				else
					cout<<"\n\n";
					cout<<"Terimakasih sudah belanja di minimarket amelia \n";
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup silahkan pesan ulang \n";
				system("pause");
				system("cls");
				goto utama;
			}
			break;
			case '6':
			cout<<"Susu \n";
			cout<<"Masukkan Jumlah : ";
			cin>>jumlah;
			harga=jumlah*susu;
			cout<<"Total Harganya Yaitu : Rp."<<harga<<endl;
			cout<<"DIBAYAR : Rp.";
			cin>>bayar;
			if(bayar>harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto utama;
				}
				else{
					cout<<"\n\n";
					cout<<"Terimakasih sudah belanja di minimarket amelia \n";
			}
			}
			else if(bayar==harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto utama;
				}
				else
					cout<<"\n\n";
					cout<<"Terimakasih sudah belanja di minimarket amelia \n";
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup silahkan pesan ulang \n";
				system("pause");
				system("cls");
				goto utama;
			}
			break;
			case '7':
			cout<<"Teh \n";
			cout<<"Masukkan Jumlah : ";
			cin>>jumlah;
			harga=jumlah*teh;
			cout<<"Total Harganya Yaitu : Rp."<<harga<<endl;
			cout<<"DIBAYAR : Rp.";
			cin>>bayar;
			if(bayar>harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto utama;
				}
				else{
					cout<<"\n\n";
					cout<<"Terimakasih sudah belanja di minimarket amelia \n";
			}
			}
			else if(bayar==harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto utama;
				}
				else
					cout<<"\n\n";
					cout<<"Terimakasih sudah belanja di minimarket amelia \n";
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup silahkan pesan ulang \n";
				system("pause");
				system("cls");
				goto utama;
			}
			break;
			case '8':
			cout<<"Kopi \n";
			cout<<"Masukkan Jumlah : ";
			cin>>jumlah;
			harga=jumlah*kopi;
			cout<<"Total Harganya Yaitu : Rp."<<harga<<endl;
			cout<<"DIBAYAR : Rp.";
			cin>>bayar;
			if(bayar>harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto utama;
				}
				else{
					cout<<"\n\n";
					cout<<"Terimakasih sudah belanja di minimarket amelia \n";
			}
			}
			else if(bayar==harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto utama;
				}
				else
					cout<<"\n\n";
					cout<<"Terimakasih sudah belanja di minimarket amelia \n";
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup silahkan pesan ulang \n";
				system("pause");
				system("cls");
				goto utama;
			}
			break;
			case '9':
			cout<<"Milo \n";
			cout<<"Masukkan Jumlah : ";
			cin>>jumlah;
			harga=jumlah*milo;
			cout<<"Total Harganya Yaitu : Rp."<<harga<<endl;
			cout<<"DIBAYAR : Rp.";
			cin>>bayar;
			if(bayar>harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto utama;
				}
				else{
					cout<<"\n\n";
					cout<<"Terimakasih sudah belanja di minimarket amelia \n";
			}
			}
			else if(bayar==harga){
				kembali=bayar-harga;
				cout<<"KEMBALI : Rp."<<kembali<<endl;
				cout<<"Masih ingin pesan (Y/T) : ";
				cin>>isi;
				if(isi=='Y'){
					system("cls");
					goto utama;
				}
				else
					cout<<"\n\n";
					cout<<"Terimakasih sudah belanja di minimarket amelia \n";
			}
			else{
				cout<<"Uang yang dimiliki tidak cukup silahkan pesan ulang \n";
				system("pause");
				system("cls");
				goto utama;
			}
			break;
			default:
				cout<<"Masukkan Nomor Pesanan Yang sesuai \n";
	}
	getch();
}



