#include <iostream>
using namespace std;
int main(){
	int i,b;
	cout<<"masukkan bilangan mulai awal:";
	cin>>i;
	cout<<"ingin sampai berapa:";
	cin>>b;
	do{
		cout<<i<<"+"<<i<<"="<<i+i<<endl;
		i++;
	}
	while(i<=b);
}
