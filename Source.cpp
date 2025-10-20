#include <stdio.h>
#include <math.h>
void main()

{

// File Hello.c

	/*
	printf("Hello World!!!");
	*/

	/*
	printf("Hello World!!!\n");
	printf(I am a student");
	*/

// File Sum.c

	/*
	int a = 2, b = 3;
	int kq = a + b;
	printf("Ket qua la: %d", kq); //%d đại diện cho số nguyên
	*/
	
	/*
	int a, b;
	printf_s("Nhap a: ");
	scanf_s("%d", &a);
	printf_s("Nhap b: ");
	scanf_s("%d", &b);
	int kq = a + b;
	printf("Ket qua la: %d", kq);
	*/

// File Sin.c

	/*
	double a;
	printf_s("Nhap a: ");
	scanf_s("%d", &a);
	double kq = sin(a);
	printf("Ket qua la: %lf", kq);
	*/

// File Cirlce.c

	/*
	#define PI 3.14159
	float R = 1.25;
	float DienTich;
	DienTich = PI * R * R;
	printf("Hinh tron, ban kinh = %f\n", R);
	printf("Dien tich = %f", DienTich);
	*/

// File varSize.c

	/*
	short Delta = 9;
	printf("Kich thuoc delta = %d\n", sizeof(Delta)); //2
	printf("Kich thuoc kieu int = %d\n", sizeof(int)); //4
	printf("Kich thuoc kieu long = %d\n", sizeof(long)); //4
	printf("Kich thuoc kieu float = %d\n", sizeof(float)); //4
	printf("Kich thuoc kieu char = %d\n", sizeof(char)); //1
	*/

// Primitive date - types

	/*
	bool bVal;
	float x = 46.7F, y = 93.0F, z;
	bVal = (x == y);
	printf("%d\n", bVal);
	bVal = (x < y);
	printf("%d\n", bVal);
	z = (x > y) * x + (x <= y) * y;
	printf("%f\n", z);
	*/

	/*
	char ch = 65;
	printf("%c\n", ch);
	ch = 'A';
	printf("%c\n", ch);
	printf("Nhap ch: ");
	scanf_s("%c", &ch);
	printf("ASCII code: %d\n", ch);
	ch = ch - ('a' - 'A') * (ch >= 'a' && ch <= 'z');
	printf("Upper case: %c\n", ch);
	*/

// Bài 1

	/*
	int a;
	printf("Moi thay nhap nam sinh: ");
	scanf_s("%d", &a);
	int age = 2025 - a;
	printf("Tuoi cua thay la: %d", age);
	*/

// Bài 2

	/*
	char ch;
	printf("Moi thay nhap ky tu: ");
	scanf_s("%c", &ch, 1);
	ch = ch - ('a' - 'A') * (ch >= 'a' && ch <= 'z');
	printf("Ky tu hoa la: %c\n", ch);
	*/

// Bài 3
	/*
	long long money, n; // money: so tien can doi, n: menh gia uu tien
	printf("Moi thay nhap so tien can doi (VND): ");
	scanf_s("%lld", &money);
	printf("Menh gia thay uu tien doi: ");
	scanf_s("%lld", &n);

	int a[9] = { 500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000 };
	int k = 9;
	long long SoToTien, MenhGia;

	// Xu ly menh gia uu tien
	SoToTien = money / n;
	printf("%d : %lld\n", n, SoToTien);
	money %= n;

	// Duyet cac menh gia con lai
	for (int i = 0; i < k; i++) {
		if (a[i] == n) continue; // bo qua menh gia uu tien
		SoToTien = money / a[i];
		printf("%d : %lld\n", a[i], SoToTien);
		money %= a[i];
	}
	*/
}