#include <stdio.h>
#include <string.h>

void nhapMangChuoi(char s[][30],int n){
	for(int i=0;i<n;i++){
		printf("Chuoi thu %d: ",i);
		scanf("%s",s[i]);
		getchar();
	}
}

void sapxep(char s[][30],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(s[j],s[j+1])>0){
				char tmp[30];
				strcpy(tmp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],tmp);
			}
		}
	}
}

void inMangChuoi(char s[][30],int n){
	for(int i=0;i<n;i++){
		printf("\n%s",s[i]);
	}
}

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	char s[n][30];
	nhapMangChuoi(s,n);
	sapxep(s,n);
	inMangChuoi(s,n);
	return 0;
}
