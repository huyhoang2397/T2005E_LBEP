#include <stdio.h>

int main(){
	float s;
	int year;
	printf("Nhap so tien gui vao ngan hang: ");
	scanf("%f",&s);
	printf("Sau bao nhieu nam thi rut tien ra: ");
	scanf("%d",&year);
	for(int i=0;i<year;i++){
		s+=s*0.08;
	}
	printf("So tien sau khi rut ra : %f",s);
}

