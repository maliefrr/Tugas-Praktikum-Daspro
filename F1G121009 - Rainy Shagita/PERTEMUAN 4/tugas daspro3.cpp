#include<iostream>
using namespace std;
int main(){
	int pil;
	string jkel;
	
	cout<<"pilih data anda yang benar:"<<endl;
	cout<<"1.laki-laki\n2. perempuan\n";
	cout<<"pilihan :";
	cin>>pil;
	switch(pil){
		case 1 :
			jkel = "laki-laki";
			
			if(pil){
				cout<<"anda memilih laki-laki"<<endl;
				cout<<"data anda benar"<<endl;
				
			}
			else if (pil){
				cout<<"anda memilih perempuan"<<endl;
				cout<<"data anda salah"<<endl;
			}
			else{
				cout<<"jika memilih perempuan data anda salah"<<endl;
				
				
				
			}
			break;
		case 2 :
			jkel ="perempuan";
			
			if(pil){
				cout<<"anda memilih perempuan"<<endl;
				cout<<"data anda benar"<<endl;
				
			}
			else if(pil){
				cout<<"anda memilih laki-laki"<<endl;
				cout<<"data anda salah"<<endl;
				
			}
			else{
				cout<<"jika memilih laki-laki data anda salah"<<endl;

				
			}
			break;
		default :
			cout<<"jenis kelamin saya adalah"<<endl;
			system("cls");
			
			
			
			
			
		
			
			
	}
}
	
	
