#include <stdio.h>

int main(){
	int n;
	printf("Nhap so nguyen duong n:");
	scanf("%d",&n);
	int min1=10,min2=10;
	while(n>0){
		min2=n%10;
		if(min1>min2) min1=min2;
		n=n/10;
	}
	printf("Chu so nho nhat la %d",min1);
}
