#include<iostream>
using namespace std;
int main(){
	cout<<"--- SELAMAT DATANG DI PROGRAM REGISTRASI DAN LOGIN AKUN BY AKBAR WAHID AMIR ---"<<endl;
	/*Tugas Praktikum Daspro membuat halaman login dengan menggunakan username dan password
	-dalam program ini saya memasukkan instruksi pemilihan dengan if dan else- 
	---pertama-tama saya akan membuat akun dulu di halaman registrasi---*/
	string user,user1,pass,pass1,pass2,isi;
	ulang:
		cout<<"---------------------Halaman Registrasi-------------------------------"<<endl;
		cout<<"Buat akun terlebih dahulu"<<endl;
		//di halaman registrasi ini program saya akan menyuruh memasukkan username dan password yang akan saya buat
		cout<<"Masukkan Username = ";
		getline(cin,user);
		cout<<"Masukkan Password = ";
		getline(cin,pass);
		cout<<"Masukkan Ulang Password yang Anda masukkan di atas= ";
		getline(cin,pass1);
			if(pass==pass1){
				cout<<"Akun Anda Sudah Terdaftar"<<endl;
				/*apabila password verifikasi yang sya masukkan sama dengan password pertama yang saya masukkan 
				maka akun saya sudah terdaftar*/
			}
			else{
				cout<<"Password tidak terverifikasi dan akun Anda belum terdaftar"<<endl;
				cout<<"Periksa Kembali Password Anda"<<endl;
				/*apabila password verifikasi yang saya masukkan 
				tidak sama dengan password pertama yang saya masukkan maka program ini akan menyuruh ulang verifikasi akun*/
				goto ulang;
			}
			//program saya tidak akan lanjut ke halaman login jika pada halaman verifikasi belum saya selesaikan
		cout<<"============ Silahkan Lanjut Ke Halaman Login Untuk Masuk ============ "<<endl;
		cout<<"\n\n";
		coba_lagi :
			cout<<"-------------------------Halaman Login----------------------------------"<<endl;
			cout<<"Username dan Password yang diisi harus sesuai dengan yang diisi pada saat registrasi "<<endl;
			//di halaman login ini program saya akan menyuruh memasukkan username dan password yang sudah saya buat di halaman registrasi
			cout<<"Username = ";
			getline(cin,user1);
			cout<<"Password = ";
			getline(cin,pass2);
			cout<<"\n";
				//akun dinyatakan benar jika username dan password yang dimasukkan sesuai dengan apa yang di isi pada halaman registrasi
				if (user1 == user && pass2 == pass){
					cout<<"Akun Yang Anda Masukkan Sudah Benar "<<endl;
					cout<<"Username Anda adalah "<<user<<endl;
					cout<<"Apakah Anda Ingin Mengulang (y/n)"<<endl;
					cout<<"(y) for Yes & (n) for No atau Ketik (r) jika Anda ingin buat akun lagi : ";
					getline(cin,isi);
						if(isi == "y"){
							cout<<"Perintah : Kembali Ke Halaman Login"<<endl;
							cout<<"\n\n";
							goto coba_lagi;
							//program saya menyuruh mengulang jika saya mengisi (y) 
							//program saya akan berhenti jika saya mengisi (n)
						}
						else;						 
			}
				//akun dinyatakan tidak terdaftar jika username dan passwordnya tidak sesuai dengan apa yang di isi pada saat halaman registrasi
				else{
					cout<<"Akun Yang Anda Masukkaan Tidak Terdaftar "<<endl;
					cout<<"Apakah Anda Ingin Mengulang (y/n)"<<endl;
					cout<<"(y) for Yes & (n) for No atau Ketik (r) jika Anda ingin buat akun lagi : ";
					getline(cin,isi);
				}
						if(isi == "y"){
							cout<<"Perintah : Kembali Kehalaman Login \n";
							cout<<"\n\n";
							goto coba_lagi;
							//program saya menyuruh mengulang jika saya mengisi (y) 
							//program saya akan berhenti jika saya mengisi (n)
						}
						else if (isi == "r"){
							cout<<"Perintah : Kembali Ke Halaman Registrasi \n";
							cout<<"\n\n";
							goto ulang;
							//program akan kembali ke halaman registrasi jika saya mengisi (r)
						}
						else;	 
						
			return 0;
						
}
