// C 프로그래밍 - https://codereading101.github.io/C/
// 파일명 - https://github.com/CodeReading101/C/blob/main/Chapter02/Sea.c

#include <stdio.h> 								

// 프로그램시작 
#include <stdio.h>
// 프로그램시작 
int main() {
	char next = '\0';

	// 먼저 붉은 태양과 푸른 바다를 출력 
	printf("\033[31m");
	printf("   \\_/  \n" );
	printf("  _/ \\_ \n" );
	printf("   \\_/  \n" );
	printf("   / \\  " );
	printf("\033[0m \n \n\033[44m");
	printf("~~~~~~ ~~~~~ ~~~~~~~~ ~~  ~~~~~~~~~~ \n" );
	printf("~     ~~   ~  ~   ~~~~~~~   ~~~    ~ \n" );
	printf("  ~ ~~~~~~~      ~~          ~    ~~ \n" );
	printf("~  ~       ~ ~   ~    ~~~~~~~    ~ ~ \n" );
	printf("      ~             ~        ~    ~  " );

	// 밤바다로 변경하려면 입력 받기  
	printf("\033[0m \n\033[12;1f밤바다를 보려면 문자를 입력하세요: " );
	next = getchar(); 
	
	// 밤바다를 출력 
	printf("\033[33m\033[1;3f");
	printf("   *    *    .      *   .   *    .  \n" );
	printf("  .    *         .       *.     .   \n" );
	printf("             .    *         *     * \n" );
	printf("    *  .       *    .   . *     *   \n" );
	printf("   .    *        .       .   *    ." );
	printf("\033[0m\033[12;1f \n");
	// 프로그램 종료 
	return 0;
}

