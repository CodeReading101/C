// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter01/MazeMap.c

#include <stdio.h>
int main() {
	// 먼저 미로 맵을 출력
	printf( "\033[44m                  \033[0m \n" );
	printf( "\033[44m  \033[0m      \033[44m  \033[0m \n" );
	printf( "\033[44m      \033[0m  \033[44m  \033[0m  \033[44m      \033[0m \n" );
	printf( "\033[44m  \033[0m      \033[44m  \033[0m      \033[44m  \033[0m \n" );
	printf( "\033[44m  \033[0m  \033[44m          \033[0m  \033[44m  \033[0m \n" );
	printf( "\033[44m  \033[0m              \033[44m  \033[0m \n" );
	printf( "\033[44m                  \033[0m \n" );
	// 캐릭터 및 출구를 출력
	printf( "\033[31m\033[2;3f옷\033[34m\033[2;17f문\033[9;1f " );
	return 0;
}

