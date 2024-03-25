// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter04/ThreeCupGame.c

#include <stdio.h> 			
#include <stdlib.h>				
#include <time.h>				

// 프로그램시작  
int main() {
	int ball=0, cup=0;
	
	// 3개 컵 중에서 하나에 구슬 숨기기 
	srand( time( NULL ) );
	ball = rand() % 3 + 1;		
	printf("  ___    ___    ___  \n");
	printf(" |   |  |   |  |   | \n");
	printf(" | 1 |  | 2 |  | 3 | \n\n\n\n");

	// 사용자에게 구슬을 숨긴 컵 번호 입력 받기  
	printf(" 1, 2, 3 중에서 구슬[O]을 숨긴 컵을 찾으세요 : ");
	scanf( "%d", &cup );
		
	// 구슬 찾기 결과 출력 
	printf("\033[4;%dfO\n\033[5;%df", ball*7-3, cup*7-5 );
	( cup == ball ) ? printf("찾았다!\n") : printf("놓쳤다!\n");

	// 프로그램 종료 
	return 0;
}

