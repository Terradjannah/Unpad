// Adi Febriana (140910200022)
/*Membuat kalkulator sederhana*/

#include <stdio.h>
#include <conio.h>
main(){
	char operasi;
	float num1,num2;
	
	printf("Pilih operator + atau - atau * atau / = ");
	scanf("%c",&operasi);

	printf("Enter two operands: ");
	scanf("%f%f",&num1,&num2);

	switch(operasi) {
		case '+':
			printf("%.1f + %.1f = %.1f",num1, num2, num1+num2);
			break;
		case '-':
			printf("%.1f - %.1f = %.1f",num1, num2, num1-num2);
			break;
		case '*':
			printf("%.1f * %.1f = %.1f",num1, num2, num1*num2);
			break;
		case '/':
			printf("%.1f / %.1f = %.1f",num1, num2, num1/num2);
			break;
		default:
		/*Jika operator bukan +, -, * or /, tampilkan pesan error*/
			printf("Error! operator is not correct");
			break;
	}
		
	getch ();
	return 0;
}
