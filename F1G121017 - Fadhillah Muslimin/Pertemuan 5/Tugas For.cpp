#include<iostream>

using namespace std;

int main(){
  int i;
  float x,f_data,jum,rata;
  cout<< "----- Program Rata - Rata -----"<< endl;
  cout<<"Masukkan Freakuensi Data: ";
  cin>>f_data;
  jum=0;
    for(i=1;i<=f_data;i++){
    cout<<"Nilai Ke- "<<i<<": ";
    cin>>x;
    jum+=x;
  }
  rata=jum/f_data;
cout<<"jumlah: "<<jum<<endl;
cout<<"rata-rata: "<<rata<<endl;

return 0;
}
