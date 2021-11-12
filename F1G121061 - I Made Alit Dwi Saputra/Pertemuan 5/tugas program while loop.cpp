#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"masukan bilangan mulai dari awal : ";
	cin>>x;
	cout<<"ingin sampai berapa : ";
	cin>>y;
	while(x<=y){
		cout<<x<<" x "<<x<<" = "<<x*x<<endl;
		x++;
	}
}
