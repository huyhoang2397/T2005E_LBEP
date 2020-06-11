#include <stdio.h>

int main(){
	int n;
	do{
		printf("Nhap n: ");scanf("%d",&n);
	}while(n<=2);
	printf("Day so chan nho hon %d la:\n",n);
	for(int i=2;i<n;i++){
		if(i%2==0) printf("%d\t",i);
	}
}
