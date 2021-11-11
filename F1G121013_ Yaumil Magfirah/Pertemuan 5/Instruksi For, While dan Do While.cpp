#include <iostream>
using namespace std;

int main(){
	//perulangan menggunakan instruksi for, while dan do while dengan konsep perulangan aritmetika penjumlahan
	
	system("cls");
	cout<<"=============== INSTRUKSI PERULANGAN FOR ======================"<<endl;
	int a, batas, hasil= 0;
		cout<<"ingin berapa kali melakukan penjumlahan  :";
		cin>>batas;
	for ( int b=1; b<=batas; b++){
		cout<<"masukkan angka ke" <<b<< " = ";
		cin>>a;
		hasil= hasil+a;
	}
	cout<<"hasil pnjumlahan anda adalah :  " << hasil <<endl;
	
	
	system("pause");
	system("cls");
	cout<<"================ INSTRUKSI PERULANGAN WHILE ===================="<<endl;
	int c=1, d, sampai, total=0;
		cout<< "ingin berapa kali melakukan penjumlahan :";
		cin>>sampai;
	while(c<=sampai){
		cout<<"masukkan angka ke "<<c<< " = ";
		cin>>d;
		c++;
		total=total+d;
	}	
	cout<<"hasil penjumlahan anda adalah : " << total <<endl;;
	
	
	system("pause");
	system("cls");
	cout<<"=============== INSTRUKSI PERULANGAN DO WHILE ================="<<endl;
int j=1, k, berapa, jumlah=0;
	cout<<"ingin berapa kali melakukan penjumlahan : ";
	cin>> berapa;
	do{
		cout<<" masukkan angka ke " <<j<< " = ";
		cin>>k;
		j++;
		jumlah=jumlah+k;
	}
	while(j<=berapa);
		cout<<" hasil penjumlahanan anda adalah : " << jumlah <<endl;
}
