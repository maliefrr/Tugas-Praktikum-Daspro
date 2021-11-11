#include<iostream>
using namespace std ;

int main(){
	
	cout<<"NAMA............................SAHRUL"<<endl ;
	cout<<"NIM.............................F1G121083"<<endl ;
	cout<<"JURUSAN.........................ILMU KOMPUTER"<<endl ;
	system("color d") ;
	system("pause") ;
	system("cls") ;
	system("color 6") ;
	awal :
	
	cout<<"selamat datang di geprek pesan online sahrul"<<endl ;
	cout<<"ragam menu "<<endl<<"1. geprek biasa "<<endl<<"2. geprek spesial"<<endl<<"3. geprek plus es teh"<<endl ;
	int menu, berapa, hasil , harga ;
	
	cout<<"silahkan pesan menu yang anda inginkan = " ;
	cin>>menu ;
	cout<<"berapa banyak anda ingin memesan =" ;
	cin>>berapa ;
	
	switch(menu){
		case 1:
			system("cls") ;
			system("color a") ;
			cout<<"anda akan memesan geprek biasa dengan harga 10000"<<endl ;
			
			for(menu = 0; menu <= berapa;menu++){
				cout<<"masukan uang anda = " ;
				cin>>harga ;
				menu++ ;
				hasil =berapa * harga ;
			
				
			}
			cout<<"anda telah memesan geprek biasa sebanyak "<<berapa<<"total harga keseluruhan adalah "<<hasil ;
			
				break ;
	case 2 :
		system("cls") ;
		system("color b") ;
		cout<<"anda akan memesan geprek spesial dengan harga 20000"<<endl ;
		
		while(menu <= berapa){
			cout<<"masukkan uang anda = " ;
			cin>>harga ;
			menu++ ;
			hasil =berapa * harga ;
		}
		cout<<"anda telah memesan geprek spesial sebanyak "<<berapa<<"total harga keseluruhan adalah "<<hasil ;
		
		break ;
		case 3 :
			system("cls") ;
			system("color a") ;
			
			cout<<"anda akan memesan geprek plus es teh dengan harga 15000 " ;
			do{
				cout<<"masukkan uang anda = " ;
			cin>>harga ;
			menu++ ;
			hasil = berapa * harga ;
				
				
			}while(menu <= berapa) ;
			cout<<"anda telah memesan geprek plus es sebanyak "<<berapa<<"total harga keseluruhan adalah "<<hasil ;
			
		
			
	}

	}












































