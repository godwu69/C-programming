#include<stdio.h>
int main(){
    int A,B,C;
    printf("\nNhap gia tri cho A,B,C:\n");
    scanf("\n%d\n%d\n%d",&A,&B,&C);
    if(A > B && A > C)
    {
        printf("\nMax = A");
    }else if(B > A && B > C)
    {
        printf("\nMax = B");
    }else{
        printf("\nMax = C");
    }
    return 0;
}
