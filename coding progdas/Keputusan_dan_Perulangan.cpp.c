#include <stdio.h>
#include <conio.h>
#include <math.h>

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
	
	
	int r = rand() % 9;
	
	printf("\n %d", r);
	
	if(0<r<3){
		printf("\n batu");
	}
	if(3<r<6){
		printf("kertas");
	}
	if(6<r<9){
		printf("gunting\n");
	}
	*/
	
	int n, max, num, c;
	 for (c = 1; c <= n; c++)
   {
      num = random(max);
      printf("%d\n",num);        
   }
	
	getch();
	return 0;
}
