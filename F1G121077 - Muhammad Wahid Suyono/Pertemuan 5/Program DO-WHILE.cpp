#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	
	int kode, harga_barang, total=0, i=0, item, jumlah_beli,tbr;
	cout<<"-------Selamat Datang Di KIOS ILKOM--------" <<endl;
	cout<<"List Item Yang ada di Kios Kami Yaitu "<<endl;
	cout<<"1. Indomie (Kode barang:1)"<<endl<<"2. Telur   (Kode Barang:2)"<<endl<<"3. Shampoo (Kode Barang:3)"<<endl<<endl;
	printf("Masukkan List Item Yang anda Minat : " ); scanf("%d",&item) ;

	do
	{
		printf("-------------------------\n");
		printf("Masukkan kode barang : "); scanf("%d",&kode);
		if (kode==1){
			printf("Nama Barang : Indomie \n");
			harga_barang=3500;
			}
		else if (kode==2){
			printf("Nama Barang : Telur \n");
			harga_barang=2500;
			}
		else if (kode==3){
			printf("Nama Barang : Shampoo  \n");
			harga_barang=2000;
			}
			
	printf("Harga Barangnya adalah %d\n",harga_barang);
	printf("\nMasukkan Jumlah Barang yang ingin di beli : " ); scanf("%d",&jumlah_beli);
	
	tbr=harga_barang*jumlah_beli;
	
	printf("\n Total Bayar Barang adalah %d\n", tbr);
	
	printf("--------------------------------\n");
	printf("                                \n");
	
	i++;
	
	total+=tbr;
} while (i<item) ;

	printf("\n Total bayar Keseluruhan adalah &d\n", total);
	
	return 0;
	}


