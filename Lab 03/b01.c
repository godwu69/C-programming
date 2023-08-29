#include<stdio.h> 
int main(){
	int a = 4, b = 8, c = 3;
	if(a>b)
	  printf("\na > b\n");
	if(b<c)
	  printf("\nb < c\n");
	if(a+b>=c)
	  printf("\na + b >= c\n");
	if(a-b<=b-c)
	  printf("\na - b >= b - c\n");
	if(b-a==b-c)
	  printf("\nb - a = b - c\n");
	if(a*b!=c*c)
	  printf("\na * b != c * c\n");
	if(a>10&&b<5)
	  printf("\na > 10 & b < 5\n");
	if(a*b>25)
	  printf("\na * b > 25\n"); 
	if(a*c>10)
	  printf("\na * c > 10");
	return 0;
}
