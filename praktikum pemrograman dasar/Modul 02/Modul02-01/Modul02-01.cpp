/* Adi Febriana (140910200022) */
// program untuk mengecek suatu bilangan adalah genap atau ganjil

#include <stdio.h>
#include <conio.h>
main(){
	int nilai;
	printf("Masukkan sebuah nilai integer = ");
	scanf("%d",&nilai);
	if((nilai%2)==1) //mengecek sisa 1 atau 0
		printf("%d adalah GENAP",nilai);
	else
		printf("%d adalah GANJIL",nilai);
	getch();
	return 0;		
}
