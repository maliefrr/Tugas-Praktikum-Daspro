#include <iostream>
using namespace std;

int main(){
	int jumlah_kue_coklat, jumlah_kue_keju, jumlah_kue_strawberry, batas, total, hasil, tambah, x, y, z;
	
	cout<<"Masukkan jumlah kue coklat yang dipesan =";
	cin>>jumlah_kue_coklat;
	
	cout<<"Masukkan jumlah kue keju yang dipesan =";
	cin>>jumlah_kue_keju;
	
	cout<<"Masukkan jumalah kue strawberry yang dipesan =";
	cin>>jumlah_kue_strawberry;
	
	cout<<"batas =";
	cin>>total;

    cout<<"perulangan for\n";
    cout<<"Ingin bertambah berapa kali : ";
	cin>>y;
	for(jumlah_kue_coklat; jumlah_kue_coklat <=total;jumlah_kue_coklat+=y){
	cout<<jumlah_kue_coklat<<"  ";
	
}
	cout<<"\n\n";
	cout<<"perulangan while\n";
    cout<<"Ingin bertambah berapa kali : ";
	cin>>x;
    while (jumlah_kue_keju<=total){
	cout<<jumlah_kue_keju<<"  ";
	jumlah_kue_keju+=x;
}
	cout<<"\n\n";
	cout<<"perulangan do while\n";
    cout<<"Ingin bertambah berapa kali : ";
	cin>>z;
	do{
		cout<<jumlah_kue_strawberry<<"  ";
		jumlah_kue_strawberry+=z;
	}
	while  (jumlah_kue_strawberry<=total);
	

}
