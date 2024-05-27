#include<stdio.h>
#include<math.h>
float Delta(float a, float b, float c)
{
	return b*b-4*a*c;
}
void DeltaP(float a, float b, float c, float *delta)
{
	*delta=b*b-4*a*c;
}
void DeltaR(float a, float b, float c, float &delta)
{
	delta=b*b-4*a*c;
}
int main()
{
	float a,b,c;
    float x1,x2;
    printf("Nhap he so a,b,c cua phuong trinh bac 2 ax^2+bx+c=0 : \n");
	printf("a = ");	scanf("%f",&a);
    printf("b = "); scanf("%f",&b);
    printf("c = "); scanf("%f",&c);
    printf("%f \n ",a);
    printf("%f \n ",b);
    printf("%f \n ",c);
    //Goi Delta
    float result = Delta(a,b,c);
    printf("Goi Delta, Delta = %f\n",result);      
    printf("Goi Delta, Delta = %f\n",Delta(a,b,c));
    
    if(result<0){
        printf("Phuong trinh vo nghiem\n");
    }
    else if(result==0){
    	printf("Phuong trinh co nghiem kep :");
    	x1 = x2 = -b/(2*a);
        printf("x= %.4f",x1);      
    }
    else{
        result = sqrt(result);
        x1 = (-b + result) / (2*a);
        x2 = (-b - result) / (2*a);
        printf("Phuong trinh co 2 nghiem phan biet : ");
        printf("\nx1 = %.3f \nx2 = %.3f",x1,x2);
    }
    //Goi DeltaP
    
    DeltaP( a,  b,  c, &result);
    printf("Goi DeltaP, Delta = %f\n",result);
    float result1=0;
    DeltaR(a,b,c,result1);
    printf("Goi DeltaR, Delta = %f\n",result1);
}
 
