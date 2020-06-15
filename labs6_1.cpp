#include <stdio.h>

int main(){
	int n;
	printf("So phan tu cua mang la: "); scanf("%d",&n);
	printf("Nhap cac phan tu cua mang: \n");
	int ary[n];
	for(int i=0;i<n;i++){
		printf("ary[%d] = ",i);
		scanf("%d",&ary[i]);
	}
	int count=0,s=0;
	for(int i=0;i<n;i++){
		if(ary[i]%2!=0){
			s+=ary[i];
			count++;
		}
	}
	if(count==0) printf("\nMang khong co so le!!!");
	else printf("Trung binh cong cac so le trong mang n so bang: %.2f",s*1.0/count);
}
