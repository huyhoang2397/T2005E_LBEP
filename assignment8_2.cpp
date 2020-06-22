#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,*p;
	do{
		printf("So phan tu cua mang la: "); scanf("%d",&n);
	}while(n<=0);
	p = (int *)malloc(n*sizeof(int));
	printf("Nhap cac phan tu cua mang: \n");
	for(int i=0;i<n;i++){
		printf("ary[%d] = ",i);
		scanf("%d",p+i);
	}
	int sum=0,max=0;
	for(int i=0;i<n;i++){
		if(*(p+i)%2==0) {
		sum+= *(p+i);
		if(sum>max) max = sum;
		}else{
		sum = 0;
		}
	}
	if(max==0) printf("Mang khong co so duong.");
	else printf("Tong cac so duong lien tiep lon nhat trong mang la:  %d ",max);
	free(p);
}

