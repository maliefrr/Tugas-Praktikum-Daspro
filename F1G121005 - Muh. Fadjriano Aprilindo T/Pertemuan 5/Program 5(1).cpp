#include <iostream>
using namespace std;

int main ()
{
	int n;
	string Nama [10], Status [10];
	int Nilai [10];

	cout<<"===== SELEKSI CPNS ====="<<endl;
	cout<<endl;
	cout<<"MASUKAN JUMLAH PENDAFTAR CPNS : ";
	cin>>n;
	cout<<endl;

	for (int i=0; i<n; i++)
	{
		cout<<"Nama Pendaftar : ";
		cin>>Nama[i];
		cout<<"Nilai Pendaftar : ";
		cin>>Nilai[i];

		if(Nilai[i]>=65){
			cout<<Nama[i]<<"\nDengan Nilai : "<<Nilai[i]<<"\nDinyatakan Lulus";
			cout<<endl;
		}else {
			cout<<Nama[i]<<"\nDengan Nilai : "<<Nilai[i]<<"\nDinyatakan Tidak Lulus"<<endl;
		}	cout<<endl;
	}

return 0;
}
