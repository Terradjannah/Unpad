/* Adi Febriana (140910200022) */
/*Konversi bilangan biner ke oktal dan sebaliknya*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
int binary_octal(int n);
int octal_binary(int n);

main(){
	int n; char c;
	
	printf("Instruksi:\n");
	printf("1. Tekan 'o' untuk konversi biner ke oktal.\n");
	printf("2. Tekan 'b' untuk konversi oktal ke biner.\n");

	scanf("%c",&c);
	if ( c=='o' || c=='O'){
		printf("Masukkan bilangan biner: ");
		scanf("%d",&n);
		printf("%d biner = %d oktal", n, binary_octal(n));
	}
	
	if ( c=='b' || c=='B'){
		printf("Masukkan bilangan oktal: ");
		scanf("%d",&n);
		printf("%d oktal = %d biner",n, octal_binary(n));
	}
	
	getch();
	return 0;
}

int binary_octal(int n){ /*Fungsi konversi biner ke oktal*/
	int octal=0, decimal=0, i=0;
	while(n!=0){
		decimal+=(n%10)*pow(2,i);
		++i;
		n/=10;
	}
	
	/*At this point, the decimal variable contains
	corresponding decimal value of binary number. */
	
	i=1;
	while (decimal!=0){
		octal+=(decimal%8)*i;
		decimal/=8;
		i*=10;
	}
	return octal;
}

int octal_binary(int n){ /*Fungsi konversi oktal ke biner.*/
	int decimal=0, binary=0, i=0;
	while (n!=0){
		decimal+=(n%10)*pow(8,i);
		++i;
		n/=10;
	}
	
	/* At this point, the decimal variable contains
	corresponding decimal value of that octal number. */
	
	i=1;
	while(decimal!=0){
		binary+=(decimal%2)*i;
		decimal/=2;
		i*=10;
	}
	return binary;
}
