#include<iostream>

using namespace std;

int main(){
  int i=1;
  float x,f_data,jum,rata;
  cout<< "----- Program Rata - Rata -----"<< endl;
  cout<<"Masukkan Freakuensi Data: ";
  cin>>f_data;
  jum=0;
    do{
    cout<<"Nilai Ke- "<<i<<": ";
    cin>>x;
    jum+=x;
    i++;
  }while(i<=f_data);
  rata=jum/f_data;
cout<<"jumlah: "<<jum<<endl;
cout<<"rata-rata: "<<rata<<endl;

return 0;
}
