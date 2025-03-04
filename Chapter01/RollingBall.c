// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter01/RollingBall.c

#include <stdio.h>
#include <unistd.h>
int main() {
	// 첫번째 공 출력
	printf( "\033[1;1f O" );
	fflush( stdout );
	// 1초 후 첫번째 공은 빈칸으로 덮어쓰고 옆 칸에 두번째 공 출력
	sleep(1);
	printf( "\033[1;2f O" );
	fflush( stdout );
	// 1초 후 두번째 공은 빈칸으로 덮어쓰고 옆 칸에 세번째 공 출력
	sleep(1);
	printf( "\033[1;3f O" );
	fflush( stdout );
	// 1초 후 세번째 공은 빈칸으로 덮어쓰고 옆 칸에 네번째 공 출력
	sleep(1);
	printf( "\033[1;4f O" );
	fflush( stdout );
	// 1초 후 네번째 공은 빈칸으로 덮어쓰고 옆 칸에 다섯번째 공 출력
	sleep(1);
	printf( "\033[1;5f O" );
	fflush( stdout );
	return 0;
}

