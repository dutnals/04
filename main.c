#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int year;
	
	printf("������ �Է��ϼ���");
	scanf("%i", &year);

	printf("�Է��Ͻ� ���� %i�� �����ϱ��? 1�̸� ��, 0�̸� �ƴϿ� %i\n", year,(year%4 == 0 && year%100 != 0) || (year%400 == 0));
	return 0; 
}
