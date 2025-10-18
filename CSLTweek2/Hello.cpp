//File Hello.cpp
#include <stdio.h>

void main() 
{
#define PI 3.14159
	float R = 1.25;
	float DienTich;
	DienTich = R * R * PI;
	printf_s("Hinh tron, ban kinh = %f \n", R);
	printf_s("Dien tich = %f", DienTich);
}