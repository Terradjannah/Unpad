/* Adi Febriana (140910200022) */
/*Menghitung jumlah dari bilangan asli dengan menggunakan rekursi*/

#include <stdio.h>
#include <conio.h>
int tambah(int n); /*prototipe fungsi*/

main(){
	int n;
	
	printf("Masukkan sebuah integer positif = ");
	scanf("%d",&n);
	printf("Jumlah = %d",tambah(n));
	
	getch();
	return 0;
}

int tambah(int n){
	if(n!=0)
	return n+tambah(n-1); /* pemanggilan rekursif */
	
}
