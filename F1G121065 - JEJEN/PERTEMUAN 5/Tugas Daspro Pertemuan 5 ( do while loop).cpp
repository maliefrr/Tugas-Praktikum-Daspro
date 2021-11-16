#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
	
	int nilai_x , nilai_y, hasil;
	
	cout<<"=========================================="<<endl;
	cout<<"\t PROGRAM DO WHILE LOOP"<<endl;
	cout<<"=========================================="<<endl;
	cout<<"Masukan nilai_x = ";
	cin>>nilai_x;
	cout<<"Masukan nilai_y = ";
	cin>>nilai_y;

	do{
		hasil = nilai_x * nilai_y;
		cout<<hasil<<endl;
		nilai_x++;
		
	}while(nilai_x < nilai_y );
	

}

