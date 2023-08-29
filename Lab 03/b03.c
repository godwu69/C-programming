#include<stdio.h>
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	int bieuthuc = x * x * x + 3 * x * x * y + 3 * x * y * y + x * x * x;
	printf("%d",bieuthuc);
	return 0;
}   

