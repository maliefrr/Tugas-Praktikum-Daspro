#include <iostream>
using namespace std;
int main(){
	int i,a;
	cout<<"input awal:";
	cin>>i;
	cout<<"berapa jumlah inputan:";
	cin>>a;
	do{
		cout<<i<<"+"<<i<<"="<<i*i<<endl;
		i++;
	}
	while(i<=a);
}
