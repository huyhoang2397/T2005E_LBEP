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
	int sum=0,max=0;
	for(int i=0;i<n;i++){
		if(ary[i]%2==0) {
		sum+= ary[i];
		}else{
		if(sum>max) max = sum;
		sum = 0;
		}
	}
	if(max==0) printf("Mang khong co so duong.");
	else printf("Tong cac so duong lien tiep lon nhat trong mang la:  %d ",max);
	
}

