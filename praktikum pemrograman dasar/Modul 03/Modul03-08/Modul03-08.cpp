/* Adi Febriana (140910200022) */
/*Membalikkan kalimat menggunakan rekursi*/

#include <stdio.h>
#include <conio.h>
void Reverse(); /*prototipe fungsi*/

main(){
	printf("Masukkan sebuah kalimat = ");
	Reverse();
	getch();
	return 0;
}

void Reverse(){
	char c;
	scanf("%c",&c);
	
	if( c != '\n'){
		Reverse();
		printf("%c",c);
	}
}
