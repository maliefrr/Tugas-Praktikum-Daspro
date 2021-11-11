#include <iostream>
using namespace std;
int main(){
	int a,total,sampai;
	cout<<"masukkan angka pertama:";
	cin>>a;
	cout<<"masukkan sampai berapa:";
	cin>>sampai;
	for (a;a<=sampai;a++){
		total=a;
		cout<<a<<"+"<<total<<"="<<a+total<<endl;
	}
	
}
