// Adi Febriana (140910200022)

#include <stdio.h>
#include <conio.h>

main()
{
	int pembilang, penyebut, hasil, sisa;
	printf("Masukan pembilang = ");
	scanf("%f", &pembilang);
	printf("Masukkan penyebut = ");
	scanf("%f", &penyebut);
	hasil = pembilang / penyebut; /* menghitung hasil bagi */
	sisa = pembilang % penyebut; /* menghitung sisa */
	printf("Hasil pembagian = %d\n", hasil);
	printf("Sisa pembagian = %d", sisa);
	getch();
	return 0;
}
