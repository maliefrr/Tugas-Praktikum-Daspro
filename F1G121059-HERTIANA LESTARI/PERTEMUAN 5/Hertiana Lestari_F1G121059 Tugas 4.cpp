#include <stdio.h>
int main (){
	int i=0, loop;
	printf("Program Perulangan Kelipatan 4 Menggunakan DO WHILE/n");
	printf("Input Batas Perulangan : ");
	scanf("Ki",&loop);
	
	do{
		printf("Ki/n",i);
		i++;
		i+=3;
	}while(i<=loop);
}
