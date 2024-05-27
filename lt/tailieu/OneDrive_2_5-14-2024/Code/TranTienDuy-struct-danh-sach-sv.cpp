#include<stdio.h>
#include<string.h>
typedef struct {
	char TENSINHVIEN[30];
	int TUOI;
	char QUEQUAN[30];
}SinhVien;
int main(){
	int n=0;
	SinhVien sinhvien[30];
	int i;
	
	printf("\n========Nhap thong tin sinh vien ===============\n");
	
	for(int i=1;i<=30;i++)
	{
		printf("\nNhap ten sinh vien %d : ",i);
		
		gets(sinhvien[i].TENSINHVIEN);
		fflush(stdin);
		
		if( strcmp(sinhvien[i].TENSINHVIEN,"stop")==0){
			break;
		}
		n++;
		do{
			printf("\nNhap tuoi cua sinh vien %d : ",i);
			scanf("%d",&sinhvien[i].TUOI);
			if(sinhvien[i].TUOI <=0){
				printf("\n Tuoi k hop le: NHAP LAI :");
			}
			
		}while(sinhvien[i].TUOI<=0);
		
		fflush(stdin);
		
		printf("\nNhap que quan cua sinh vien %d : ",i);
		gets(sinhvien[i].QUEQUAN);
		
		fflush(stdin);

	}
	
		printf("\n==========THONG TIN SINH VIEN DA NHAP =============\n");
		printf("\n%-3s %-30s %-10s %-20s","STT","Ten sinh vien","Tuoi","Que quan");
		
    	for( int i=1;i<=n;i++){
    		printf("\n%-3d :%-30s %-10d %-20s",i,sinhvien[i].TENSINHVIEN,sinhvien[i].TUOI,sinhvien[i].QUEQUAN);
		}
	return 0;
}
