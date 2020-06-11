#include <stdio.h>

int main(){
	float s1,s2;
	printf("Nhap so tien gui vao ngan hang: ");
	scanf("%f",&s1);
	printf("So tien sau khi rut ra : ");
	scanf("%f",&s2);
	int year=0;
	while(s1<s2){
		s1+=s1*0.08;
		year++;
	}
	printf("So nam gui tien ngan hang la: %d",year);
}

