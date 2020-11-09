// Adi Febriana (140910200022)
/* Program untuk menghitung tabel perkalian hingga 10*/

#include <stdio.h>
#include <conio.h>
main(){
	int n, i;
	printf("Masukkan bilangan bulat untuk tabel perkalian = ");
	scanf("%d",&n);
	for(i=1;i<=10;++i){
		printf("%d * %d = %d\n", n, i, n*i);
	}
	
	getch();
	return 0;
}
