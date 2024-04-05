// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter08/LittleStar.c

#include <stdio.h>
#include <unistd.h>

// 프로그램시작
int main() {
	char lyrics[16][6] = { "반", "짝 ", "반", "짝 ", "작", "은 ", "별", " ", "아", "름", "답", "게 ", "비", "치", "네", "\0" };
	int index = 0;

	// 먼저 노란 별 모양을 출력
	printf("\033[33m \n" );
	printf("              &@ \n");
	printf("             (@@@. \n");
	printf("            #@@@@@ \n");
	printf("           /@@@@@@@ \n");
	printf("  @@@@@@@@@@@@@@@@@@@@@@@@@@@ \n");
	printf("    /@@@@@@@@@@@@@@@@@@@@@. \n");
	printf("       @@@@@@@@@@@@@@@@ \n");
	printf("        #@@@@@@@@@@@@@ \n");
	printf("        @@@@@@@@@@@@@@@ \n");
	printf("       @@@@@@@   @@@@@@ \n");
	printf("       @@@           @@@ \n");
	printf("       @               @\033[0m \n");

	// 작은별 노래를 박자에 맞춰 출력
	for ( index = 0; lyrics[index][0] != '\0'; index++ )
	{
		printf( "%s", lyrics[index] );
		// fflush( stdout );
		// sleep(1);
	}

	// 프로그램 종료
	return 0;
}

