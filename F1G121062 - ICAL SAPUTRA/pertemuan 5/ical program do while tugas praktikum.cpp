#include<iostream>
using namespace std;
	int main() {
		//do while
		int x, b;//variabel
			cout<<"masukan angka awal : ";
			cin>>x;
			cout<<"masukan batas penjumalahan yang anda inginkan : ";
			cin>>b;
				
		do {
		cout<<x<<"+"<<x<<"="<<x+x<<endl;
		x = x + x;//atau bisa menggunakan x++ agar lebih mudah dan singgkat
		}
		while(x<=b);
		}
			

