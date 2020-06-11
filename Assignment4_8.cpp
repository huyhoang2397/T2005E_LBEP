#include <stdio.h>

int main(){
	int n,a=1,b=1,c=0;
	printf("Nhap n: "),scanf("%d",&n);
	if(n<=2) c=1;
	for(int i=1;i<n-1;i++){
		c=a+b;
		a=b;
		b=c;
	}
	printf("So thu %d trong day Fibonaci la: %d",n,c);
}

