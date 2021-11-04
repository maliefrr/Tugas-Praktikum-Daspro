#include <iostream>
using namespace std;

int main(){
	system ("title MUH. ISTIKMAL HUSAIN");
	cout<<"Nama\t :"<<" Muh. Istikmal Husain\n";
	cout<<"NIM\t :"<<" F1G121072\n";
	cout<<"Jurusan\t :"<<" ILmu KOmputer\n";
	cout<<"\n";
	
	int input, jt, pesan;
	char pilihan;
	
	Memilih :
	cout << "||=======================================================||\n";
	cout << "\t PESAN TIKET PERJALAN KENDARI - MAKASSAR \n";
	cout << "||=======================================================||\n\n";
	
	cout << "1. TIKET PESAWAT" << "\t : Rp. 2.539.000/org" <<endl<< "2. TIKET KAPAL"<< "\t\t : Rp. 1.432.000/org" <<endl<< "3. TIKET BUS" << "\t\t : Rp. 529.000/org"<<endl<<endl;
	cout << "SILAHKAN MEMILIH TIKET PERJALANAN ANDA\n";
	cin >> input;
	system("cls");
	
	switch (input){
		
		case 1:
			cout << "MASUKKAN JUMLAH TIKET PESAWAT YANG ANDA PESAN \t: ";
			cin >> jt;
			cout << "BIAYA \t = Rp. "<< jt*2539000 << endl << endl;
			
			ulang :
			cout << "APAKAH ANDA INGIN MEMESAN TIKET YANG LAIN ? (y/n) ";
			cin >> pilihan;
			if (pilihan == 'y'){
				system ("cls");
				goto Memilih ;
	  		} else if (pilihan == 'n'){
			system ("cls");
				cout << "||===========================================================||\n";
				cout << "\tTRIMAKASIH TELAH MEMESAN TIKET DI SITUS KAMI \n";
				cout << "||===========================================================||\n\n";
				
			} else {
				cout << "INPUT YANG ANDA MASUKKAN SALAH" << endl << endl;
				goto ulang ;
				
			}
			break;
			
		case 2:
			cout << "MASUKKAN JUMLAH TIKET KAPAL YANG ANDA PESAN \t: ";
			cin >> jt;
			cout << "BIAYA \t = Rp. "<< jt*1432000 << endl << endl;
			
			ulang2 :
			cout << "APAKAH ANDA INGIN MEMESAN TIKET YANG LAIN ? (y/n) ";
			cin >> pilihan;
			if (pilihan == 'y'){
				system ("cls");
				goto Memilih ;
	  		} else if (pilihan == 'n'){
			system ("cls");
				cout << "||===========================================================||\n";
				cout << "\tTRIMAKASIH TELAH MEMESAN TIKET DI SITUS KAMI \n";
				cout << "||===========================================================||\n\n";
			} else {
				cout << "INPUT YANG ANDA MASUKKAN SALAH" << endl << endl;
				goto ulang2 ;
				
			}
			break;	
		
		case 3:
			cout << "MASUKKAN JUMLAH TIKET BUS YANG ANDA PESAN \t: ";
			cin >> jt;
			cout << "BIAYA \t = Rp. "<< jt*529000 << endl << endl;
			
			ulang3 :
			cout << "APAKAH ANDA INGIN MEMESAN TIKET YANG LAIN ? (y/n) ";
			cin >> pilihan;
			if (pilihan == 'y'){
				system ("cls");
				goto Memilih ;
	  		} else if (pilihan == 'n'){
			system ("cls");
				cout << "||===========================================================||\n";
				cout << "\tTRIMAKASIH TELAH MEMESAN TIKET DI SITUS KAMI \n";
				cout << "||===========================================================||\n\n";
			} else {
				cout << "INPUT YANG ANDA MASUKKAN SALAH" << endl << endl;
				goto ulang3 ;
				
			}
			break;	
			
	default :
		goto Memilih;
			
	}
	
	
	
	
			
	
	
}

