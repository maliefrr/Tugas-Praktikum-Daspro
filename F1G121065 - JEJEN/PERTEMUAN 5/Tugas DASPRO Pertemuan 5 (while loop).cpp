#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{

	int nilai_x , nilai_y, hasil;
	
	cout<<"=========================================="<<endl;
	cout<<"\t PROGRAM WHILE LOOP"<<endl;
	cout<<"=========================================="<<endl;
	cout<<"Masukan nilai_x = ";
	cin>>nilai_x;
	cout<<"Masukan nilai_y = ";
	cin>>nilai_y;

	while(nilai_y < nilai_x ){
		hasil = nilai_y + nilai_x;
		cout<<hasil<<endl;
		nilai_y++;
	}

}

