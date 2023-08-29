#include<stdio.h>
int main(){
    int a,b,c;
    printf("\nNhap vao gia tri cua a,b:\n");
    scanf("%d\n%d",&a,&b);
    c = a;
    a = b;
    b = c;
    printf("\na = %d",a+1);
    printf("\nb = %d",b+1);
    return 0;
}
