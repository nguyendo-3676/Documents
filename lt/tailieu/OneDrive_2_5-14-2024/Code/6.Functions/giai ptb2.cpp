#include<stdio.h>
#include<math.h>
int giaiPT(float a, float b, float c,float *x1, float *x2){
    float delta = b*b - 4*a*c;
    if(delta<0){
        *x1=*x2=0.0;
        return 0;
    }
    else if(delta==0){
        *x1 = *x2 = -b/(2*a);
        return 1;
    }
    else{
        delta = sqrt(delta);
        *x1 = (-b + delta) / (2*a);
        *x2 = (-b - delta) / (2*a);
        return 2;
    }
}
int main(){
    float a,b,c;
    float x1,x2;
    do{
        printf("Nhap he so a,b,c cua phuong trinh bac 2 ax^2+bx+c=0 : \n");
	printf("a = ");	scanf("%f",&a);
    printf("b = "); scanf("%f",&b);
    printf("c = "); scanf("%f",&c);
    }
    while(!a);
    int th = giaiPT(a,b,c,&x1,&x2);
        if(th == 0) {
        printf("Phuong trinh vo nghiem");
    }
    else if(th == 1){
    	printf("Phuong trinh co nghiem kep :");
        printf("x= %.4f",x1);
    }
    else{
    	printf("Phuong trinh co 2 nghiem phan biet : ");
        printf("\nx1 = %.3f \nx2 = %.3f",x1,x2);
    }
}
