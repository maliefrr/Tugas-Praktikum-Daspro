#include <iostream>
using namespace std;
int main(){
	int x,y,total,sampai;
	cout<<"masukkan angka pertama:";
	cin>>x;
	cout<<"masukkan angka kedua:";
	cin>>y;
	cout<<"masukkan sampai berapa:";
	cin>>sampai;
	for (x;x<=sampai;x++){
		total=x+y;
		cout<<x<<"+"<<total<<"="<<x+total<<endl;
	}
	
}
