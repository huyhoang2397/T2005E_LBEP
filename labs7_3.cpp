#include <stdio.h>
#include <math.h>

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
	printf("Cac so nguyen to trong mang d la: \n");
	for(int i=0;i<n;i++){
		if(ary[i]<2) continue;
		else if(ary[i]<4) printf("%d \t",ary[i]);
		else{
		int count=0;
		for(int j=2;j<=sqrt(ary[i]);j++){
			if(ary[i]%j==0){
				count++;
				break;
			}
		}if(count==0) printf("%d \t",ary[i]);
		}
	}
}
