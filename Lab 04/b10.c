#include<stdio.h>
int main(){
    float a,mm,cm,dm,km;
    int n;
    printf("\nNhap do dai(m): ");
    scanf("%f",&a);
    printf("\nMenu");
    printf("\n1. mm");
    printf("\n2. cm");
    printf("\n3. dm");
    printf("\n4. km");
    printf("\nChon don vi muon doi: "); 
    scanf("%d",&n);
    switch (n) {
    case 1:
        mm = a*1000;
        printf("\n%fm = %fmm",a,mm);
        break;
    case 2:
        cm = a*100;
        printf("\n%fm = %fcm",a,cm);
        break;
    case 3:
        dm = a*10;
        printf("\n%fm = %fdm",a,dm);
        break;
    case 4:
        km = a/1000;
        printf("\n%fm = %fkm",a,km);
        break;
    }
    return 0;
}
