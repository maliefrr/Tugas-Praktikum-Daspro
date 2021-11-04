#include <iostream>
using namespace std;

int main (){
	//pembuatan program vinding machine
	int uang,pil,kembalian1,kembalian2,kembalian3,kembalian4,kembalian5,kembalian6,HARGA1 = 5000,HARGA2 = 7000,HARGA3 = 6000,HARGA4 = 5000,HARGA5 = 10000,HARGA6 = 2000;
	char pilihan;

	awal :
		cout<<"1. Coca Cola \n2. Fanta \n3. Sprite \n4. Susu \n5. Kopi \n6. Aqua "<<endl;
		
		cout<<"Masukkan Pesanan Anda : ";
		cin>>pil;
		
		switch (pil){
		case 1 :
			system ("cls");
			cout<<"Anda memesan 1 Coca cola "<<endl;
			cout<<"Total Harga : "<<HARGA1<<endl;
	   		break;
	    case 2 :
	    	system ("cls");
			cout<<"Anda memesan 1 Fanta "<<endl;
			cout<<"Total Harga : "<<HARGA2<<endl;
	 		break;
	 	case 3 :
	 		system ("cls");
			cout<<"Anda memesan 1 Sprite "<<endl;
			cout<<"Total Harga :  "<<HARGA3<<endl;
			break;
		case 4 :
			system ("cls");
			cout<<"Anda memesan 1 Susu"<<endl;
			cout<<"Masukkan uang anda senilai Rp.5000 untuk mendapatkan 1 Susu"<<endl;
			break;
		case 5 :
			system ("cls");
			cout<<"Anda memesan 1 kopi"<<endl;
			cout<<"Masukkan uang anda senilai Rp.10000 untuk mendapatkan 1 kopi"<<endl;
			break;
		case 6 :
			system ("cls");
			cout<<"Anda memesan 1 Aqua"<<endl;
		    cout<<"Masukkan uang anda seniai Rp.2000 untuk mendapatkan 1 Aqua"<<endl;
		    break;
		default :
			system ("cls");
			cout<<"Pilihan yang anda masukkan tidak tersedia "<<endl;
			goto awal;
	 	}
		
		
		
		cout<<"Masukkan Uang Anda = ";
		cin>>uang;
		
		kembalian1 = uang - HARGA1;
		kembalian2 = uang - HARGA2;
		kembalian3 = uang - HARGA3;
		kembalian4 = uang - HARGA4;
		kembalian5 = uang - HARGA5;
		kembalian6 = uang - HARGA6;
	
		if (pil== 1 && uang == 5000){
			cout<<"Pembayaan yang anda lakukan berhasil"<<endl;
			cout<<"Anda berhasil mendapatkan 1 Coca cola"<<endl;
		}else if (pil == 1 && uang > 5000){
			cout<<"Pembayaran yang anda lakukan berhasil"<<endl;
			cout<<"Silahkan ambil kembalian anda senilai "<<" Rp. "<<kembalian1<<endl;
	    }else if (pil == 1 && uang < 5000){
	    	cout<<"Uang anda tidak cukup"<<endl;
		}
		
		if (pil== 2 && uang == 7000){
			cout<<"Pembayaan yang anda lakukan berhasil"<<endl;
			cout<<"Anda berhasil mendapatkan 1 Fanta"<<endl;
		}else if (pil == 2 && uang > 7000){
			cout<<"Pembayaran yang anda lakukan berhasil"<<endl;
			cout<<"Silahkan ambil kembalian anda senilai "<<" Rp. "<<kembalian2<<endl;
	    }else if (pil == 2 && uang < 7000){
	    	cout<<"Uang anda tidak cukup"<<endl;
		}
		
		if (pil== 3 && uang == 6000){
			cout<<"Pembayaan yang anda lakukan berhasil"<<endl;
			cout<<"Anda berhasil mendapatkan 1 Spirite"<<endl;
		}else if (pil == 3 && uang > 6000){
			cout<<"Pembayaran yang anda lakukan berhasil"<<endl;
			cout<<"Silahkan ambil kembalian anda senilai "<<" Rp. "<<kembalian3<<endl;
	    }else if (pil == 3 && uang < 6000){
	    	cout<<"Uang anda tidak cukup"<<endl;
		}
		
		if (pil== 4 && uang == 5000){
			cout<<"Pembayaan yang anda lakukan berhasil"<<endl;
			cout<<"Anda berhasil mendapatkan 1 Susu"<<endl;
		}else if (pil == 4 && uang > 5000){
			cout<<"Pembayaran yang anda lakukan berhasil"<<endl;
			cout<<"Silahkan ambil kembalian anda senilai "<<" Rp. "<<kembalian4<<endl;
	    }else if (pil == 4 && uang < 5000){
	    	cout<<"Uang anda tidak cukup"<<endl;
		}
		
		if (pil== 5 && uang == 10000){
			cout<<"Pembayaan yang anda lakukan berhasil"<<endl;
			cout<<"Anda berhasil mendapatkan 1 Kopi"<<endl;
		}else if (pil == 5 && uang > 10000){
			cout<<"Pembayaran yang anda lakukan berhasil"<<endl;
			cout<<"Silahkan ambil kembalian anda senilai "<<" Rp. "<<kembalian5<<endl;
	    }else if (pil == 5 && uang < 10000){
	    	cout<<"Uang anda tidak cukup"<<endl;
		}
		
		if (pil== 6 && uang == 2000){
			cout<<"Pembayaan yang anda lakukan berhasil"<<endl;
			cout<<"Anda berhasil mendapatkan 1 Fanta"<<endl;
		}else if (pil == 6 && uang > 2000){
			cout<<"Pembayaran yang anda lakukan berhasil"<<endl;
			cout<<"Silahkan ambil kembalian anda senilai "<<" Rp. "<<kembalian6<<endl;
	    }else if (pil == 6 && uang < 2000){
	    	cout<<"Uang anda tidak cukup"<<endl;
		}
		
		cout<<"Apakah anda ingin memesan kembali ?? (y/n)"<<endl;
		cin>>pilihan;
		
		if (pilihan == 'y'){
			system ("cls");
			goto awal;
		}
		 else if (pilihan == 'n'){
			system ("cls");
			cout<<"Terima Kasih Telah Menggunakan Produk Kami"<<endl;
		}
		else
			system ("cls");
			cout<<"Input yang anda masukkan salah"<<endl;
}
