#include <iostream>
	using namespace std;
	
	int main(){

		int a,b,c,x,F,pilihan,sampai,total;
		char pilihan1;
		
		cout << " NAMA    : FADLI LA ODE MARDIN " << endl;
	    cout << " NIM     : F1G121054 " << endl;
	    cout << " JURUSAN : ILMU KOMPUTER " << endl;
	awal:
	    cout << "MENU PILIHAN" << endl;

cout << "------------" << endl;

cout << "1. while" << endl;

cout << "2. for loop" << endl;

cout << "3. do while loop" << endl;

cout << "4. exit" << endl;

cout << "------------" << endl;


cout <<  " masukan pilahan anda ";
 cin >>pilihan>=0;
 
 switch(pilihan){
 
 
		case 1:
		cout <<" INPUT NILAI a =  ";
		cin >>a;
		cout <<" INPUT NILAI b =  ";
		cin >>b;
		cout<<" INPUT NILAI  c =  ";
		cin >>c;	
			 x = a + b + c;
			cout<<"  hasil penjumlahan adalah x = "<< x <<endl;
			cout<<" x = "<< x <<endl;
			cout <<endl;
			while( x <= 999 ){
			cout << x << endl;
				x += 7;	
			cout<< endl;													
				}
			cout<< "selesai"<<endl;
			
				ulang_while:

	cout<<"apakah anda ingin mengulangi program yang ini ???? (Y/N)" <<endl;
			cout<<"masukan pilihan anda"<<endl;
			cin>>pilihan1;
       
			if(pilihan1 == 'Y'){
			system("cls");
			goto awal;
			} 
			else if(pilihan1 == 'N'){
			system("cls");
			cout<<"terima kasih anda telah menggunakan program kami :)";
			} 
			else{
			cout<<"input yang anda masukan salah";
				goto ulang_while;
			}
	 		
	 		
	


break;
case 2:
        cout <<"INPUT NILAI a =" ;
		cin >>a;
		cout <<"INPUT NILAI b =";
		cin >>b;
		cout <<"INPUT NILAI c =";
		cin >>c;
		
		cout << "sampai berapa? = ";
		cin >> sampai;
			
		
			cout << "for loop"<<endl;
				for (x;x<=sampai;x++){
		total=a+b+c;
		cout<<x<<"+"<<total<<"="<<x+total<<endl;
				}

			 ulang_for_loop:
	cout<<"apakah anda ingin meulangi program yang ini ???? (Y/N) " <<endl;
			cout<<"masukan pilihan anda"<<endl;
			cin>>pilihan1;     
			if(pilihan1 == 'Y'){
			system("cls");
			goto awal;
			} else if(pilihan1 == 'N'){
			system("cls");
			cout<<"terima kasih anda telah memakai program ini :)";
			} 
			else{
			cout<<"input yang anda masukan salah";
		    goto ulang_for_loop;	}
		
	break;
		case 3:
			cout<<endl;
			cout <<"\tSelamat Datang\t "<<endl;
			cout <<"\tikuti langakah berikut\n"<< endl;
			
			cout<<endl;
								
		cout <<"masukan nilai a =  ";
		cin >>a;
		cout<<endl;
		cout <<"masukan nilai b =  ";
		cin >>b;
		cout<<endl;
		cout<<"masukan nilai c =  ";
		cin >>c;	
				F = a + b + c;
					cout<<" berikut hasil penjumlahan tersebut F = "<< F <<endl;
						cout<<endl;
							cout<<" F = "<< F <<endl;
						 	cout <<endl;
				cout<<"berikut hasil perulangan y jika masing masing nilai y melangkah 9"<<endl;
				do{	
								//aksi
				cout<<endl;							
				cout <<" maka nilai F adalah =  ";										
				cout << F << endl;
				F += 9;	
												 
				} while(F < 9999 ); //syrat
				cout<<endl;
				cout<< "BERHASIL"<<endl;
												
												
				 ulang_do_while:
	cout<<"apakah anda ingin melakukan pemesanan ulang ???? (Y/N)" <<endl;
			cout<<"masukan pilihan anda"<<endl;
			cin>>pilihan1;
		
			if(pilihan1 == 'Y'){
			system("cls");
			goto awal;
			} else if(pilihan1 == 'N'){
			system("cls");
			cout<<"terima kasih anda telah memakai program kami :) ";
			} else{
			cout<<"input yang anda masukan salah";
			goto ulang_do_while;}
			


break;

case 4:

exit(4);

break;

default:


cout << "Kode Yang Anda Masukan Salah...!!!"<< endl;
}
			cin.get();
			return 0;
														
						
	}
