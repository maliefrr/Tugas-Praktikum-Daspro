#include<iostream>
using namespace std;
	int main() {
		//while
		int x, k;
			cout<<"masukan angka awal : ";
			cin>>x;
			cout<<"masukan batas penjumlahan yang anda ingin anda lakukan : ";
			cin>>k;
			
		while(x<=20){
		x++;// bisa juga menggunakan x = x + x, tapi sama saja
		cout<<x<<"+"<<x<<"="<<x+x<<endl;
		}
			
					
	}
