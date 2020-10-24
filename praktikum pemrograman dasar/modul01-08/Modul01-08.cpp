// Adi Febriana (140910200022)

#include <stdio.h>
#include <conio.h>

main()
{
	float nilai1, nilai2, hasil_kali;
	printf("Masukkan dua bilangan riil: ");
	scanf("%f %f", &nilai1,&nilai2);
	hasil_kali = (10+nilai1)*(20+nilai2);
	printf("Hasil operasi dengan format standar = %f\n", hasil_kali);
	printf("Hasil operasi dengan format 12.2 = %12.2f\n", hasil_kali);
	getch();
	return 0;
}
