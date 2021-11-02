#include<iostream>
using namespace std;
int main(){
	int kubus,total,jari,r2;
	float segitiga,lingkaran,alas,tinggi;
	char pilih,masuk;
	const float sg = 0.5,phi=3.14;
	awal:
	cout<<"-------- Selamat Datang di Program Rumus Perhituangan --------- \n";
	cout<"Pilih nomor berapa Luas bangun datar yang Anda ingin hitung \n";
	cout<<"1. Kubus \n"<<"2. Segitiga \n"<<"3. Lingkaran \n";
	cout<<"silahkan masukkan nomor code rumus perhitungan yang Anda inginkan : ";
	cin>>pilih;
	system("cls");
	switch(pilih){
		case '1':
			cout<<"Anda menggunakan program menghitung rumus volume kubus \n";
			cout<<"Dengan rumus sisi*sisi*sisi \n";
			cout<<"Masukkan nilai sisi kubus : ";
			cin>>kubus;
			total=kubus*kubus*kubus;
			cout<<kubus<<" * "<<kubus<<" * "<<kubus<<" Adalah = "<<total<<"cm^3"<<endl;
			pilihan :
			cout<<"Apakah anda ingin mengulang lagi (y,n) ? = ";
			cin>>masuk;
			if(masuk=='y'){
				cout<<"Anda bersedia untuk mengulang \n";
				system ("cls");
				goto awal;
			}
			else if(masuk=='n'){
				cout<<"Anda tidak bersedia untuk mengulang \n";
				system("cls");
				cout<<"Terima kasih sudah menggunakan program ini "<<endl;
			}
			else
				cout<<"Isi pilihan yang sesuai !!!! \n";
				system("pause");
				goto pilihan;
			break;
		case '2':
			cout<<"Anda menggunakan program menghitung rumus luas segitiga \n";
			cout<<"Dengan rumus 1/2 * a * t \n";
			cout<<"Masukkan nilai alas segitiga : ";
			cin>>alas;
			cout<<"Masukkan nilai tinggi segitiga : ";
			cin>>tinggi;
			segitiga =sg*alas*tinggi;
			cout<<sg<<" * "<<alas<<" * "<<tinggi<<" Adalah = "<<segitiga<<"cm^2"<<endl;
			pilihan1 :
			cout<<"Apakah anda ingin mengulang lagi (y,n) ? = ";
			cin>>masuk;
			if(masuk=='y'){
				cout<<"Anda bersedia untuk mengulang \n";
				system ("cls");
				goto awal;
			}
			else if(masuk=='n'){
				cout<<"Anda tidak bersedia untuk mengulang \n";
				system("cls");
				cout<<"Terima kasih sudah menggunakan program ini "<<endl;
			}
			else
				cout<<"Isi pilihan yang sesuai !!!! \n";
				system("pause");
				goto pilihan1;
			break;
		case '3':
			cout<<"Anda menggunakan program menghitung rumus luas lingkaran \n";
			cout<<"Dengan rumus phi * r^2 \n";
			cout<<"Masukkan nilai jari-jari lingkaran : ";
			cin>>jari;
			r2=jari*jari;
			lingkaran=phi*r2;
			cout<<phi<<" * "<<r2<<" Adalah = "<<lingkaran<<"cm^2"<<endl;
			pilihan2 :
			cout<<"Apakah anda ingin mengulang lagi (y,n) ? = ";
			cin>>masuk;
			if(masuk=='y'){
				cout<<"Anda bersedia untuk mengulang \n";
				system ("cls");
				goto awal;
			}
			else if(masuk=='n'){
				cout<<"Anda tidak bersedia untuk mengulang \n";
				system("cls");
				cout<<"Terima kasih sudah menggunakan program ini "<<endl;
			}
			else
				cout<<"Isi pilihan yang sesuai !!!! \n";
				system("pause");
				goto pilihan2;
		break;
		default:
			cout<<"Masukkan pilihan rumus perhitungan program yang sesuai \n";
			system("cls");
			goto awal;
	}
	
}
