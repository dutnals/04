#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int time;
	
	printf("초를 입력하세요");
	scanf("%i", &time);

	printf("입력하신 초는 %i분 %i초입니다.", time/60, time%60);
	return 0;
}
