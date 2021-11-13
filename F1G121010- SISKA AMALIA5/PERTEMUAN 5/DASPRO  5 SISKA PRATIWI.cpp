#include <iostream>
#include <conio.h>

	using namespace std;
int main(){

	
	float nilai,T_P,respon,laporan,tugas,mid,final,individu,kelompok,daspro;
	 int hasil;
	 float rata_rata ;
	 
	 		cout<<"program siska amalia pratiwi\n";
	 		cout<<"for loop\n";
	 		cout<<"=============================\n";
	
		cout<<endl;
		cout<<"\tmasukan nilai tugas pndahuluan = ";
		cin>>T_P;
		cout<<endl;
		cout<<"\tmasukan nilai respon           = ";
		cin>>respon;
		cout<<endl;
		cout<<"\tmasukan nilai laporan          = ";
		cin>>laporan;
		cout<<endl;
		
		
		hasil = T_P + respon + laporan;
		cout<<"\thasil dari keseluruhan nilai anda = "<< hasil <<endl;
		cout<<endl;
		rata_rata = hasil / 3 ;
		cout<<"\tnilai rata rata anda adalah = "<< rata_rata <<endl;
		cout<<endl;
	
				for(int i = rata_rata ; i <= 100; i++){
				
					cout << i <<endl;	
						}
					
				
					if (rata_rata >=60 ){
					cout<<"\t\tberikut nilai nilai yang dinytakn lulus\n"<<endl;
					cout<<"\tnilai di atas 60-100"<<endl;
					cout<<"\t\tanda lulus"<<endl;
					}
					else if (rata_rata <= 60){
						cout<<"\tnilai anda di bawah 60"<<endl;
						cout<<"\ttidak lulus"<<endl;
					}
					else{
						cout<<"exit"<<endl;
					}
				cout<<"\tklik dimanapun di keyboard anda untuk melanjutkan\t";
				system("pause");
				system("cls");
				cout<<endl;
				cout<<"\t\twhile loop\t\t"<<endl;

		cout<<endl;
		cout<<"\tmasukan nilai tugas          = ";
		cin>>tugas;
		cout<<endl;
		cout<<"\tmasukan nilai ujian mid      = ";
		cin>>mid;
		cout<<endl;
		cout<<"\tmasukan nilai final semester = ";
		cin>>final;
		cout<<endl;
		
		rata_rata = tugas + mid + final / 3 ;
		cout<<"nilai rata rata anda semester ini adalah = "<<rata_rata<<endl;
		
		while ( rata_rata <= 100 ){
			cout <<" hasil perulangan nilai rata rata adalah = ";
					cout << rata_rata << endl;
					rata_rata++;	
			 		cout<< endl;													
					}
					if (rata_rata >=60 ){
					cout<<"\t\tberikut nilai nilai yang dinytakn lulus\n"<<endl;
					cout<<"\tnilai di atas 60-100"<<endl;
					cout<<"\t\tanda lulus"<<endl;
					}
					else if (rata_rata <= 60){
						cout<<"\tnilai anda di bawah 60"<<endl;
						cout<<"\ttidak lulus"<<endl;
					}
					else{
						cout<<"exit"<<endl;
					}
			
				cout<<"\tklik dimanapun di keyboard anda untuk melanjutkan\t";
				system("pause");
				system("cls");
				
				cout<<"do while loop"<<endl;
				
		cout<<endl;
		cout<<"\tmasukan nilai tugas individu = ";
		cin>>individu;
		cout<<endl;
		cout<<"\tmasukan nilai kelompok           = ";
		cin>>kelompok;
		cout<<endl;
		cout<<"\tmasukan nilai ujian daspro          = ";
		cin>>daspro;
		cout<<endl;
		
		
		hasil = individu + kelompok + daspro;
		cout<<"\thasil dari keseluruhan nilai anda = "<< hasil <<endl;
		cout<<endl;
		rata_rata = hasil / 3 ;
		cout<<"\tnilai rata rata anda adalah = "<< rata_rata <<endl;
		cout<<endl;
			do{
					if (rata_rata >=60 ){
					cout<<"\t\tberikut nilai nilai yang dinytakn lulus\n"<<endl;
					cout<<"\tnilai di atas 60-100"<<endl;
					cout<<"\t\tanda lulus"<<endl;
					}
					else if (rata_rata <= 60){
						cout<<"\tnilai anda di bawah 60"<<endl;
						cout<<"\ttidak lulus"<<endl;
					}
					else{
						cout<<"exit"<<endl;
					}
							
			} while (  rata_rata <= 100 );
			cout<<endl;
			cout<< "selesai\n"<<endl;
			cin.get();
			return 0;

				
						
					
							
	
					
	
		

			
			
}
		
		
	
		
		
		

