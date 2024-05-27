#include<stdio.h>
#include<stdlib.h>
#include<string.h>



long doDaiChuoi(const char* string);
int main (int argc, char *argv[ ])
{
char string[ ] = "Hello";
long doDai = 0;
doDai = doDaiChuoi(string);
printf ("chuoi %s co do dai %ld ki tu", string, doDai);
return 0;
}
long doDaiChuoi (const char* string)
{
long soLuongKiTu = 0;
char kiTuHienTai = 0;
do
{
kiTuHienTai = string[soLuongKiTu];
soLuongKiTu++;
}
while (kiTuHienTai != '\0'); // Vong lap tiep tuc neu ki tu hien tai khong phai la \0
soLuongKiTu--; // Do dai chuoi giam di 1 vi ta khong tinh \0
return soLuongKiTu;
}