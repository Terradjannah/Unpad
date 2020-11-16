#include <stdio.h>
#include <conio.h>
int cek_prima(int num); /*prototipe fungsi*/

main(){
	int n1,n2,i,flag=0, j, num;
	
	
	
	for(j=2;j<=num/2;++j){
		
		if(num%j==0){
			flag=1;
			break;
		}
	}
	
	printf("%d", j);
	printf("%d", num);
	printf("%d", flag);
	getch();
	return 0;
}

int cek_prima(int num){ /*fungsi buatan utk bilangan prima*/
	int j,flag=0;
	
	for(j=2;j<=num/2;++j){
		
		if(num%j==0){
			flag=1;
			break;
		}
	}
	return flag;	
}
