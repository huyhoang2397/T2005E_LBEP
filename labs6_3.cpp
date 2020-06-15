#include <stdio.h>

int main(){
	int n,x;
	printf("So phan tu cua mang la: "); scanf("%d",&n);
	printf("Nhap vao so x can tim: "); scanf("%d",&x);
	int ary[n];
	printf("Nhap cac phan tu cua mang: \n");
	for(int i=0;i<n;i++){
		printf("ary[%d] = ",i);
		scanf("%d",&ary[i]);
	}
	int count =0;
	for(int i=0;i<n;i++){
		if(ary[i]==3) count ++;
	}
	if(count==0) printf("Khong co %d trong mang tren!!!",x);
	else printf("Co %d so %d trong mang tren.",count,x);
}
