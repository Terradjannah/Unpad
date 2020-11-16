/* Adi Febriana (140910200022) */
/*Konversi bilangan biner ke oktal dan sebaliknya*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
int binary_octal(int n);
int octal_binary(int n);

main(){
	
	int octal=0, decimal=0, i=0, n= 1011;
	while(n!=0){
		printf("\n baris 14(n) %d \n", n);
		printf("\n baris 15(decimal) %d \n", decimal);
		decimal+=(n%10)*pow(2,i);
		printf("\n baris 17(decimal) %d \n", decimal);
		++i;
		printf("\n baris 19(i) %d \n\n", i);
		n/=10;
		printf("\n baris 21(n) %d \n", n);
	}
	
	/*At this point, the decimal variable contains
	corresponding decimal value of binary number. */
	
	i=1;
	while (decimal!=0){
		printf("\n baris 29(n) %d \n", decimal);
		printf("\n baris 30(n) %d \n", octal);
		octal+=(decimal%8)*i;
		printf("\n baris 32(n) %d \n", octal);
		decimal/=8;
		printf("\n baris 34(n) %d \n", decimal);
		i*=10;
		printf("\n baris 36(i) %d \n\n", i);
	}
	return octal;
}
