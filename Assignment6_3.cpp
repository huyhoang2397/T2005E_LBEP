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
	int count1=0,count2=0;
	for(int i=0;i<n;i++){
		if(ary[i]%2==0) count2++;
		else{
			if(count2>count1) count1= count2;
			count2=0;
		} 
	}
	if(count1==0) printf("Mang khong co so duong nao.");
	else printf("So luong so duong lien tiep dai nhat trong mang la:  %d ",count1);
}
