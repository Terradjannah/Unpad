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
	
	/*
	int y, r;
	
	for (y=0; y<10; y=y+2){
		r = rand() % 10;
		printf("aku mau makan %d %d\n", r, y);
		++y;
	}
		
	int y, r;
		for (y=0; y<10; --y){
		MessageBox(0,"gabisa di tutup yaa","kesel yaaaa ",1);
		}*/
	
	
	int o = 0;
	//minimum data masuk 0 karena di cek dulu baru data masuk
	while (o<=4){
		printf("%d\n", o);
		++o;
	}
	
	printf("\n\n\n");
	
	int q = 0;
	
	//minimum data masuk 1 karena data masuk dulu baru di kondisikan
	do{
		printf("%d\n", q);
		++q;
	} 
	while (q<=4);
	
	getch();
	return 0;
}
