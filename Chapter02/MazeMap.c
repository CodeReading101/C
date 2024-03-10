// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter02/MazeMap.c

#include <stdio.h> 					

// 프로그램시작 
int main() {
	// 변수 선언 및 초기화
	char move = '\0';

	// 초기 미로 상태를 출력 
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
	
	// 캐릭터를 이동 
	// 캐릭터의 이동 방향을 입력 받기 
	printf("WASD와 [Enter]를 입력하세요: " );
	move = getchar();
	
	// 캐릭터를 오른쪽으로 한 칸 이동 
	printf("\033[31m\033[2;5f옷\033[9;1f" );
	
	// 프로그램 종료 
	return 0;
}

