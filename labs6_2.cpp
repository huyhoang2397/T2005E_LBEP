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
	int count=0,s=0;
	for(int i=0;i<n;i++){
		if(ary[i]%2!=0&&i%2==0){
			s+=ary[i];
			count++;
		}
	}
	if(count==0) printf("\nMang khong co so le o vi tri chan!!!");
	else printf("Trung binh cong cac so le o vi tri chan la: %.2f",s*1.0/count);
}
