// Adi Febriana (140910200022)
/* Program untuk mengecek suatu karakter adalah alphabet atau bukan */

#include <stdio.h>
#include <conio.h>
main(){
	int n, cacah, jumlah =0;
	printf("Masukkan suatu nilai integer = ");
	scanf("%d",&n);
	cacah = 1;
	while(cacah<=n) /*loo[ while selesai jika cacah>n */
	{
		jumlah += cacah; /* jumlah = jumlah + cacah */
		cacah++;
	}
	printf("jumlahnya adalah = %d", jumlah);
	getch ();
	return 0;
}
