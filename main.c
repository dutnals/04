#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int time;
	
	printf("�ʸ� �Է��ϼ���");
	scanf("%i", &time);

	printf("�Է��Ͻ� �ʴ� %i�� %i���Դϴ�.", time/60, time%60);
	return 0;
}
