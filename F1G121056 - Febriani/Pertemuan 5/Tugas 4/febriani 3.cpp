#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"masukkan bilangan mulai awal:";
	cin>>a;
	cout<<"ingin sampai berapa:";
	cin>>b;
	do{
		cout<<a<<"+"<<a<<"="<<a*a<<endl;
		a++;
	}
	while(a<=b);
}
