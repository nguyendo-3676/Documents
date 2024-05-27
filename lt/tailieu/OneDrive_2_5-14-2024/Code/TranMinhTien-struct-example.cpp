#include<stdio.h>
struct Thi_sinh{
	char Ho_ten[20];
	char Ngaysinh[20];
	float Toan, Ly, Hoa;
	
};
int main()
{
	struct Thi_sinh p;
	/*Lay thong tin tu ban phim*/
	printf("Nhap ho ten thi sinh:");
	scanf (" %s", &p.Ho_ten);
	printf("Nhap ngay sinh:");
	scanf ("%s", &p.Ngaysinh);
	printf(" Nhap diem toan, ly , hoa");
	scanf("%f %f %f", &p.Toan, &p.Ly, &p.Hoa);
	/*Hien thi thong tin ra man hinh*/
	printf("Thong tin thi sinh la: %s %s 0.2%f 0.2%f 0.2%f \n", p.Ho_ten, p.Ngaysinh, p.Toan, p.Hoa, p.Ly);
	return 0;
	
}

