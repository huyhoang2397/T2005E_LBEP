#include <stdio.h>

int main(){
	int a;
	printf("Nhap mot so la thu trong tuan: ");
	scanf("%d",&a);
	while(a!=2&&a!=3&&a!=4&&a!=5&&a!=6&&a!=7){
		printf("Nhap lai mot so la thu trong tuan:  ");
		scanf("%d",&a);
	}
}
