// C 프로그래밍 - https://codereading101.github.io/C/
// 파일명 - https://github.com/CodeReading101/C/blob/main/Chapter01/MazeMap.c

#include <stdio.h> 					

// 프로그램시작 
int main() {

	// 먼저 미로 맵을 출력 
	printf(" \033[44m                  \033[0m \n" );
	printf(" \033[44m  \033[0m      \033[44m  \033[0m \n" );
	printf(" \033[44m      \033[0m  \033[44m  \033[0m  \033[44m      \033[0m \n" );
	printf(" \033[44m  \033[0m      \033[44m  \033[0m      \033[44m  \033[0m \n" );
	printf(" \033[44m  \033[0m  \033[44m          \033[0m  \033[44m  \033[0m \n" );
	printf(" \033[44m  \033[0m              \033[44m  \033[0m \n" );
	printf(" \033[44m                  \033[0m \n" );

	// 캐릭터 및 출구를 출력 
	printf("\033[31m\033[2;4f옷\033[34m\033[2;18f문\033[9;1f " );
	
	// 프로그램 종료 
	return 0;
}

