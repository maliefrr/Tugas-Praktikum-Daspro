#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {    
   int i;  
   string pass_input, user_input;  
   cout<<"Halaman Registrasi \n";
   cout<<"Buat Akun \n";
   //pada halaman ini program saya akan menyuruh memasukkan username dan password yang akan saya buat
   cout<<"masukkan username = wasdabil \n";
   cout<<"masukkan password = 12345 \n";
   cout<<"masukkan ulang password yang anda telah masukkan \n";
   if(username, password){
   	cout<<"akun yang anda buat sudah terdaftar \n";
   	/*apabila password verifikasi yang saya masukkan sudah benar maka akun saya sudah terdaftar*/
   }
   else{
   	cout<<"akun anda belum terdaftar \n";
   	/*apabila password
   	
   }
   	
   	
   }
   
   
   
   
   cout << "HALAMAN LOGIN \n";    
   cout << "      \n";    
   cout << "==========================================\n";  
   cout << "Silahkan Login jika ingin mengetahui nya..\n";  
   cout << "==========================================\n\n";
   string username ="12345";    
   string password = "12345";    
   string login = "block";    
   i = 1;    
   
   do {        
       cout << "Username = "; cin>>user_input;        
       cout << "Password = "; cin>>pass_input;        
       if (user_input == username && pass_input == password) {    
	   	   system("cls");        
           cout << " ================\n";            
           cout << "| Login Berhasil |" << endl;            
           cout << " \n\n";          
		   cout << " \n";            
           cout << "|  KM-D034555-14 |" << endl;            
           cout << " \n\n";          
		   cout << " \n";            
           cout << "| ^^^^^^^^^^^^^^ |" << endl;            
           cout << " ================\n\n";  
		   cout << " Diatas adalah kode Rahasia nya\n\n";    
           i = 4;
           login = "berhasil";        } 
       else {            
           cout << "\n===========================\n";            
           cout << "Username / Password Salah! ("<<i<<"x)\n";
		   cout << "=============================\n\n";            
           i = i +1;
       }   
    } while (i <= 3);
	
    if(login != "berhasil"){
       cout<<"Anda telah 3x salah login.\n";       
       cout<<"Silahkan coba 40218 Hari lagi. Terima Kasih..\n\n";      
	}   
   return 0;


}