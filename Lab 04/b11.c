#include<stdio.h>
int main(){
	int a,b;
	char c;
	printf("\nNhap so thu nhat: ");
	scanf("%d",&a);
	printf("\nNhap so thu hai: ");
	scanf("%d",&b);
	printf("\nMenu");
	printf("\n+");
	printf("\n-");
	printf("\nx");
	printf("\n:");
	fflush(stdin);
	printf("\nChon: ");
	scanf("%c",&c);
	switch (c){
		case '+':
			printf("\nTong: %d + %d = %d",a,b,a+b);
			break;
		case '-':
			printf("\nHieu: %d - %d = %d",a,b,a-b);
			break;
		case 'x':
			printf("\nTich: %d x %d = %d",a,b,a*b);
			break;
		case ':':
			printf("\nThuong: %d : %d = %f",a,b,(float)a/b);
			break;
	}
	
	return 0;
}
