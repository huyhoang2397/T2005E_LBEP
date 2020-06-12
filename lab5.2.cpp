#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
	}while(n<2);
	int a=1,b=1,c=1;
	for(int i=0;c<n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	printf("So thuoc day Fibonaci nho hon va gan %d nhat la: %d",n,a);
}

