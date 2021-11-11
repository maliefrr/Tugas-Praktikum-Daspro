#include <iostream>
 
using namespace std;
 
int main()
{
  int n, i, nilai, hasil=0;
  cout<<"Masukkan Berapa kali pengulangan = " ;
  cin>>n ;
  
  for (i=1; i<=n; i++) {
    cout << "Input " <<i<<"=" ;
    cin>>nilai ;
    hasil=hasil+nilai;
  }
  if(hasil%2==0)
  {
  	cout<<"Hasil Dari penjumlahan dari angka yang di input adalah "<<hasil<<"  Dan Memiliki Nilai Genap" ;
  	
  }else{
  	cout<<"Hasil Dari penjumlahan dari angka yang di input adalah "<<hasil<<"  Dan Memiliki Nilai Ganjil" ;
  	
  }
  return 0;
}
