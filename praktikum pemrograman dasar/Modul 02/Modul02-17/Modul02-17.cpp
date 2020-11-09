// Adi Febriana (140910200022)
/* Program untuk mengecek apakah suatu bilangan palindrom */

#include <stdio.h>
#include <conio.h>
main(){
	int n, reverse=0, rem, temp;
	printf("Masukkan sebuah integer = ");
	scanf("%d",&n);
	temp = n;
	while(temp != 0){
		rem = temp % 10;
		reverse = reverse*10 + rem;
		temp /= 10;
	}
	
	/* Cek nilai dan balikannya */
	if(reverse == n)
		printf("%d adalah palindrom.",n);
	else
		printf("%d bukan palindrom.",n);
		
	getch ();
	return 0;
}
