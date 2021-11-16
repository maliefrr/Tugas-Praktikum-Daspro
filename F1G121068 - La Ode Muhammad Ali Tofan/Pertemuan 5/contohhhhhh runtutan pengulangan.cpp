#include<iostream>
using namespace std;

int main()
{
	//Runtutan Pengulangan
	//untuk Type FOR
	cout<<"MULAI UNTUK FOR LOOP"<<endl;
	for(int i=1; i<=10; i++){
		cout<<i<<"*"<< 1+i<<"="<<i+1*i*i<<endl;
	}
	cout<<"SELESAI"<<"\n\n\n";
	int a=1;
	//belajar penggunaan while  
	cout<<"MULAI UNTUK WHILE LOOP"<<endl;
	while(a<=10){
		cout<<a<<" Buah Apel "<<" + "<< a+1 <<" = "<<a+1+a<<" buah apel"<<endl;
		a++;
	}
	cout<<"Selesai \n\n\n";
	//runtutan pengulangan untuk do while
	cout<<"Mulai Untuk Do While Loop"<<endl;
	int b=1,x=0;
	do{
		b=b+x;
		cout<<b<<" ";
		b++;
}
	while(b<10);
	cout<<"\nSELESAI";
	
}
 

