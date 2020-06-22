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
	int count1=0,count2=0;
	for(int i=0;i<n;i++){
		if(*(p+i)%2==0){
			 count2++;
			 if(count2>count1) count1 = count2;
		}
		else{	
			count2=0;
		} 
	}
	if(count1==0) printf("Mang khong co so duong nao.");
	else printf("So luong so duong lien tiep dai nhat trong mang la:  %d ",count1);
	free(p);
}
