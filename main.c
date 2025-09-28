#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	unsigned int x;
	int b;
	
	printf("숫자를 입력하세요: ");
	scanf("%ui", &x);

	for (b=0; x!=0; x>>=1){
		if(x&1)
		b++;
	}
	
	printf("결과는 %i\n", b);
	return 0; 
}
