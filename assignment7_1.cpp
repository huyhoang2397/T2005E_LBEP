#include <stdio.h>

int main(){
	int n;
	do{
		printf("So phan tu cua mang la: "); scanf("%d",&n);
	}while(n<=0);
	printf("Nhap cac phan tu cua mang:\n");
	int ary[n];
	for(int i =0;i<n;i++){
		printf("ary[i] = ");
		scanf("%d",&ary[i]);
//		if(i>0){
//			int j = i-1;
//			int temp = ary[i];
//			while(j>=0&&ary[j]>temp){
//				ary[j+1]=ary[j];
//				j--;
//			}
//		}
		int j = i-1; 
		int temp = ary[i];
		while(j>=0 && temp < ary[j]){
			ary[j+1] = ary [j];
			j--;
		}
		ary[j+1] = temp;
	}
	printf("In mang:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",ary[i]);
	}
}
