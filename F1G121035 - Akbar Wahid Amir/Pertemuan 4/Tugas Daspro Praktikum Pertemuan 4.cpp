#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
int main(){
	int a,uang,kembali,u=18,t=180,baksotenes,baksosuper,baksobiasa,baksourat,miepangsitbakso,miepangsitbiasa;
	baksotenes = 25000;
	baksosuper = 20000;
	baksobiasa = 15000;
	baksourat  = 18000;
	miepangsitbakso = 20000;
	miepangsitbiasa = 15000;
	//di type data integer saya menyimpan beberapa variabel dan ada variabel yang saya sudah masukkan nilainya
	char pesan;
	string name,nama="Akbar Wahid Amir",n="F1G121035",j="Ilmu Komputer",F="MIPA";
	//di type data string saya menyimpan beberapa variabel
	//disini saya akan membuat sebuah program Daftar Harga Menu Makanan
	//pertama-tama saya ingin program saya mengisi biodata saya terlebih dahulu
	//biodata yang saya tampilkan di program saya ini variabelnya sudah saya simpan di memorinya
	//agar nanti program biodatanya terisi otomatis
	system("color B5");
	//system color yang saya masukkan berfungsi untuk mewarnai tampilan layar pada saat di compile
	//biodata ini saya isi menggunakan nama saya sendiri
	cout<<"************************************************************ \n";
	cout<<"------------------- Biodata Mahasiswa Pembuat Prograam ini ------------------------ \n";
	cout<<"Nama Pelanggan \t: "<<nama<<"\n";
	cout<<"Umur \t\t: "<<u<<" Tahun \n";
	cout<<"Nim \t\t: "<<n<<endl;
	cout<<"Jurusan \t: "<<j<<endl;
	cout<<"Fakultas \t: "<<F<<endl;
	cout<<"Tinggi Badan \t: "<<t<<"cm \n";
	cout<<"=================================================================================== \n";
	cout<<"\n\n";
	system("pause");
	//data diatas otomatis keluar karena variabelnya sudah saya simpan di memorinya
	/*system pause saya gunakan untuk menghentikan sementara program dan bisa dilanjutkan jika saya 
	menekan sesuatu pada keyboard atau apapun*/
	awal:	
	cout<<"========================= Silahkan isi nama pelangggan ============================ \n";
	//disini saya membuat sebuah perintah untuk mengisi nama pelanggan yang ingin membeli
	cout<<"note : nama tidak boleh spasi"<<endl;
	cout<<"\n"<<"Nama Pelanggan : ";
	cin>>name;
	system("cls");
	cout<<"Hallo "<<name<<"\nSelamat datang di warung solo "<<endl;
	cout<<"Silahkan Lihat daftar menunya \n";
	system("pause");
	//saya memakai system pause agar pada saat dicompile dia terjeda dan lanjut jika saya menekan sesuatu di keyboard
	system("cls");
	system("color FC");
	belanja:
	cout<<"============================================================ \n";
	cout<<"************************************************************ \n";
	cout<<"*********** Daftar Menu Makanan Warung Solo **************** \n";
	cout<<"************************************************************  \n";
	cout<<" ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** \n";
	cout<<"============================================================ \n";
	cout<<"1. Bakso Tenes = Rp."<<baksotenes<<" \n2. Bakso Super = Rp."<<baksosuper<<endl;
	cout<<"3. Bakso Biasa = Rp."<<baksobiasa<<"\n";
	cout<<"4. Bakso Urat = Rp."<<baksourat<<" \n5. Mie Pangsit Bakso = Rp."<<miepangsitbakso<<"\n";
	cout<<"6. Mie Pangsit Biasa = Rp."<<miepangsitbiasa<<"\n";
	//jadi karena nilai dari variabel di atas ini sudah saya masukkan nilainya jadi dia otomatis terisi
	cout<<"Silahkan tulis pesanan nomor berapa yang anda pesan yang Anda pesan :";
	cin>>a;
	system("cls");
	/*jika yang diinput ini bukan dari angka 1 sampai 6 maka program otomatis terulang
	karena bernilai false atau tidak memenuhi syarat yang saya buat*/
	switch (a){
		case 1 :
			//case 1 atau aksi satu berlaku bila saya mengisi nomor pesanan (1)
			cout<<"============================================================= \n";
			cout<<"Anda memesan bakso tenes dengan harga Rp."<<baksotenes<< "\n";
			cout<<"Silahkan masukkan uang yang Anda miliki : ";
			cin>>uang;
			cout<<"\n\n\n";
			//jika uang yang saya masukkan melebihi harga 1 porsi bakso tenes maka program saya lanjut di aksi pertama
			if (uang> baksotenes){
				cout<<"Uang yang anda miliki cukup untuk membeli 1 porsi bakso tenes \n";
				cout<<"Uang Anda Adalah : Rp."<<uang<<endl;
				kembali = uang - baksotenes;
				//menentukan uang kembalian saya menggunakan program aritmatika penguranan uang dengan prosi yang saya pesan
				cout<<"Kembalian : Rp."<<kembali<<endl;
				cout<<"\n\n";
				cout<<"Terima kasih sudah belanja di warung kami "<<name<<endl;
				cout<<"Apakah Anda ingin memesan lagi ? (y/n) : ";
				cin>>pesan;
				//kalau saya ketik y maka program otomatis terulang
				if(pesan == 'y'){
					cout<<"Anda setuju memesan ulang \n";
					cout<<"program otomatis terulang ke halaman awal \n";
					system("pause");
					system("cls");
					goto awal;
				}
				else
				//kalau saya ketik default atau bukan dari y maka program diatas akan terhapus dan berlanjut di lembar baru lagi
					system("cls");
					system("color 74");
					cout<<"sampai jumpa di lain hari "<<name<<endl;
					cout<<"Terimakasih sudah berkunjung \n";
			}
			else if(uang==baksotenes){
				cout<<"Uang yang anda miliki cukup untuk membeli 1 porsi bakso tenes \n";
				cout<<"Uang Anda Adalah : Rp."<<uang<<endl;
				kembali = uang - baksotenes;
				//menentukan uang kembalian saya menggunakan program aritmatika penguranan uang dengan prosi yang saya pesan
				cout<<"Kembalian : Rp."<<kembali<<endl;
				cout<<"\n\n";
				cout<<"Terima kasih sudah belanja di warung kami "<<name<<endl;
				cout<<"Apakah Anda ingin memesan lagi ? (y/n) : ";
				cin>>pesan;
				//kalau saya ketik y maka program otomatis terulang
				if(pesan == 'y'){
					cout<<"Anda setuju memesan ulang \n";
					cout<<"program otomatis terulang ke halaman awal \n";
					system("pause");
					system("cls");
					goto awal;
				}
				else
				//kalau saya ketik default atau bukan dari y maka program diatas akan terhapus dan berlanjut di lembar baru lagi
					system("cls");
					system("color 74");
					cout<<"sampai jumpa di lain hari "<<name<<endl;
					cout<<"Terimakasih sudah berkunjung \n";
			
			}
			//jika uang yang saya masukkan tidak sesuai syarat harga pemesanan maka program otomatis terulang
			else{
				cout<<"Mohon Maaf \n";
				cout<<"Uang yang Anda miliki tidak cukup untuk membeli 1 porsi Bakso tenes ini \n";
				cout<<"Silahkan ulang lagi pesanan Anda \n";
				system("pause");
				system("cls");
				goto belanja;
			}
			//disini saya buatkan variabel break agar programnya ada pembatas
			break;
		case 2 :
			//case 2 atau aksi satu berlaku bila saya mengisi nomor pesanan (2)
			cout<<"============================================================= \n";
			cout<<"Anda memesan bakso super dengan harga Rp."<<baksosuper<<"\n";
			cout<<"Silahkan masukkan uang yang Anda miliki : ";
			cin>>uang;
			cout<<"\n\n\n";
			//program berlanjut di if jika uang yang dimiliki lebih dari 20000
			if (uang> baksosuper){
				cout<<"Uang yang anda miliki cukup untuk membeli 1 porsi bakso super \n";
				cout<<"Uang Anda Adalah : Rp."<<uang<<endl;
				kembali = uang - baksosuper;
				cout<<"Kembalian : Rp."<<kembali<<endl;
				cout<<"\n\n";
				cout<<"Terima kasih sudah belanja di warung kami "<<name<<endl;
				cout<<"Apakah Anda ingin memesan lagi ? (y/n) : ";
				cin>>pesan;
				//program mengulang jika saya mengetik (y)
				if(pesan == 'y'){
					cout<<"Anda setuju memesan ulang \n";
					cout<<"program otomatis terulang ke halaman awal \n";
					system("pause");
					system("cls");
					goto awal;
				}
				//program terhenti jika saya menekan selain tombol (y)
				else
					system("cls");
					system("color E4");
					cout<<"sampai jumpa di lain hari "<<name<<endl;
					cout<<"Terimakasih sudah berkunjung \n";
			}
			//program berlanjut disyarat ke dua jika uang yang dimiliki sama dengan harga bakso tenes
			else if(uang == baksosuper){
				cout<<"Uang yang anda miliki cukup untuk membeli 1 porsi bakso super \n";
				cout<<"Uang Anda Adalah : Rp."<<uang<<endl;
				kembali = uang - baksosuper;
				cout<<"Kembalian : Rp."<<kembali<<endl;
				cout<<"\n\n";
				cout<<"Terima kasih sudah belanja di warung kami "<<name<<endl;
				cout<<"Apakah Anda ingin memesan lagi ? (y/n) : ";
				cin>>pesan;
				if(pesan == 'y'){
					cout<<"Anda setuju memesan ulang \n";
					cout<<"program otomatis terulang ke halaman awal \n";
					system("pause");
					system("cls");
					goto awal;
				}
				else
					system("cls");
					system("color 74");
					cout<<"sampai jumpa di lain hari "<<name<<endl;
					cout<<"Terimakasih sudah berkunjung \n";
				
			}
			else{
				cout<<"Mohon Maaf \n";
				cout<<"Uang yang Anda miliki tidak cukup untuk membeli 1 porsi Bakso super ini \n";
				cout<<"Silahkan ulang lagi pesanan Anda \n";
				system("pause");
				system("cls");
				goto belanja;
			}
			break;
		case 3 :
			//case 3 atau aksi tiga berlaku bila saya mengisi nomor pesanan (3)
			cout<<"============================================================= \n";
			cout<<"Anda memesan bakso biasa dengan harga Rp."<<baksobiasa<<"\n";
			cout<<"Silahkan masukkan uang yang Anda miliki : ";
			cin>>uang;
			cout<<"\n\n\n";
			if (uang > baksobiasa){
				cout<<"Uang yang anda miliki cukup untuk membeli 1 porsi bakso biasa \n";
				cout<<"Uang Anda Adalah : Rp."<<uang<<endl;
				kembali = uang - baksobiasa;
				cout<<"Kembalian : Rp."<<kembali<<endl;
				cout<<"\n\n";
				cout<<"Terima kasih sudah belanja di warung kami "<<name<<endl;
				cout<<"Apakah Anda ingin memesan lagi ? (y/n) : ";
				cin>>pesan;
				if(pesan == 'y'){
					cout<<"Anda setuju memesan ulang \n";
					cout<<"program otomatis terulang ke halaman awal \n";
					system("pause");
					system("cls");
					goto awal;
				}
				else
					system("cls");
					system("color 74");
					cout<<"sampai jumpa di lain hari "<<name<<endl;
					cout<<"Terimakasih sudah berkunjung \n";
			}
			else if(uang== baksobiasa){
				cout<<"Uang yang anda miliki cukup untuk membeli 1 porsi bakso biasa \n";
				cout<<"Uang Anda Adalah : Rp."<<uang<<endl;
				kembali = uang - baksobiasa;
				cout<<"Kembalian : Rp."<<kembali<<endl;
				cout<<"\n\n";
				cout<<"Terima kasih sudah belanja di warung kami "<<name<<endl;
				cout<<"Apakah Anda ingin memesan lagi ? (y/n) : ";
				cin>>pesan;
				if(pesan == 'y'){
					cout<<"Anda setuju memesan ulang \n";
					cout<<"program otomatis terulang ke halaman awal \n";
					system("pause");
					system("cls");
					goto awal;
				}
				else
					system("cls");
					system("color 74");
					cout<<"sampai jumpa di lain hari "<<name<<endl;
					cout<<"Terimakasih sudah berkunjung \n";
			}
			else{
				cout<<"Mohon Maaf \n";
				cout<<"Uang yang Anda miliki tidak cukup untuk membeli 1 porsi Bakso Biasa ini \n";
				cout<<"Silahkan ulang lagi pesanan Anda \n";
				system("pause");
				system("cls");
				goto belanja;
			}
			break;
			case 4 :
			//case 4 atau aksi empat berlaku bila saya mengisi nomor pesanan (4)
			cout<<"Anda memesan bakso urat dengan harga Rp."<<baksourat<<"\n";
			cout<<"Silahkan masukkan uang yang Anda miliki : ";
			cin>>uang;
			cout<<"\n\n\n";
			if (uang> baksourat){
				cout<<"Uang yang anda miliki cukup untuk membeli 1 porsi bakso urat \n";
				cout<<"Uang Anda Adalah : Rp."<<uang<<endl;
				kembali = uang - baksourat;
				cout<<"Kembalian : Rp."<<kembali<<endl;
				cout<<"\n\n";
				cout<<"Terima kasih sudah belanja di warung kami "<<name<<endl;
				cout<<"Apakah Anda ingin memesan lagi ? (y/n) : ";
				cin>>pesan;
				if(pesan == 'y'){
					cout<<"Anda setuju memesan ulang \n";
					cout<<"program otomatis terulang ke halaman awal \n";
					system("pause");
					system("cls");
					goto awal;
				}
				else
					system("cls");
					system("color 74");
					cout<<"sampai jumpa di lain hari "<<name<<endl;
					cout<<"Terimakasih sudah berkunjung \n";
			}
			else if (uang>= baksourat){
				cout<<"Uang yang anda miliki cukup untuk membeli 1 porsi bakso urat \n";
				cout<<"Uang Anda Adalah : Rp."<<uang<<endl;
				kembali = uang - baksourat;
				cout<<"Kembalian : Rp."<<kembali<<endl;
				cout<<"\n\n";
				cout<<"Terima kasih sudah belanja di warung kami "<<name<<endl;
				cout<<"Apakah Anda ingin memesan lagi ? (y/n) : ";
				cin>>pesan;
				if(pesan == 'y'){
					cout<<"Anda setuju memesan ulang \n";
					cout<<"program otomatis terulang ke halaman awal \n";
					system("pause");
					system("cls");
					goto awal;
				}
				else
					system("cls");
					system("color 74");
					cout<<"sampai jumpa di lain hari "<<name<<endl;
					cout<<"Terimakasih sudah berkunjung \n";
			}
			else{
				cout<<"Mohon Maaf \n";
				cout<<"Uang yang Anda miliki tidak cukup untuk membeli 1 porsi Bakso Urat ini \n";
				cout<<"Silahkan ulang lagi pesanan Anda \n";
				system("pause");
				system("cls");
				goto belanja;
			}
			break;
			case 5 :
			//case 5 atau aksi lima berlaku bila saya mengisi nomor pesanan (5)
			cout<<"============================================================= \n";
			cout<<"Anda memesan Mie pangsit bakso dengan harga Rp."<<miepangsitbakso<<"\n";
			cout<<"Silahkan masukkan uang yang Anda miliki : ";
			cin>>uang;
			cout<<"\n\n\n";
			if (uang> miepangsitbakso){
				cout<<"Uang yang anda miliki cukup untuk membeli 1 porsi mie pangsit bakso \n";
				cout<<"Uang Anda Adalah : Rp."<<uang<<endl;
				kembali = uang - miepangsitbakso;
				cout<<"Kembalian : Rp."<<kembali<<endl;
				cout<<"\n\n";
				cout<<"Terima kasih sudah belanja di warung kami "<<name<<endl;
				cout<<"Apakah Anda ingin memesan lagi ? (y/n) : ";
				cin>>pesan;
				if(pesan == 'y'){
					cout<<"Anda setuju memesan ulang \n";
					cout<<"program otomatis terulang ke halaman awal \n";
					system("pause");
					system("cls");
					goto awal;
				}
				else
					system("cls");
					system("color 74");
					cout<<"sampai jumpa di lain hari "<<name<<endl;
					cout<<"Terimakasih sudah berkunjung \n";
			}
			else if(uang== miepangsitbakso){
				cout<<"Uang yang anda miliki cukup untuk membeli 1 porsi mie pangsit bakso \n";
				cout<<"Uang Anda Adalah : Rp."<<uang<<endl;
				kembali = uang - miepangsitbakso;
				cout<<"Kembalian : Rp."<<kembali<<endl;
				cout<<"\n\n";
				cout<<"Terima kasih sudah belanja di warung kami "<<name<<endl;
				cout<<"Apakah Anda ingin memesan lagi ? (y/n) : ";
				cin>>pesan;
				if(pesan == 'y'){
					cout<<"Anda setuju memesan ulang \n";
					cout<<"program otomatis terulang ke halaman awal \n";
					system("pause");
					system("cls");
					goto awal;
				}
				else
					system("cls");
					system("color 74");
					cout<<"sampai jumpa di lain hari "<<name<<endl;
					cout<<"Terimakasih sudah berkunjung \n";
			}
			else{
				cout<<"Mohon Maaf \n";
				cout<<"Uang yang Anda miliki tidak cukup untuk membeli 1 porsi Mie Pangsit Bakso  ini \n";
				cout<<"Silahkan ulang lagi pesanan Anda \n";
				system("pause");
				system("cls");
				goto belanja;
			}
			break;
			case 6 :
			//case 6 atau aksi enam berlaku bila saya mengisi nomor pesanan (6)
			cout<<"============================================================= \n";
			cout<<"Anda memesan Mie Pangsit Biasa dengan harga Rp."<<miepangsitbiasa<<"\n";
			cout<<"Silahkan masukkan uang yang Anda miliki : ";
			cin>>uang;
			cout<<"\n\n\n";
			if (uang> miepangsitbiasa){
				cout<<"Uang yang anda miliki cukup untuk membeli 1 porsi mie pangsit biasa \n";
				cout<<"Uang Anda Adalah : Rp."<<uang<<endl;
				kembali = uang - miepangsitbiasa;
				cout<<"Kembalian : Rp."<<kembali<<endl;
				cout<<"\n\n";
				cout<<"Terima kasih sudah belanja di warung kami "<<name<<endl;
				cout<<"Apakah Anda ingin memesan lagi ? (y/n) : ";
				cin>>pesan;
				if(pesan == 'y'){
					cout<<"Anda setuju memesan ulang \n";
					cout<<"program otomatis terulang ke halaman awal \n";
					system("pause");
					system("cls");
					goto awal;
				}
				else
					system("cls");
					system("color 74");
					cout<<"sampai jumpa di lain hari "<<name<<endl;
					cout<<"Terimakasih sudah berkunjung \n";
			}
			else if(uang==miepangsitbiasa){
				cout<<"Uang yang anda miliki cukup untuk membeli 1 porsi mie pangsit biasa \n";
				cout<<"Uang Anda Adalah : Rp."<<uang<<endl;
				kembali = uang - miepangsitbiasa;
				cout<<"Kembalian : Rp."<<kembali<<endl;
				cout<<"\n\n";
				cout<<"Terima kasih sudah belanja di warung kami "<<name<<endl;
				cout<<"Apakah Anda ingin memesan lagi ? (y/n) : ";
				cin>>pesan;
				if(pesan == 'y'){
					cout<<"Anda setuju memesan ulang \n";
					cout<<"program otomatis terulang ke halaman awal \n";
					system("pause");
					system("cls");
					goto awal;
				}
				else
					system("cls");
					system("color 74");
					cout<<"sampai jumpa di lain hari "<<name<<endl;
					cout<<"Terimakasih sudah berkunjung \n";
			}
			else{
				cout<<"Mohon Maaf \n";
				cout<<"Uang yang Anda miliki tidak cukup untuk membeli 1 porsi Mie Pangsit Biasa ini \n";
				cout<<"Silahkan ulang lagi pesanan Anda \n";
				system("pause");
				system("cls");
				goto belanja;
			}
			break;
		default :
			cout<<"Masukkan nomor pesanan yang sesuai di daftar menu \n";
			system("pause");
			system("cls");
			goto awal;
				
	}
	
	getch();
	
}
