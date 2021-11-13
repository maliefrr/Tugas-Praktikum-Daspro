#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"masukan bilangan mulai awal : ";
	cin>>x;
	cout<<"ingin sampai berapa : ";
	cin>>y;
	do {
		cout<<x<<" x "<<x<<" = "<<x*x<<endl; x++;
	}
	while(x<=y);
}
