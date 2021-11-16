#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int Menu, total;
	char Pilihan ;
	cout<<"Selamt Datang di NisMani's Dessert'"<<endl;
	cout<<"Kami Menyediakan Berbagai Menu Dessert"<<endl;
	cout<<"Silahkan Pilih Menu yang Anda Inginkan"<<endl;
	cout<<"Berikut Menu yang Dapat Memanjakan Lidah Anda"<<endl;
	cout<<endl;
	
	cout<<"1.Dessert Box:"<<endl;
		DessertBox:
			cout<<"Chocholate Dessert Box"<<endl;
			cout<<"Oreo Dessert Box"<<endl;
			cout<<"Regal Dessert Box"<<endl;
			cout<<"Creamy Cheese Dessert Box"<<endl;
			cout<<endl;
	cout<<"2.Cake:"<<endl;
			Cake:
			cout<<"chocolate Cake"<<endl;
			cout<<"Lemon Cake"<<endl;
			cout<<"Cheese Cake"<<endl;
			cout<<endl;
	cout<<"3.Drink"<<endl;
			Drink:
			cout<<"Coffee latte"<<endl;
			cout<<"White Coffee"<<endl;
			cout<<"Chocholate Ice"<<endl;
			cout<<"Hot Chocholate"<<endl;
			cout<<"Matcha Latte"<<endl;
			cout<<endl;
	cout<<"4.Topping:"<<endl;
			Topping:
			cout<<"Chocholate"<<endl;
			cout<<"Cheese"<<endl;
			cout<<"Matcha"<<endl;
			cout<<"Tiramisu"<<endl;
			cout<<endl;
	

	cout<<"Masukkan Menu yang Anda Inginkan:"<<endl;
	cin>>Menu;
		
	switch(Menu){
		case 1 :
		cout<<"Masukkan Menu yang Diinginkan:" <<endl;
		cin>>total;
		cout<<"Dessert Box"<<endl;
		cout<<"Silahkean tentukan varian rasa"<<endl;
		cout<<"Chocholate"<<"total"<<"Pesanan Tercatat"<<endl;
		cout<<endl;
			
		Re_Topping :
		cout<<"Apakah Anda Ingin Topping Tambahan? (y/n)"<<endl;
		cout<<"Masukkan Pilihan Anda"<<endl;
		cin>>Pilihan;
		if (Pilihan == 'y'){
			system("clear");
			goto Topping ;
			cout<<"Terima Kasih, Pesanan Anda Sudah Tercatat"<<endl;
		}	else if (Pilihan == 'n'){
			system("clear");
			cout<<"Terima Kasih, Pesanan anda telah tercatat"<<endl;
		}	else{
			cout<<"Topping yang Anda Pilih Tidak Tersedia"<<endl;
			goto Re_Topping ;
		}
	
		break;

	default :
		system("clear") ;
		cout<<"Selamat Menikmati"<<endl;
	}	cout<<endl;
}

