#include <stdio.h>

int main(){
	int n,s=0;
	do{
		printf("Nhap mot so nguyen lon hon 0: ");
		scanf("%d",&n);
	}while(n<1);
	for(int i=1;i<=n;i++){
		if(n%i==0) s+=i;
	}
	printf("Tong cac uoc cua %d bang: %d ",n,s);
}
