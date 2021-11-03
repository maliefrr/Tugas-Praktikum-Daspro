#include <iostream>
using namespace std;

int main (){
  int pilihan, jmlh_barang, harga, total, bayar, diskon ;
  string item;
   
  cout << "                                                 nikenmart                                                  " << endl;
  cout << "============================================================================================================" << endl;
  cout << "============================================================================================================" << endl;
  cout << "                                                 Daftar Menu                                                " << endl << endl;
  cout << " 1. nutella (200gr)           : Rp. 28.000  " << " 5. Beng-beng wafer chocolate (1 box)        : Rp. 17.000 " << endl; 
  cout << " 2. Es Krim Wall'S            : Rp. 6.000   " << " 6. Milo sachet                              : Rp. 3.000  " << endl;
  cout << " 3. Frisian Flag (400gr)      : Rp. 45.000  " << " 7. Dancow Susu Bubuk Fortigro Instan Sachet : Rp. 3.000  " << endl;
  cout << " 4. Sosis Kanzler Mini (65gr) : Rp. 11.000  " << " 8. selesai                                               " << endl; 
  cout << "============================================================================================================\n" << endl;
  
  do{
  	cout<<"masukkan no pilihan : ";
  	cin>> pilihan;
  	
  	 switch(pilihan){
  		case 1 :
  			item = "nutella (200gr)";
  			harga = 28000;
  			cout <<"jumlah barang : ";
  			cin >> jmlh_barang;
  			total += harga*jmlh_barang;
  			cout <<jmlh_barang<< " "<<item<< " = Rp. "<< harga*jmlh_barang <<endl<<endl;
  			break;
  		case 2 :
  			item = "Es Krim Wall'S";
  			harga = 6000;
  			cout<<"jumlah barang : ";
  			cin>> jmlh_barang;
  			total += harga*jmlh_barang;
  			cout<< jmlh_barang << " "<<item<< " = Rp. "<< harga*jmlh_barang <<endl<<endl;
  			break;
  		case 3 :
  			item = "Frisian Flag Full Cream (400gr)";
  			harga = 45000;
  			cout<<"jumlah barang : ";
  			cin>> jmlh_barang;
  			total += harga*jmlh_barang;
  			cout<< jmlh_barang << " "<<item<< " = Rp. "<< harga*jmlh_barang <<endl<<endl;
  			break;
  		case 4 :
  			item = "Sosis Kanzler Mini (65gr)";
  			harga = 11000;
  			cout<<"jumlah barang : ";
  			cin>> jmlh_barang;
  			total += harga*jmlh_barang;
  			cout<< jmlh_barang << " "<<item<< " = Rp. "<< harga*jmlh_barang <<endl<<endl;
  			break;
  		case 5 :
  			item = "Beng-beng wafer chocolate (1 box)";
  			harga = 17000;
  			cout<<"jumlah barang : ";
  			cin>> jmlh_barang;
  			total += harga*jmlh_barang;
  			cout<< jmlh_barang << " "<<item<< " = Rp. "<< harga*jmlh_barang <<endl<<endl;
			break;
  		case 6 :
  			item = "Milo sachet";
  			harga = 3000;
  			cout<<"jumlah barang : ";
  			cin>> jmlh_barang;
  			total += harga*jmlh_barang;
  			cout<< jmlh_barang << " "<<item<< " = Rp. "<< harga*jmlh_barang <<endl<<endl;
  			break;
  		case 7 :
  			item = "Dancow Susu Bubuk Fortigro Instan Sachet";
  			harga = 3000;
  			cout<<"jumlah barang : ";
  			cin>>jmlh_barang;
  			total += harga*jmlh_barang;
  			cout<< jmlh_barang << " "<<item<< " = Rp. "<< harga*jmlh_barang <<endl<<endl;
  			break;
		case 8 : 
			cout<<endl<<endl;
			 
		    	cout << "============================================================================================================" << endl;
			cout<< "Jumlah Bayar : " <<total<<endl;
			
			if(total >= 100000){
				diskon = 0.05 * total;
			} else if( total >= 50000){
				diskon >= 0.04 * total;
			} else if(total >= 45000){
				diskon = 0.03 * total;
			} else{
				diskon = 0;
			}
			cout<<"Diskon       : " << diskon <<endl;
			cout<<"Total Bayar  : "<< total - diskon << endl;
			cout<<"Bayar        : ";
			cin>> bayar;
			cout<<"kembali      : " << (bayar - (total - diskon)) << endl << endl;
			break;
  		default :
  			cout << "pilihan anda salah!\n" ;
  			cout << "silahkan masukkan opsi pilihan kembali\n";
  			
	  }
  }while(pilihan != 8);
  cout <<"Terima Kasih"<< endl;
  system ("pause");
  system("cls");
}

