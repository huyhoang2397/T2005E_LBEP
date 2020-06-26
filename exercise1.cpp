#include <stdio.h>

int main(){
	int n;
	do{
		printf("Mang co bao nhieu phan tu: ");
		scanf("%d",&n);
	}while(n<=0);
	int ary[n];
	printf("Nhap cac phan tu cua mang: \n");
	for(int i=0;i<n;i++){
		printf("ary[%d] = ",i);
		scanf("%d",&ary[i]);
	}
	int tmp=1;
	for(int i=0;i<n;i++){
		if(ary[i]%2==0&&ary[i]!=0) tmp= ary[i];
	}
	if(tmp == 1) printf("\nNo EVEN number");
	else printf("\nLast Even: %d",tmp);
	return 0;	
}
