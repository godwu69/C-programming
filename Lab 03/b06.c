#include<stdio.h>
int main(){
	int i;
	printf("1 meter = 0.000621371192 mile");
	printf("\nMoi ban nhap so km: ");
	scanf("%d",&i);
	double a;
	double j = 0.000612371192;
	a = i*j*1000;
	printf("\n%d km = %lf mile",i,a);
	return 0;
}
