#include <stdio.h>

int main () {
	int a,b,c;
	printf("\nNhap 3 so: ");
	scanf("%d	%d	%d",&a,&b,&c);
	if(a>b) if(a>c) 
			{ printf("\n%d la so lon nhat",a);
			}
		else 
			{printf("\n%d la so lon nhat",c);
			}
	else if(b>c)
			{printf("\n%d la so lon nhat",b);
			}
		else{printf("\n%d la so lon nhat",c);
			}
}
