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
	int min=1;
	for(int i=0;i<n;i++){
		if(ary[i]%2==0){
			min=ary[i];
			break;
		}
	}
	if(min==1) printf("Mang khong co so chan nao.");
	else {
		for(int i=0;i<n;i++){
		if(min>ary[i]&&ary[i]%2==0) min=ary[i];
		}printf("So duong nho nhat trong mang la: %d",min);
	}
}
