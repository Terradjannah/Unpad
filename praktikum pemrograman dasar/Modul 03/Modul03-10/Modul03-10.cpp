/* Adi Febriana (140910200022) */
/*Konversi bilangan biner ke decimal dan sebaliknya*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
int binary_decimal(int n);
int decimal_binary(int n); /*prototipe fungsi*/

main(){
	int n;
	char c;
	
	printf("Instruksi:\n");
	printf("1. Tekan 'd' untuk konversi biner ke desimal.\n");
	printf("2. Tekan 'b' untuk konversi desimal ke biner.\n");
	scanf("%c",&c);
	
	if (c =='d' || c == 'D'){
		printf("Masukkan sebuah bilangan biner: ");
		scanf("%d", &n);
		printf("%d biner = %d desimal", n, binary_decimal(n));
	}
	
	if (c =='b' || c == 'B'){
		printf("Masukkan sebuah bilangan desimal: ");
		scanf("%d", &n);
		printf("%d desimal = %d biner \n", n, decimal_binary(n));
	}
	
	getch();
	return 0;
}

int decimal_binary(int n){ /* Fungsi konversi desimal ke biner*/
	int rem, i=1, binary=0;
	
	while (n!=0){
		rem=n%2; n/=2;
		binary+=rem*i;
		i*=10;
	}
	return binary;
}

int binary_decimal(int n){ /* Fungsi konversi biner ke desimal.*/
	int decimal=0, i=0, rem;
	while (n!=0){
		rem = n%10;
		n/=10;
		decimal += rem*pow(2,i);
		++i;
	}
	return decimal;
}
