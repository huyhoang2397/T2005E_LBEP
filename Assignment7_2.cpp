#include <stdio.h>

int main(){
	int n;
	do{
		printf("So phan tu cua mang la: "); scanf("%d",&n);
	}while(n<=0);
	int ary1[n],ary2[n];
	printf("Nhap cac phan tu cua mang: \n");
	for(int i=0;i<n;i++){
		printf("ary[%d] = ",i);
		scanf("%d",&ary1[i]);
		ary2[i] = ary1[i];
	}
	int a;
	printf("Nhap so buoc nhay: ");
	scanf("%d",&a);
	for(int i = 0;i<n;i++){
		int c = (a+i)%n;
		ary1[c] = ary2[i];
	} 
	printf("In mang:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",ary1[i]);
	}
}
