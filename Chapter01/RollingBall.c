// C 프로그래밍 - https://codereading101.github.io/C/
// 파일명 - https://github.com/CodeReading101/C/blob/main/Chapter01/RollingBall.c

#include <stdio.h> 				
#include <unistd.h>

// 프로그램 시작 
int main() {
	// 1초마다 공 위치를 한 칸씩 이동하여 출력 
	printf("\033[1;1f O" );
	// fflush( stdout );
	// sleep(1);
	printf("\033[1;2f O" );
	// fflush( stdout );
	// sleep(1);
	printf("\033[1;3f O" );
	// fflush( stdout );
	// sleep(1);
	printf("\033[1;4f O" );
	// fflush( stdout );
	// sleep(1);
	printf("\033[1;5f O" );
	// fflush( stdout );
	// 프로그램 종료 
	return 0;
}

