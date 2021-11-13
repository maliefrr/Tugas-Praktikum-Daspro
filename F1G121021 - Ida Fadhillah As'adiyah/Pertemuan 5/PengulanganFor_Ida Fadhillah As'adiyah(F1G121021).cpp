#include <iostream>
using namespace std;

int main (){
	int n , a, total;
	char ulang;
	
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"|                Program Pengulangan                  |"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"|          Nama    : Ida Fadhillah As'adiyah          |"<<endl;
	cout<<"|          NIM     : F1G121021                        |"<<endl;
	cout<<"|          Jurusan : Ilmu Komputer                    |"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	
	cout<<endl;
	coba_lagi :
	cout<<"Berapa banyak pengulangan yang ingin di input? : "<<endl;
	cin>>n;
	total=0;
	
	cout<<endl;
	
	for(int i=1; i<=n; i++){
		cout<<"Bilangan ke-"<<i<<" : ";
		cin>>a;
		total+=a;
	}
	
	system("cls");
	cout<<endl<<"Jumlah dari "<<n<<" bilangan yang Anda masukkan = "<<total<<endl;
	
	//Big Thank's buat Kak Alief yang sudah berbagi ilmu sampai pertemuan ke-5. See you next time Kak! \(0_0)/
	return 0;
	
}
