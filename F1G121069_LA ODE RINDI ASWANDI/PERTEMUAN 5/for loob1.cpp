#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e,total,sampai;
	cout<<"input samapai berapa:";
	cin>>sampai;cout<<"input pertama : ";
	cin>>a;
	cout<<"input ke dua:";
	cin>>b;
	cout<< "input ke tiga:";
	cin>>c;
	cout<< "input ke empat:";
	cin>>d;
	cout<< "input ke lima:";
	cin>>e;
	
	for(a;a<=sampai;a++){
		total=a+b+c+d+e;
		cout<<a<<"+"<<'totaL'<<"="<<a+total<<endl;
	}
}
