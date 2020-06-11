#include <stdio.h>

int main(){
	int count=0,s=0;
	for(int n;n<=1000;count++){
		printf("Nhap n: ");scanf("%d",&n);
		s+=n;
	}
	printf("So lan nhap lai la: %d",count);
	printf("\nGia tri trung binh cac lan nhap la: %d",s/count);
}
