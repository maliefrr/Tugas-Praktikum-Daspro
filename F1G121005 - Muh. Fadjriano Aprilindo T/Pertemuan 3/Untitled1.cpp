#include <iostream>
#include <conio.h>
#include<stdio.h>


using namespace std;

int main() {  
	string user1, user2;  
   int pass1, pass2;
   int login =0;        
   int i=1;  
	  
   cout << "------------------------------------------\n";    
   cout << "Selamat Datang Di Form Login Fadjri \n";    
   cout << "------------------------------------------\n\n";        
     
     
   
        cout<<"==========REGISTRASI=========="<<endl;
    cout<<"Silahkan masukan USERNAME & PASSWORD anda :"<<endl;
    cout<<"Masukkan USERNAME : "; cin>>user1;
    cout<<"Masukkan PASSWORD : "; cin>>pass1;
    cout<<endl;
    
   do{
   
    cout<<"==========LOGIN=========="<<endl;
    cout<<"Silahkan masukan USERNAME & PASSWORD yang telah dibuat :"<<endl;
    cout<<"Masukan USERNAME	: "; cin>>user2;
    cout<<"Masukan PASSWORD	: "; cin>>pass2; 
	cout<<endl;      
               
       	if (user2==user1&& pass2==pass1){
		   
	   		            
           cout << "\n--------------------\n";            
           cout << "Anda Berhasil Login" << endl;            
           cout << "--------------------\n\n";
           
           cout<<"\n----------------------------------------\n";
           cout<<"Terima kasih atas Partisipasinya"<<endl;
           cout<<"JIka terjadi suatu kendaa silahkan hubungi"<<endl;
		   cout<<"e-mail fadjritaridala@gmail.com"<<endl;
           
		   i=4;
			login=1; }
            
			else if(user2!=user1 && pass2!=pass1) {        
           cout << "\n------------------------\n";            
           cout << "Maaf ID & PASSWORD Salah!" << endl;                       
		   cout << "-------------------------\n\n"; 
		   cout<<"|Silahkan Melakukan Login Ulang|\n"<<endl;           
           i= i+1;      
      	} 
            
    	    
    }while (i <= 5);  

}
    
    


			
			
		
			
	

	


	
	





	


