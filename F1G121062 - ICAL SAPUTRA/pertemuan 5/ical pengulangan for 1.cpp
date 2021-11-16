#include<iostream>
using namespace std;
	int main() {
		//pengulangan for
		int x, k, r, batas, total;
			cout<<"masukan angka awal : ";
			cin>>x;
			cout<<"masukan angka kedua : ";
			cin>>k;
			cout<<"masukan angka ketiga : ";
			cin>>r;
			cout<<"masukan batas yang anda inginkan : ";
			cin>>batas;
			
		for(x;x<=batas;x++){
		total =x+k+r;
		cout<<x<<"+"<<total<<"="<<x+total<<endl;
		}
			
					
	}
