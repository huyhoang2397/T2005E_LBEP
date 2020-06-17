#include <stdio.h>

int main(){
	int n;
	do{
		printf("So phan tu cua mang la: "); scanf("%d",&n);
	}while(n<=0);
	int ary[n];
	printf("Nhap cac phan tu cua mang: \n");
	for(int i=0;i<n;i++){
		printf("ary[%d] = ",i);
		scanf("%d",&ary[i]);
	}
	int sole=0;
	for(int i=0;i<n;i++){
		if(ary[i]%2!=0) sole=ary[i];
	}
	if(sole==0) printf("\nMang khong co so le !!!");
	else printf("So le cuoi cung cua mang la: %d",sole);
}
