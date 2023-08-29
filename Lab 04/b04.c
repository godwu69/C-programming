#include <stdio.h>
int main(){
    char c;
    printf("Nhap vao mot chu trong bang Alphabet(A-Z, a-z): ");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z') 
	{
       printf("Ky tu '%c' la chu hoa\n",c);
    }else if(c >= 'a' && c <= 'z'){
       printf("Ky tu %c la chu thuong\n",c);
    }else if(c >= '0' && c <= '9'){
       printf("Ky tu '%c' la chu so\n",c);
    }else{
       printf("Ky tu khong nam trong bang Alphabet va khong phai chu so (0-9)");
	}
    return 0;
}
