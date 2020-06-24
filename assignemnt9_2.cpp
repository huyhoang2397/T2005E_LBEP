#include<stdio.h>
#include<stdlib.h>
#include<string.h>

bool ktNguyenam(char a){
	if(a=='a'||a=='e'||a=='o'||a=='i'||a=='u') return true;
	return false;
}

void ktChuoi(char *s){
	int count1=0,count2=0;
	for(int i=0;i<strlen(s);i++){
		if(ktNguyenam(*(s+i))) count1 ++;
		else count2++;
	}
	printf("\nChuoi co %d nguyen am va %d am phu",count1,count2);
}

int main(){
	char s[30];
	printf("Nhap chuoi: ");
	scanf("%s",s);
	printf("In chuoi: %s",s);
	ktChuoi(s);
	return 0;
}
