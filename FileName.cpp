
#include <stdio.h>
#include <iostream>
using namespace std;
//#include <stdio.h>//Standard input output lib
//#include <cmath>

//void main()
//{
//	//printf_s("Hello World");//print function
//	//printf_s("Hello World!!!\n");
//	//printf_s("I am a student");
//	//int a = 2, b = 3;
//	//int kq = a + b;
//	//printf_s("Ket qua la: %d", kq);//%d là để in ra số nguyên
//
//	//int a, b;
//	//printf_s("Nhap a: ");
//	//scanf_s("%d", &a);
//	//printf_s("Nhap b: ");
//	//scanf_s("%d", &b);
//	//int kq = a + b;
//	//printf_s("Ket qua a + b = %d", kq);
//
//	/*double a;
//	printf_s("Nhap a: ");
//	scanf_s("%lf", &a);
//	double kq = sin(a);
//	printf_s("Ket qua la: %lf", kq);*/
//
//}

//void main()
//{
////#define Pi 3.14159
////	float R = 1.25;
////	float DienTich;
////	DienTich = Pi * R * R;
////	printf_s("Hinh tron, ban kinh=%f\n", R);
////	printf_s("Dien tich=%f", DienTich);
//	/*short Delta = 9;
//	printf_s("Kich thuoc delta=%d\n", sizeof(Delta));
//	printf_s("Kich thuoc int=%d\n", sizeof(int));
//	printf_s("Kich thuoc long=%d\n", sizeof(long));
//	printf_s("Kich thuoc float=%d\n", sizeof(float));
//	printf_s("Kich thuoc char=%d\n", sizeof(char));*/
//
// 
// 
// 
//	//bool bVal;
//	//float x = 46.7F, y = 93.0F, z;
//	//bVal = (x == y);
//	//printf_s("%d\n", bVal);
//	//bVal = (x < y);
//	//printf_s("%d\n", bVal);
//	//z = (x > y) * x + (x <= y) * y;
//	//printf_s("%f\n", z);

//	/*char ch = 65;
//	printf_s("%c\n", ch);
//	printf_s("Nhap ch: ");
//	scanf_s("%c", &ch);
//	printf_s("ASCII code: %d\n", ch);
//	ch = ch - ('a' - 'A') * (ch >= 'a' && ch <= 'z');
//	printf_s("Upper case:%c\n", ch);*/
//	
// 
// 
//
//}
int main()
{
	//================= BÀI 1 =========================//
	int birthyear;
	cout << "Moi thay nhap vao nam sinh: ";
	cin >> birthyear;
	int age = 2025 - birthyear;
	cout << "Tuoi cua thay la: " << age << endl;


	//================= BÀI 2 ========================//
	char ch;
	cout << "Moi thay nhap chu can doi: ";
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		ch = ch - ('a' - 'A');
	}
	cout << "Chu in hoa la: " << ch;


	//================= BÀI 3========================//
	long long menhgia[9] = { 500000,200000,100000,50000,20000,10000,5000,2000,1000 };
	long long SoTien, MenhGiaUuTien, TienQuyDoi[9] = { 0 };
	cout << "\nMoi thay nhap so tien can quy doi: ";
	cin >> SoTien;
	long long SoTienGoc = SoTien;
	cout << "Moi thay nhap menh gia uu tien: ";
	cin >> MenhGiaUuTien;
	for (int i = 0; SoTien >= 1000; i++)
	{
		if (menhgia[i] <= MenhGiaUuTien)
		{
			TienQuyDoi[i] = SoTien / menhgia[i];
			SoTien %= menhgia[i];
		}
	}
	cout << "\n" << SoTienGoc << "=";
	for (int i = 0; i < 9; i++)
	{
		if (i == 8)
		{
			cout << menhgia[i] << "x" << TienQuyDoi[i];
			break;
		}
		cout << menhgia[i] << "x" << TienQuyDoi[i] << "+";
	}

}