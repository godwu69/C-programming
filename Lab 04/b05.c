#include<stdio.h>
int main(){
	int a;
	printf("        MENU\n");
	printf("1. CF\n");
	printf("2. C\n");
	printf("3. HDJ\n");
	printf("4. DreamWeaver\n");
	printf("5. RDBMS\n");
	printf("6. Learn Java By Example\n");
	printf("\nChon: ");
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("\nBan chon CF");
			break;
		case 2:
			printf("\nBan chon C");
	        break;
		case 3:
		    printf("\nBan chon HDJ");
		    break;
		case 4:
		    printf("\nBan chon DreamWeaver");
		    break;
		case 5:
		    printf("\nBan chon RDBMS");
			break;
		case 6:
			printf("\nBan chon Learn Java By Example");
			break;
		default:
		    printf("\nBan da chon sai");
}
	return 0;
}
