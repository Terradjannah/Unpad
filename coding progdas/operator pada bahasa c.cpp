#include <stdio.h>
#include <conio.h>

main(){
	//operator increment dan decrement
	
	printf("OPERASI INCREMENT\n");
	int c = 3;
	printf("%d\n",c);
	printf("%d\n",++c); //dijumlahkan dahulu baru ditampilkan
	printf("%d\n",c++); //ditampilkan dahulu baru dijumlahkan
	printf("%d\n\n",c); //total nilai dari variabel yang berada di ram yakni 5

	printf("OPERASI DECREMENT\n");
	int c2 = 5;
	printf("%d\n",c2);
	printf("%d\n",--c2); //dijumlahkan dahulu baru ditampilkan
	printf("%d\n",c2--); //ditampilkan dahulu baru dijumlahkan
	printf("%d\n\n",c2); //total nilai dari variabel yang berada di ram yakni 5
	
	int c3 = 2;
	int hasil = c3++ + --c3 + ++c3;
	printf("%d\n\n",hasil);
	
	
	//operator penugasan
	
	// +=, =, -=, *=, /=, %=
	
	int c4 = 2, d;
	d = 4;
	
	printf("OPERASI PENUGASAN\n");
	printf("%d\n", d+=c4); //d+c4 = 4+2 = 6
	printf("%d\n", d-=c4); // d=6, d-c4 = 6-2 = 4
	printf("%d\n", d*=c4); // d=4, d*c4 = 4*2 = 8
	printf("%d\n", d/=c4); // d=8, d/c4 = 8/2 = 4
	printf("%d\n\n", d%=c4); // d=4, d%c4 = 4%2 = 0
	
	
	//operator relasi
	
	//operator relasi mengecek hubungan antar variabel
	// ==, >, <, != (tidak sama dengan), >=, <=
	
	int c5 = 4, d2;
	d2 = 2;
	
	printf("OPERASI RELASI\n");
	printf("%d\n", c5==d2); //sama dengan
	printf("%d\n", c5>d2); //lebih dari
	printf("%d\n", c5<d2); //kurang dari
	printf("%d\n", c5>=d2); //lebih dari samadengan
	printf("%d\n", c5<=d2); //kurang dari samadengan
	printf("%d\n\n", c5!=d2); //tidak samadengan
	printf("%d\n\n", c5==d2 + c5>d2); //+ disini artinya and
	
	//operator logika
	
	// and &&, or||, not!
	printf("OPERASI LOGIKA\n\n");
	printf("AND\n");
	printf("%d\n", 0&&0);
	printf("%d\n", 0&&1);
	printf("%d\n", 1&&0);
	printf("%d\n", 1&&1);
	
	printf("OR\n");
	printf("%d\n", 0||0);
	printf("%d\n", 0||1);
	printf("%d\n", 1||0);
	printf("%d\n", 1||1);
	
	printf("NOT\n");
	printf("%d\n", !0);
	printf("%d\n\n", !1);
	
	
	//Operator BIT
	
	//operator bit bekerja dan digunakan pada operasi pemrograman tingkat bit data
	// 
	
	int a = 8, q;
	q = 12;
	printf("%d\n", a & q);
	
	printf("%d\n", a | q);
	
	printf("%d\n", a ^ q);
	
	//printf("%d\n", a ~ q);
	
	printf("%d\n", a << 1);
	
	printf("%d\n", q << 1);
	
	printf("%d\n", a >> 1);
	
	printf("%d\n", q >> 1);
	
	
	int p = 12, z = 8; 
	printf("%d\n", p>>1 + z&p);
	//looping
	
	
	
	getch();
	return 0;
}
