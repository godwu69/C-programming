#include<stdio.h>
int main(){
    int num1,num2;
    printf("\nNhap num1: ");
    scanf("%d",&num1);
    printf("\nNhap num2: ");
    scanf("%d",&num2);
    if(num1 % num2 == 0)
    {
        printf("\nnum2 la uoc cua num1");
    }else if(num2 % num1 == 0)
    {
        printf("\nnum1 la uoc cua num2");
    }else{
        printf("\nnum1 va num2 khong phai uoc cua nhau");
    }
    return 0;
}
