#include <iostream>
using namespace std;
int main(){
	int x,y,z,total,sampai;
	cout<<"masukkan angka pertama:";
	cin>>x;
	cout<<"masukkan angka kedua:";
	cin>>y;
	cout<<"masukkan angka ketiga:";
	cin>>z;
	cout<<"masukkan sampai berapa:";
	cin>>sampai;
	for (x;x<=sampai;x++){
		total=x+y+z;
		cout<<x<<"+"<<total<<"="<<x+total<<endl;
	}
	
}
