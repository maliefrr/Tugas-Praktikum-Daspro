#include<iostream>

using namespace std;

int main(){
  int i;
  float x,f_data,jum,rata;
  cout<< "----- Program Rata - Rata -----"<< endl;
  cout<<"Masukkan Freakuensi Data:";
  cin>>f_data;
  jum=0;
  i=1;
    while(i<=f_data){
    cout<<"Nilai Ke- "<<i<<": ";
    cin>>x;
    jum+=x;
  i++;
  }
  rata=jum/f_data;
cout<<"jumlah:"<<jum<<endl;
cout<<"rata-rata:"<<rata<<endl;

return 0;
}
