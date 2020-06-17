#include <stdio.h>

int main(){
	int n,x;
	do{
		printf("So phan tu cua mang la: "); scanf("%d",&n);
	}while(n<=0);
	int ary[n];
	printf("Nhap cac phan tu cua mang: \n");
	for(int i=0;i<n;i++){
		printf("ary[%d] = ",i);
		scanf("%d",&ary[i]);
	}	
	printf("Nhap x:");
	scanf("%d",&x);
	int max;
	int count=0;
	for(int i=0;i<n;i++)
		if(ary[i]<x){
			max=ary[i];
			count++;
			break;
		} 
	if(count==0) printf("Khong co so thoa man");
	else{
		for(int i=0;i<n;i++)
			if(ary[i]>=max && ary[i]<x){
				max=ary[i];
				count++;
			} 
		if(count==1) printf("Khong co so thoa man.");	
		else printf("So can tim la: %d",max);
	}
	
}
