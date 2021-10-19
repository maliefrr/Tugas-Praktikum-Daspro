#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
	int s;
	float volume_kubus ;
	
	cout << " program c++ menghitung volume kubus" <<endl;
	
	cout << " Masukan Nilai Sisi  (s) - ";
	cin >> s;
	
	volume_kubus - s * s * s;
	
	cout << "volume kubus dengan sisi " << s << "cm" <<  " adalah " << volume_kubus << "cm3" <<endl;
	
	system("pouse");
	return 0 ;
}
