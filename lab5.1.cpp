#include <stdio.h>

int main(){
	int a,b;
	printf("Nhap 2 so: \n");
	printf("a = "); scanf("%d",&a);
	printf("b = "); scanf("%d",&b);
	if(a*b==0) a+=b;
	else while(a!=b){
		if(a>b) a-=b;
		else b-=a;
	}
	printf("Uoc chung lon nhat cua hai so tren la: %d",a);
}

