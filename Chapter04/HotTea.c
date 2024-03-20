// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter04/HotTea.c

#include <stdio.h>
	
// 프로그램 시작 
int main() {
	int hotTea = 0;

	// 사용자가 차를 주문 
	printf( "녹차(1), 레몬차(2), 홍차(3) 중 하나를 숫자로 입력하세요: ");
	scanf( "%d", &hotTea );
	// 빈컵에  
	printf("\n |    |\\");
	printf("\n |    |/");
	printf("\n |____|");
	
	// 주문받은 차의 티백을 넣고  
	switch ( hotTea ) {
		// 1은 녹차 
		case 1:					
			printf("\033[42m");
			break;								
		// 2는 레몬차 
		case 2:					
			printf("\033[43m");
			break;								
		// 나머지는 홍차 
		default:					
			printf("\033[41m");
	}
	
	// 물 붓기 
	printf("\033[3;3f    ");
	printf("\033[4;3f    ");
	printf("\033[5;3f____\033[0m");

	// 프로그램 종료 
	return 0;
}

