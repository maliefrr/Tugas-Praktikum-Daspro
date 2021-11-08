#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	//penggunaan logika perulangan for, while, do while
	//for sebagai perulangan yang akan terus diulang-ulang sesuai dengan instruksi yang ditentukan
	//while sebagai perulangan yang akan mengecek terlebih dahulu kondisinya lalu dijalankan
	/*do while sebagai perulangan do adalah aksinya dan while adalah syaratnya aksi dari do
	tidak akan berjalan jika syarat di while bernilai false*/
	/*pada tugas praktikum ke 6 ini saya atas :
	 nama Akbar Wahid Amir ; dengan Nim F1G121035 membuat contoh program c++ instruksi perulangan
	 dengan melibatkan for, while dan do while 
	*/
	system("color FC");
	string nama="Akbar Wahid Amir",NIM="F1G121035";
	//variabel dari nama dan NIM valuenya sudah saya isi otomatis tersimpan di memori
	cout<<"=========== TUGAS PRAKTIKUM DASPRO =============== \n";
	cout<<"Nama Mahasiswa\t: "<<nama<<"\n";
	cout<<"NIM\t\t: "<<NIM<<"\n";
	cout<<"\n\n";
	int mangga,apel,jeruk,tambah,tambahapel,tambahjeruk,hasil,total,hasil1,total1,hasil2,total2,seluruh;
	//type data integer saya gunakan untuk menyimpan memori bilangan genap yang says masukkan
	const int rpmangga=5000,rpapel=15000,rpjeruk=12000;
	cout<<"*********** Perulangan For,While,Do While Untuk Penjumlahan Buah ************* \n";
	cout<<"1. Input Mulai Dari Berapa Buah Mangga Yang Ingin Dijumlahkan : ";
	cin>>mangga;
	//value dari variabel mangga tersimpan di memori
	cout<<"2. Input Mulai Dari Berapa Buah Apel Yang Ingin Dijumlahkan : ";
	cin>>apel;
	//value dari variabel apel tersimpan di memori
	cout<<"3. Input Mulai Dari Berapa Buah Jeruk Yang Ingin Dijumlahkan : ";
	cin>>jeruk;
	//value dari variabel jeruk tersimpan di memori
	cout<<"************************************************************************* \n\n\n";
	cout<<"Input Sampai Batas Berapa Penjumlahan Buah Mangga Yang Diinginkan : ";
	/*batas penjumlahan buah mangga yang diinput merupakan batas akhir dan berhentinya program 
	penjumlahan perulangan yang saya buat ini*/
	cin>>tambah;
	/*di perulangan for syarat bernilai fals jika inputan mangga yang saya masukkan melebihi 
	nilai batas penjumlahan mangga yang saya sudah masukkan. Apabila yang dimasukkan value mangga
	lebih besar daripada nilai penjumlahan batas mangga maka programnya tidak berjalan karena 
	syarat yang dibuat tidak memenuhi*/
	for(mangga;mangga<=tambah;mangga=mangga+mangga){
		/*incrementnya saya buat mangga+mangga artinya tiap hasil penjumlahan mangga yang pertama
		akan dijumlahkan lagi sampai nilai dari penjumlahan mangga sudah melebihi batas penjumlahan 
		yang diinput*/
		cout<<mangga<<" Buah Mangga + "<<mangga<<" = "<<mangga+mangga<<" Jumlah Buah Mangga "<<endl;
		hasil=mangga+mangga;
		//variabel hasil menyimpan hasil dari mangga+mangga
}
	cout<<"\n================================================================\n";
	cout<<"Total Keseluruhan Buah Mangga Yang Dijumlahkan = "<<hasil<<" Buah Mangga \n";
	//totalnya saya keluarkan hasil dari penjumlahan akhir mangga
	total=hasil*rpmangga;
	cout<<"Harga 1 Buah Mangga : Rp."<<rpmangga<<endl;
	//nilai harga dari buah mangga otomatis keluar karena valuenya sudah saya simpan di memori integer
	cout<<"Total Keseluruhan Harga Buah Mangga Yang Dijumlahkan : Rp."<<total<<"\n";
	//total harganya akan keluar dari variabel total = variabel hasil*nilai harga mangga
	cout<<"==================================================================\n\n";
	cout<<"Penjumlahan dan total harga penjumlahan buah mangga sudah selesai \n";
	cout<<"Klik sebuah tombol pada keyboard untuk melanjutkan \n";
	system ("pause");
	/*saya sedikit menambahkan system pause biar ada jeda, system cls untuk membersihkan layar compile
	dan system color untuk mewarnai layar pada saat dicompile*/
	system("cls");
	system("color B4");
	cout<<"==================================================================\n";
	cout<<"--------------- Perulangan While Untuk Buah Apel -----------------\n";
	cout<<"Anda menginput mulai dari : "<<apel<<" untuk penjumlahan buah apel \n";
	cout<<"Input Sampai Batas Berapa Penjumlahan Buah Apel Yang Diinginkan : ";
	cin>>tambahapel;
	cout<<"\n\n";
	/*untuk type data while hampir sama dengan type data for cuma bedanya while incrementnya diletakkan
	di bawah dan untuk program while dia akan memeriksa terlebih dahulu kondisinya jika bernilai benar
	maka programnya akan berjalan sedangkan jika bernilai fals programnya tidak akan berjalan*/
	while(apel<=tambahapel){
		cout<<apel<<" Buah Apel + "<<apel<<" = "<<apel+apel<<" Jumlah Buah Apel "<<endl;
		hasil1=apel+apel; 
		apel+=apel;
}
	cout<<"\n================================================================\n";
	/*jadi hasil dibawah ini tetap keluar walaupun kondisi di while tidak terjadi perulangan karena 
	bernilai fals. hasil dibawah ini akan keluar karena otomatis terjumlahkan dengan buah apel yg diinput
	dan batas penjumlahan buah apel*/
	cout<<"Total Keseluruhan Buah Apel Yang Dijumlahkan = "<<hasil1<<" Buah Apel \n";
	total1=hasil1*rpapel;
	cout<<"Harga 1 Buah Apel : Rp."<<rpapel<<endl;
	cout<<"Total Keseluruhan Harga Buah Apel Yang Dijumlahkan : Rp."<<total1<<"\n";
	cout<<"==================================================================\n\n";
	cout<<"Penjumlahan dan total harga penjumlahan buah apel sudah selesai \n";
	cout<<"Klik sebuah tombol pada keyboard untuk melanjutkan \n";
	system ("pause");
	system("cls");
	system("color 5F");
	cout<<"==================================================================\n";
	cout<<"-------------- Perulangan Do While Untuk Buah Jeruk -----------------\n";
	cout<<"Anda menginput mulai dari : "<<jeruk<<" untuk penjumlahan buah jeruk \n";
	cout<<"Input Sampai Batas Berapa Penjumlahan Buah Jeruk Yang Diinginkan : ";
	cin>>tambahjeruk;
	cout<<"\n\n";
	/*type data do while hampir sama dengan perulangan for dan while cuma beda pengerjaan atau syntaxnya saja
	jadi, di do while walaupun bernilai fals programnya tetap akan dijalankan oleh do tapi hanya 1 kali
	pengerjaan saja. Jadi, di do ini program akan dijalankan dulu kemudian di cek di while, jika kondisi 
	di while bernilai benar atau sesuai dengan syarat di while maka program tetap dijalankan oleh do*/
	do {
		cout<<jeruk<<" Buah Jeruk + "<<jeruk<<" = "<<jeruk+jeruk<<" Jumlah Buah Jeruk "<<endl;
		hasil2=jeruk+jeruk;
		jeruk+=jeruk ;
}	while(jeruk<=tambahjeruk);
	cout<<"\n================================================================\n";
	cout<<"Total Keseluruhan Buah Jeruk Yang Dijumlahkan = "<<hasil2<<" Buah Jeruk \n";
	total2=hasil2*rpjeruk;
	cout<<"Harga 1 Buah Jeruk : Rp."<<rpjeruk<<endl;
	cout<<"Total Keseluruhan Harga Buah Jeruk Yang Dijumlahkan : Rp."<<total2<<"\n";
	cout<<"==================================================================\n\n";
	cout<<"Penjumlahan dan total harga penjumlahan buah jeruk sudah selesai \n";
	cout<<"Klik sebuah tombol pada keyboard untuk melanjutkan \n";
	system ("pause");
	system("cls");
	system("color FC");
	cout<<"==================================================================\n";
	cout<<"Jadi total harga dari buah yang sudah dijumlahkan adalah : \n";
	cout<<"Buah Mangga = Rp."<<total<<endl;
	cout<<"Buah Apel = Rp."<<total1<<endl;
	cout<<"Buah Jeruk = Rp."<<total2<<endl;
	seluruh=total+total1+total2;
	cout<<"Total Keseluruhan Harga Buah Mangga, Apel dan Jeruk Adalah : Rp."<<seluruh<<endl;
	cout<<"==================================================================\n";
	system("pause");
	cout<<"\n\n";
	//pengucapan terimakasih saya kepada kakak asisten pembimbing praktikum
	cout<<"Saya Atas Nama  "<<nama<<"  Dengan NIM  "<<NIM<<"\n";
	cout<<"Berterimakasih Kepada Kak Alif Yang Sudah membimbing kami pada praktikum daspro \n";
	cout<<"Dan sekian tugas praktikum daspro saya lebih dan kurangnya, saya ucapkan terimakasih \n";

	
	getch;
}
