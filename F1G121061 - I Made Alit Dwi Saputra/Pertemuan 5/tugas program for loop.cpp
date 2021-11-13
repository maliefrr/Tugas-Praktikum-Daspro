#include <iostream>
using namespace std;
int main() {
	int x,y,z,total,sampai;
	cout<<"masukan angka pertama : ";
	cin>>x;
	cout<<"masukan angka kedua : ";
	cin>>y;
	cout<<"masukan angka ketiga : ";
	cin>>z;
	cout<<"masukan sampai berapa : ";
	cin>>sampai;
	for(x;x<=sampai;x++){
		total=x+y+z;
		cout<<x<<"+"<<total<<" = "
	<<x+total<<endl;	
	}
}
