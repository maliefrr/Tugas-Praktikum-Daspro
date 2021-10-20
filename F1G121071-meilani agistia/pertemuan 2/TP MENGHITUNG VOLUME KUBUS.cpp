#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    std:cout<<"Meilani Agistia\n";
    int s;
    float volume_kubus;
    
    cout<<"menghitung volume kubus \n" ;
    cout<<"masukan nilai sisi = " ;
    cin>>s;
    
      volume_kubus = s * s * s;
    
    cout << "volume kubus dengan sisi " << s << "cm" << "adalah" << volume_kubus << "cm4.5" <<endl;
    
    return 0;
}
