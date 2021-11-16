#include <iostream>
using namespace std;

int main (){
	cout << "NAMA \t: " << "Muh. Istikmal Husain" << endl;
	cout << "NIM \t: " << "F1G121072" << endl;
	cout << "Jurusan : "<< "Ilmu Komputer" << endl << endl;
	
	cout << "Do While Loop"<<endl<<endl;
	cout << "==========||Program Perkalian||==========" << endl;
	
	int a, b, c;
	int x, y, z;
	
	cout << "Masukkan Nilai a = ";
	cin >> a;
	cout << "Masukkan Nilai b = ";
	cin >> b;
	cout << "Masukkan nilai c = ";
	cin >> c;
	
	cout << "\n\n";
	cout << "Misalkan x = a + b + c , maka ";
	x = a + b + c;
	cout << "x = " << x << endl << endl;
	
	cout << "Untuk hasil pengulangan tiap x dikali 2 (<=100) adalah sebagai berikut : " << endl << endl;
	do{
		cout << "Nilai x dikali 2 adalah :";
		cout << x << endl;
			x *= 2;
	}while (x<=100);{
		cout << endl;
		cout << "Do While Loop Selesai" << endl << endl;
		system ("pause");
	}

system ("cls");
	
	cout << "While Loop"<<endl<<endl;
	cout << "==========||Program Penjumlahan||==========" << endl;
		
		
		cout << "masukan input nilai a = ";
		cin >> a;
		cout << "masukan input nilai b = ";
		cin >> b;
		cout << "masukan input nilai c = ";
		cin >> c;
		
		cout << "\n\n";
		cout << "Misalkan y adalah hasil penjumlahan dari a + b + c , maka ";
		y = a + b + c;
		cout << "y = " << y << endl << endl;
		cout <<" Untuk hasil pengulangan tiap y ditambah 2 (<=100) adalah sebagai berikut : ";
		while( y <= 100 ){
			cout << "Nilai y ditambah 2 adalah : ";
			cout << y << endl;
			y += 2;	
			cout<< endl;													
		}
			cout << "While Loop Selesai" << endl << endl;
			system ("pause");
		
system ("cls");
	
	cout << "For Loop"<<endl<<endl;
	cout << "==========||Program Pengurangan||==========" << endl;
	
		cout <<"masukan input nilai a = " ;
		cin >>a;
		cout <<"masukan input nilai b = ";
		cin >>b;
		cout <<"masukan input nilai c = ";
		cin >>c;
		
		cout << "\n\n";
		cout << "Misalkan z adalah hasil penjumlahan dari a + b + c , maka ";
		z = a + b + c;
		cout << "z = " << z << endl << endl;
		
		cout <<" Untuk hasil pengulangan tiap z dikurang 2 (<=100) adalah sebagai berikut : ";
		for(int i = z; i <= 100; i++){
			cout << "Nilai z dikurang 2 adalah : ";
			cout << z << endl;
			z -= 2;	
			cout<< endl;	
		}
		cout << "For Loop Selesai" << endl << endl;
	
	return 0;
}
			
		
		
	
	
	
	
	

