#include <iostream>
using namespace std;
int main()
{
	system("color 6") ;
    a:
    int pilihan = 0;
    string data;
    
    cout<<">>>>>Welcome to Halu Oleo University<<<<<" << endl ;
	cout<< "Program Pendataan minat dan bakat adik-adik, guna untuk pengembangan minat dan bakat adik-adik sekalian !!" << endl ;
	cout<<"=================================="<< endl ;
    cout << "1. Masukan nama" << endl ;
    cout << "2. Masukan Minat" << endl ;
    cout << "3. Masukan Bakat" << endl ;
    cout << "4. Exit" << endl ;
    cout << "Pilihanmu : " ;
    cin >> pilihan;
    if(pilihan != 4){ 
	//jika pilihan = 4 maka lakukan pernyataan else
        while(pilihan < 4 && pilihan > 0){
            cout << "Masukan data sesuai dengan pilihan anda : ";
            cin >> data;
            cout << "=======================" << endl;
            switch(pilihan){
            case 1:
                cout << "Namamu > " << data << endl;
                break;
            case 2:
                cout << "Minatmu > " << data << endl;
                break;
            case 3:
                cout << "Bakatmu > " << data << endl;
                break;
            
            }
            cout << "=======================" << endl;
            goto a;
        }
    }
    else{
        cout << "Anda telah keluar dari program !" << endl;
    }
    return 0;
}
