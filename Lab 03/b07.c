#include<stdio.h>
#include<math.h>
int main(){
  int height,radius;
  float area,volume;
  float f = M_PI;
  printf("\nNhap chieu cao: ");
    scanf("%d",&height);
  printf("\nNhap ban kinh day: ");
    scanf("%d",&radius);
  area = f*radius*radius;
  printf("\nDien tich day = %.3f",area);
  volume = area*height;
  printf("\nThe tich hinh tru = %.3f",volume);
  return 0;
}
