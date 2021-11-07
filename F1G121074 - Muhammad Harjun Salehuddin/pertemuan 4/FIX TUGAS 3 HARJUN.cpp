#include<iostream>
using namespace std;

int main (){
	awal :
		
	cout <<"++++++++++++++JASA PEMASANGAN INTERNET RUMAHAN++++++++++++++"<< endl;
	cout <<"Nama		:MUH. HARJUN SALEHUDDIN\n";
	cout <<"NIM		:F1G121074\n";
	cout <<"Prodi		:ILMU KOMPUTER\n";
	cout <<"Fakultas	:MIPA\n";
	cout <<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<< endl;
	cout <<""<<endl;
	cout <<""<<endl;
	
int menu, jumlah, pilihansatu, pilihankedua, pilihanketiga;
char pilihan, kembalikedua, kembalikeduakedua, kembalisatu, kembalidua;
string alamatpertama, alamatkedua, nomorkedua, nomorpertama, alamatsatu, alamatdua, nomordua, nomorsatu;

	toko :
		cout<<"===========WIFI MURAH DAN BERKUALITAS==========="<<endl;
		cout<<""<<endl;
		cout<<"PRICELIST WIFI"<<endl;
		cout<<"1. 10 Mbps "<<endl
			<<"2. 15 Mbps "<<endl
			<<"3. 20 Mbps "<<endl;
		cout<<""<<endl;
		cout<<"Masukkan Pilihan Anda : ";
		cin>>menu;
		system ("cls");
		switch (menu){
		
			case 1:
				cout<<"Detail layanan 10 Mbps:"<<endl
					<<"1. wifi only		= 300.000/bulan"<<endl
					<<"2. wifi+tv		= 350.000/bulan"<<endl;
				cout<<"Masukkan Pilihan Pesanan Anda : ";
				cin>>pilihansatu;
				system ("cls");
					if(pilihansatu == 1){
					cout<<"Masukkan Alamat Anda : ";
					cin>>alamatsatu;
					cout<<"Masukkan Nomor Hp Anda : ";
					cin>>nomorsatu;
					system("cls");
					cout<<"Terimakaih ,Total pembayaran Anda Sebesar 300.000"<<endl
						<<"Pesanan pada alamat "<<alamatsatu<<" Sedang Di Proses"<<endl
						<<"Tim kami Akan segera menghubungi nomor "<<nomorsatu<<endl
						<<"Silahkan Menunggu Info Selanjutnya"<<endl
						<<""<<endl
						<<"Kembali ke awal ? "<<endl;
					cout<<"(y/n) ? : "<<endl;
					cin>>kembalisatu;
						if(kembalisatu == 'y'){
							system("cls");
							goto awal;
						} else if (kembalisatu == 'n'){
							system("cls");
							cout<<"Terimakasih Telah Menggunakan Program kami";
							}
						}else if(pilihansatu == 2){
							cout<<"Masukan Alamat Anda :  ";
							cin>>alamatdua;
							cout<<"Masukkan Nomor Hp Anda :  ";
							cin>>nomordua;
							system("cls");
							cout<<"Terimakaih, Total pembayaran Anda Sebesar 350.000"<<endl
								<<"Layanan Anda Pada Alamat "<<alamatdua<<" Akan Segera Dipasang"<<endl
								<<"Tim kami akan menghubungi nomor "<<nomordua<<endl
								<<""<<endl
								<<"Kembali ke awal ? "<<endl;
							cout<<"(y/n) ? : "<<endl;
							cin>>kembalidua;
								if(kembalidua == 'y'){
									system("cls");
									goto awal;
									}else if(kembalidua == 'n'){
										system("cls");
									cout<<"Terimakasih Telah Menggunakan Program Kami"<<endl;
									}
													} 
							break ;
			case 2:
				cout<<"Detail layanan 15 Mbps:"<<endl
					<<"1. wifi only		= 400.000/bulan"<<endl
					<<"2. wifi+tv		= 450.000/bulan"<<endl;
				cout<<"Masukkan Pilihan Pesanan Anda : ";
				cin>>pilihankedua;
				system ("cls");
					if(pilihankedua == 1){
					cout<<"Masukkan Alamat Anda : ";
					cin>>alamatpertama;
					cout<<"Masukkan Nomor Hp Anda : ";
					cin>>nomorpertama;
					system("cls");
					cout<<"Terimakaih ,Total pembayaran Anda Sebesar 400.000"<<endl
						<<"Pesanan pada alamat "<<alamatpertama<<" Sedang Di Proses"<<endl
						<<"Tim kami Akan segera menghubungi nomor "<<nomorpertama<<endl
						<<"Silahkan Menunggu Info Selanjutnya"<<endl
						<<""<<endl
						<<"Kembali ke awal ? "<<endl;
					cout<<"(y/n) ? : "<<endl;
					cin>>kembalikedua;
						if(kembalikedua == 'y'){
							system("cls");
							goto awal;
						} else if (kembalikedua == 'n'){
							system("cls");
							cout<<"Terimakasih Telah Menggunakan Program kami";
							}
						}else if(pilihankedua == 2){
							cout<<"Masukan Alamat Anda :  ";
							cin>>alamatkedua;
							cout<<"Masukkan Nomor Hp Anda :  ";
							cin>>nomorkedua;
							system("cls");
							cout<<"Terimakaih, Total pembayaran Anda Sebesar 450.000"<<endl
								<<"Layanan Anda Pada Alamat "<<alamatkedua<<" Akan Segera Dipasang"<<endl
								<<"Tim kami akan menghubungi nomor "<<nomorkedua<<endl
								<<""<<endl
								<<"Kembali ke awal ? "<<endl;
							cout<<"(y/n) ? : "<<endl;
							cin>>kembalikeduakedua;
								if(kembalikeduakedua == 'y'){
									system("cls");
									goto awal;
									}else if(kembalikeduakedua == 'n'){
										system("cls");
									cout<<"Terimakasih Telah Menggunakan Program Kami"<<endl;
									}
													} 
							break ;			
				case 3:
				cout<<"Detail layanan 20 Mbps:"<<endl
					<<"1. wifi only		= 500.000/bulan"<<endl
					<<"2. wifi+tv		= 550.000/bulan"<<endl;
				cout<<"Masukkan Pilihan Pesanan Anda : ";
				cin>>pilihanketiga;
				system ("cls");
					if(pilihanketiga == 1){
					cout<<"Masukkan Alamat Anda : ";
					cin>>alamatpertama;
					cout<<"Masukkan Nomor Hp Anda : ";
					cin>>nomorpertama;
					system("cls");
					cout<<"Terimakaih ,Total pembayaran Anda Sebesar 500.000"<<endl
						<<"Pesanan pada alamat "<<alamatpertama<<" Sedang Di Proses"<<endl
						<<"Tim kami Akan segera menghubungi nomor "<<nomorpertama<<endl
						<<"Silahkan Menunggu Info Selanjutnya"<<endl
						<<""<<endl
						<<"Kembali ke awal ? "<<endl;
					cout<<"(y/n) ? : "<<endl;
					cin>>kembalikedua;
						if(kembalikedua == 'y'){
							system("cls");
							goto awal;
						} else if (kembalikedua == 'n'){
							system("cls");
							cout<<"Terimakasih Telah Menggunakan Program kami";
							}
						}else if(pilihanketiga == 2){
							cout<<"Masukan Alamat Anda :  ";
							cin>>alamatkedua;
							cout<<"Masukkan Nomor Hp Anda :  ";
							cin>>nomorkedua;
							system("cls");
							cout<<"Terimakaih, Total pembayaran Anda Sebesar 550.000"<<endl
								<<"Layanan Anda Pada Alamat "<<alamatkedua<<" Akan Segera Dipasang"<<endl
								<<"Tim kami akan menghubungi nomor "<<nomorkedua<<endl
								<<""<<endl
								<<"Kembali ke awal ? "<<endl;
							cout<<"(y/n) ? : "<<endl;
							cin>>kembalikeduakedua;
								if(kembalikeduakedua == 'y'){
									system("cls");
									goto awal;
									}else if(kembalikeduakedua == 'n'){
										system("cls");
									cout<<"Terimakasih Telah Menggunakan Program Kami"<<endl;
									}
													} 
							break ;				
							
							
						}
				}
		

