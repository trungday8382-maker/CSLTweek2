#include <stdio.h>
#include <math.h>
#include <cctype>
#define PI 3.14159
void main()
{
	
	//-----------File Hello.c------------//
	/*printf_s("Hello World!!!\n");*/

	
	//-----------File Hello.c------------//
	/*printf_s("Hello World!!!\n");
	printf_s("I am a student");*/

	
	//-----------File Sum.c------------//
	/*int a, b;
	int a = 2, b = 3;
	int kq = a + b;
	printf_s("Ket qua la:%d", kq);*/

	
	//-----------File Sum.c------------//
	/*int a, b;
	printf_s("Nhap a: ");
	scanf_s("%d", &a);
	printf_s("Nhap b: ");
	scanf_s("%d", &b);
	int kq = a + b;
	printf_s("Ket qua la:%d", kq);*/

	
	//-----------File Sin.c------------//
	/*double a;
	printf_s("Nhap a: ");
	scanf_s("%lf", &a);
	double kq = sin(a);
	printf_s("Ket qua la:%lf", kq);*/


	//-----------File Circle.c------------//
	//	float R = 1.25;
	//	float dientich;
	//	dientich = PI * R * R;
	//	printf_s("Hinh tron, ban kinh=%f\n", R);
	//	printf_s("Dien tich =%f", dientich);


	//-----------File varSize.c------------//
	/*short delta = 9;
	printf_s("Kich thuoc delta=%d\n", sizeof(delta));
	printf_s("Kich thuoc kieu int=%d\n", sizeof(int));
	printf_s("Kich thuoc kieu long=%d\n", sizeof(long));
	printf_s("Kich thuoc kieu float=%d\n", sizeof(float));
	printf_s("Kich thuoc kieu char=%d\n", sizeof(char));*/


	//-----------Primitive data - types------------//
	/*bool bVal;
	float x = 46.7F, y = 93.0F, z;
	bVal = (x == y);
	printf_s("%d\n", bVal);
	bVal = (x < y);
	printf_s("%d\n", bVal);
	z = (x > y) * x + (x <= y) * y;
	printf_s("%f\n", z);*/


	//-----------Character type------------//
	/*char ch = 65;
	printf_s("%c\n", ch);
	ch = 'A';
	printf_s("%c\n", ch);
	printf_s("Nhap ch: ");
	scanf_s("%c", &ch);
	printf_s("ASCII code: %d\n", ch);
	ch = ch - ('a' - 'A') * (ch >= 'a' && ch <= 'z');
	printf_s("Uppercase: %c\n", ch);*/


	//-----------Bai_1------------//
	/*int a;
	printf_s("Moi ban nhap nam sinh: ");
	scanf_s("%d", &a);
	int tuoi = 2025 - a;
	printf_s("So tuoi cua ban la: %d", tuoi);*/


	//-----------Bai_2------------//
	/*char kytu;
	printf_s("Moi ban nhap mot ky tu bat ky: ");
	scanf_s("%c", &kytu);
	char kytu_hoa = toupper(kytu);
	printf_s("Ky tu in hoa cua ky tu %c la: %c", kytu, kytu_hoa);*/


	//-----------Bai_3------------//
	/*long long n, a;
	printf_s("Moi ban nhap so tien can quy doi (VND): ");
	scanf_s("%lld", &n);
	printf_s("Menh gia ban can uu tien quy doi la: ");
	scanf_s("%lld", &a);
	int list[9] = { 500000,200000,100000,50000,20000,10000,5000,2000,1000 };
	int k = 9;
	long long so_to, menh_gia;
	for (int j = 0; j < 9; j++) {
		if (a == list[j]) {
			so_to = n / a;
			printf_s("%lld = %lld x %lld", n, so_to, a);
			for (int t = j; t < k - 1; t++) {
				list[t] = list[t + 1];
			}
			k--;
			break;
		}
	}
	n = n % a;
	for (int i = 0; i < 8; i++) {
		menh_gia = list[i];
		so_to = n / menh_gia;
		printf_s(" + %lld x %lld", so_to, menh_gia);
		n = n % menh_gia;
	}*/


}






