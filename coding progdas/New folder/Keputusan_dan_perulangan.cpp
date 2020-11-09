#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include<windows.h>

main()
{
	
	
	/*
	c = 8;
	d = 3;
	
	if (c<d){
		printf("nilai c lebih besar dari d");
	}else {
		printf("nilai c kurang dari d");
	}
	
	printf(" %d ", rand());
	*/
	/*
	int r = rand() % 9;
	
	printf("\n %d", r);
	
	if(0<r<3){
		r;
		printf("\n batu %d",r);
	}
	if(3<r<6){
		r;
		printf("\n gunting %d",r);
	}
	if(6<r<9){
		r;
		printf("\n kertas %d",r);
	}
	
	
	int n, max, num, c;
	 for (c = 1; c <= n; c++)
   {
      num = random(max);
      printf("%d\n",num);        
   }
   */
	
	
	int y, r;
	
	for (y=0; y<10; y++){
		r = rand() % 10;
		printf("\naku mau makan %d %d\n", r, y);
		if(y==5){
		continue;}
		printf("\nAku dan Kamu");
	}
		/*
		for (y=0; y<10; --y){
		MessageBox(0,"gabisa di tutup yaa","kesel yaaaa ",1);
		continue;
		}*/
	
	
	
	//minimum data masuk 0 karena di cek dulu baru data masuk
	
	
	printf("\n\n\n");
	
	int q = 0;
	
	/*//minimum data masuk 1 karena data masuk dulu baru di kondisikan
	do{
		printf("%d\n", q);
		++q;
	} 
	while (q<=4);
	
	while (q<=4){
		printf("%d\n", q);
		++q;
	}*/



	char nilai;
 
  printf("Input Nilai Anda (A - E): ");
  scanf("%c",&nilai);
 
  switch (nilai) {
    case 'A':
      printf("Pertahankan! \n");
      break;
    case 'B':
      printf("Harus lebih baik lagi \n");
      break;
    case 'C':
      printf("Perbanyak belajar \n");
      break;
    case 'D':
      printf("Jangan keseringan main \n");
      break;
    case 'E':
      printf("Kebanyakan bolos... \n");
      break;
	case 'a':
      printf("Pertahankan! \n");
      break;
    case 'b':
      printf("Harus lebih baik lagi \n");
      break;
    case 'c':
      printf("Perbanyak belajar \n");
      break;
    case 'd':
      printf("Jangan keseringan main \n");
      break;
    case 'e':
      printf("Kebanyakan bolos... \n");
      break;
    default:
      printf("Maaf, format nilai tidak sesuai \n");
  }
 
	getch();
	return 0;
}
