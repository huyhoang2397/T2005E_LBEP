#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,d,x1,x2;
	printf("\nNhap phuong trinh bac 2: ");
	printf("\n a = "); scanf("%f",&a);
	printf("\n b = "); scanf("%f",&b);
	printf("\n c = "); scanf("%f",&c);
	if(a==0){
		if(b==0){
			if(c==0)printf("\nPhuong trinh co vo so nghiem.");
			else printf("\nPhuong trinh vo nghiem.");
		}else{	
		x1=-c/b;	
		printf("\nPhuong trinh co nghiem la x = %.3f",x1);
		}
	}else{
		d = (b * b ) - (4.0 * a * c);

		if(d<0)printf("\nPhuong trinh vo nghiem.");
		if(d==0){
			x1= -b/(2*a);
			printf("\nPhuong trinh co nghiem kep x1 = x2 = %.3f",x1);
		}
		if(d>0){
			printf("\nPhuong trinh co 2 nghiem la: ");
			x1= (-b+sqrt(d))/(2*a);
			x2= (-b-sqrt(d))/(2*a);
			printf("\nx1 = %.3f	\t x2 = %.3f",x1,x2);
		}
	}
}
