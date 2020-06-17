#include <stdio.h>

int main(){
	int n;
	printf("Nhap so nguyen duong n:");
	scanf("%d",&n);
	int max1=-1,max2=-1;
	while(n>0){
		max2=n%10;
		if(max1<max2) max1=max2;
		n=n/10;
	}
	printf("Chu so lon nhat la %d",max1);
}
