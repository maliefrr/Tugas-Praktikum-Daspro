#include <iostream>
	using namespace std;
int main(){
		 system("color B");		
			int x,y,z,hasil;
			cout<<endl;
			cout <<"\t\t========= masukan inputan nilai berikut =========\t\t "<<endl;
			cout<<endl;

		cout <<"masukan nilai x =  ";
		cin >>x;
		cout<<endl;
		cout <<"masukan nilai y =  ";
		cin >>y;
		cout<<endl;
		cout<<"masukan nilai z =  ";
		cin >>z;	
		hasil = x + y + z;
		cout<<" berikut hasil perkalian tersebut  = "<< hasil <<endl;
		cout<<endl;
		cout<<" hasil = "<< hasil <<endl;
		cout <<endl;
		cout<<" berikut perulangan hasil jika masing masing nilai  melangkah 10"<<endl;
		do{	

		cout<<endl;							
		cout <<" maka hasilnya adalah =  ";										
		cout <<hasil << endl;
		hasil += 10;	

		} while(hasil < 1000 );
		cout<<endl;
		cout<< "selesai\n"<<endl;
		cin.get();
		return 0;



system("pause");

	system("cls");

		cout <<"masukan input nilai x =" ;
		cin >>x;
		cout <<"masukan input nilai y =";
		cin >>y;
		cout <<"masukan input nilai z =";
		cin >>z;

		hasil = x + y + z;

		cout <<" hasil penjumlahn dari inputan nilai tersebut adalah = "<<hasil<<endl;


			cout << "for loop"<<endl;
				for(int i = hasil; i <= 1000; i++){
					cout << i <<endl;	
				}






system("pause");
      system("cls");

		cout <<"masukan nilai x =  ";
		cin >>x;
		cout <<"masukan nilai y =  ";
		cin >>y;
		cout<<"masukan nilai z =  ";
		cin >>z;	
		hasil = x + y + z;
		cout<<" berikut hasil perkalian tersebut = "<< hasil <<endl;
		cout<<endl;
		cout<<" hasil = "<< hasil <<endl;
		cout <<endl;
		while( hasil <= 1000 ){
		cout <<"hasil perulangan  adalah = ";
		cout << hasil << endl;
		hasil += 2;	
	   cout<< endl;													
		}
 	    cout<< "selesai\n"<<endl;
		cin.get();
		return 0;


	}  
