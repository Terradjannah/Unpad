/* Adi Febriana (140910200022) */
/*Menampilkan bilangan prima di antara interval*/

#include <stdio.h>
#include <conio.h>
int cek_prima(int num); /*prototipe fungsi*/

main(){
	int n1,n2,i,flag;
	
	printf("Masukkan dua bilangan interval = ");
	scanf("%d %d",&n1, &n2);
	printf("Bilangan prima antara %d dan %d adalah = ", n1, n2);
	
	for(i=n1+1;i<n2;++i){
		flag=cek_prima(i);
		if(flag==0)
			printf("hasil %d ",i);
	}
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
