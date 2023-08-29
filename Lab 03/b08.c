#include<stdio.h>
int main(){
int n,tong = 0,m;
printf("Nhap mot so nguyen duong co 5 chu so: ");  
scanf("%d",&n);  
while(n>0)  
{  
   m=n%10;  
   tong=tong+m;  
   n=n/10;  
}  
printf("\nTong cac chu so = %d",tong);
  return 0;
}
