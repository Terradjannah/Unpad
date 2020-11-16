/* Adi Febriana (140910200022) */
/*Konversi bilangan biner ke oktal dan sebaliknya*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
int binary_octal(int n);
int octal_binary(int n);


main(){
	int decimal=0, binary=0, i=0, n=13;
	while (n!=0){
		decimal+=(n%10)*pow(8,i);
		printf("\n baris 15(decimal) %d \n", decimal);
		++i;
		printf("\n baris 15(decimal) %d \n", i);
		n/=10;
		printf("\n baris 15(decimal) %d \n\n", n);
	}
	
	/* At this point, the decimal variable contains
	corresponding decimal value of that octal number. */
	
	i=1;
	while(decimal!=0){
		binary+=(decimal%2)*i;
		printf("\n baris 17(decimal) %d \n", binary);
		decimal/=2;
		printf("\n baris 17(decimal) %d \n", decimal);
		i*=10;
		printf("\n baris 17(decimal) %d \n\n", i);
	}
	return binary;
}
