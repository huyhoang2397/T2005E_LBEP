#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,p,s;
	printf("\nNhap do dai ba canh tam giac: ");
	printf("\na = ");scanf("%f",&a);
	printf("b = ");scanf("%f",&b);
	printf("c = ");scanf("%f",&c);
	if(a>0&&b>0&&c>0){
		if((a+b)>c&&(a+c)>b&&(b+c)>a){
			printf("%.2f\t %.2f\t %.2f\t la do dai ba canh cua tam giac.",a,b,c);
			p = (a+b+c)/2;
			s=sqrt(p*(p-a)*(p-b)*(p-c));
			printf("\nChu vi cua tam giac la: %.3f",2*p);
			printf("\nDien tich cua tam giac la: %.3f",s);
		}else printf("\nKhong phai la do dai 3 canh tam giac");
	}else printf("\nKhong phai la do dai 3 canh cua tam giac");
}
