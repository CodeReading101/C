// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter01/LittleStar.c

#include <stdio.h> 					
#include <unistd.h>

// 프로그램시작 
int main() {
	// 노란 별 모양을 출력 
	printf("\033[33m" );
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
	printf("반");
	// fflush( stdout );
	// sleep(1);
	printf("짝");
	// fflush( stdout );
	// sleep(1);
	printf(" 반");
	// fflush( stdout );
	// sleep(1);
	printf("짝");
	// fflush( stdout );
	// sleep(1);
	printf(" 작");
	// fflush( stdout );
	// sleep(1);
	printf("은");
	// fflush( stdout );
	// sleep(1);
	printf(" 별");
	// fflush( stdout );
	// sleep(2);
	printf(" 아");
	// fflush( stdout );
	// sleep(1);
	printf("름");
	// fflush( stdout );
	// sleep(1);
	printf("답");
	// fflush( stdout );
	// sleep(1);
	printf("게");
	// fflush( stdout );
	// sleep(1);
	printf(" 비");
	// fflush( stdout );
	// sleep(1);
	printf("치");
	// fflush( stdout );
	// sleep(1);
	printf("네");
	// fflush( stdout );
	
	// 프로그램 종료 
	return 0;
}

