#include <stdio.h>
#include <conio.h>
#include <math.h>
float akar_akar(float a, float b, float c){
    float  determinan, r1, r2, riil, imajiner;
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
}

main(){
    float j, k, l;
    printf("Masukkan koefisien j, k, dan l = ");
	scanf("%f%f%f", &j, &k, &l);
    akar_akar(j,k,l);
    getch();
    return 0;
}





















