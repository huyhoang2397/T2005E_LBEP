#include <stdio.h>
#include <stdlib.h>

void nhapMang(int ary[],int n){
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&ary[i]);
	}
}

float average(int *ary,int n){
	float tb;
	for(int i=0;i<n;i++){
		tb += ary[i]; 
	}
	return tb/n;
}

int main(){
	int n;
	printf("Mang gom bao nhieu phan tu: ");
	scanf("%d",&n);
	while(n<=0){
		printf("Nhap lai n:");
		scanf("%d",&n);
	}
	int ary[n];
	nhapMang(ary,n);
	printf("\nAverage: %.2f",average(ary,n));
}
