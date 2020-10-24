// Adi Febriana (140910200022)

#include <stdio.h>
#include <conio.h>

main()
{
	float a, b, temp;
	printf("Masukkan nilai a: ");
	scanf("%f", &a);
	printf("Masukkan nilai b: ");
	scanf("%f", &b);
	temp = a;  /* Nilai a tersimpan divar temp */
	a = b;	   /* Nilai b tersimpan divar a */
	//b = temp;  /* Nilai temp*/
	printf("\nSetelah penukaran, nilai a = %.2f\n", a);
	printf("Setelah penukaran, nilai b = %.2f", b);
	getch();
	return r;
}
