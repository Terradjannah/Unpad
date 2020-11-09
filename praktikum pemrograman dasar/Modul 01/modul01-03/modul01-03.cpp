/* Adi Febriana (140910200022)*/

/* manipulasi variabel tipe char */

#include <stdio.h>
#include <conio.h>

main()
{
	char hurufku, hurufmu;
	hurufku = 97;
	printf("Karakter dalam variabel hurufku adalah = %c \n", hurufku);
	printf("Nilai ASCII  %c dalam variabel hurufku adalah = %d", hurufku,hurufku);
	printf("\n");
	hurufmu = hurufku+1;
	printf("Karakter setelah %c adalah hurufmu = %c", hurufku,hurufmu);
	printf("\nNilai ASCII dalam variabel hurufmu adalah = %d", hurufmu);
	getch();
	return 0;
}
