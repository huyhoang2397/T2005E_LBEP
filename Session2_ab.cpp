#include <stdio.h>

int main(){
	int a,b;
	printf("Nhap hai so nguyen a va b:");
	printf("\na = "),scanf("%d",&a);
	printf("b = "),scanf("%d",&b);
	if(a>=b)printf("\nKet qua %d/%d = %.3f",a,b,(float)a/b);
	else printf("Ket qua %d*%d = %d",a,b,a*b);
}
