#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int year;
	
	printf("연도를 입력하세요");
	scanf("%i", &year);

	printf("입력하신 연도 %i가 윤년일까요? 1이면 네, 0이면 아니요 %i\n", year,(year%4 == 0 && year%100 != 0) || (year%400 == 0));
	return 0; 
}
