#include<iostream>
using namespace std;

int main(){
	int a, b, c, hasil, sampai;
	cout<<"masukan angka pertama : ";
	cin>>a;
	cout<<"masukan angka kedua : ";
	cin>>b;
	cout<<"masukan angka ketiga : ";
	cin>>c;
	cout<<"masukan sampai berapa : ";
	cin>>sampai;
	for(a;a<=sampai;a++){
		hasil=a*b*c;
		cout<<a<<"*"<<hasil<<" = "<<a*hasil<<endl;
	}
}
