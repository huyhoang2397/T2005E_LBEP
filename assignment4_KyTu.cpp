#include <stdio.h>

int main(){
	char ch;
	printf("Nhap ky tu: \n");
	scanf("%c",&ch);
	while(!(ch=='y'||ch=='Y'||ch=='n'||ch=='N')){
		printf("Nhap lai 1 trong 4 ky tu 'n' 'N' 'y' 'Y': ");
		scanf("%c",&ch);
	}
}
