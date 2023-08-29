#include<stdio.h>
int main(){
	int n,p;
	float r;
	printf("\nNhap tien von: ");
	 scanf("%d",&p);
	printf("\nNhap so nam: ");
	 scanf("%d",&n);
	printf("\nNhap ti le lai suat: ");
	 scanf("%f",&r);
	float laisuat = p*n*r/100;
	printf("\nlai suat la: %f",laisuat);
	
	return 0;
}
