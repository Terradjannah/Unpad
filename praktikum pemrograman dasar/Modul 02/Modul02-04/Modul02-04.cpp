// Adi Febriana (140910200022)
/* Program untuk menghitung akar-akar persamaan kuadrat 
dengan nilai koefisien dimasukkan oleh pengguna
// Fungsi pustaka sqrt() menghitung akar dua */

#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
	float a, b, c, determinan, r1, r2, riil, imajiner;
	printf("Masukkan koefisien a, b, dan c = ");
	scanf("%f%f%f", &a, &b, &c);
	determinan = b*b - 4*a*c;
	if (determinan > 0){
		r1 = (-b+sqrt(determinan))/(2*a);
		r2 = (-b-sqrt(determinan))/(2*a);
		printf("Akar-akarnya adalah = %.2f and %.2f",r1,r2);
	}
	else if (determinan==0){
		r1 = r2 = -b/(2*a);
		printf("Akar-akarnya adalah = %.2f and %.2f",r1,r2);
	}
	else {
		riil = -b/(2*a);
		imajiner = sqrt(-determinan)/(2*a);
		printf("Akar-akarnya adalah = %.2f + %.2fi and %.2f-%.2fi",riil,imajiner,riil,imajiner);
	}
	getch();
	return 0;
}
