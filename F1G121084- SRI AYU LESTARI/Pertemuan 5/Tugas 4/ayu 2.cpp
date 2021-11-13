#include <iostream>
using namespace std;
int main(){
	int j,b;
	cout<<"masukkan bilangan mulai awal :";
	cin >>j;
	cout<<"ingin sampai berapa :";
	cin>>b;
	while (j<=b){
		cout<<j<<"+"<<j<<"="<<j+j<<endl;
		j++;
	}
}
