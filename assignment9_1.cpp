#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool timKytu(char *s,char a){
	for(int i=0;i<strlen(s);i++){
		if(*(s+i)== a){
			return true ;
		}
	}
	return false;
}

int main(){
	char s[30];
	printf("Nhap chuoi: ");
	scanf("%s",&s);
	getchar();
	printf("\nIn chuoi: %s",s);
	char a;
	printf("\nNhap ki tu: ");
	scanf("%c",&a);
	if(timKytu(s,a)) printf("\nCo");
	else printf("Khong co.");
	return 0;
}
