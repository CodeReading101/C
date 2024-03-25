// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter04/Direction.c

#include <stdio.h> 					

// 프로그램시작 
int main() {
	char move = '\0';
	// 먼저 미로 맵을 출력 
	printf("      / \n");
	printf("  [   옷   ->\n");
	printf("      문 \n\n");

	
	// 이동 방향 입력 받기 
	printf("WASD와 [Enter]를 입력하세요: " );
	scanf("%c",&move);

	// 이동 결과 출력 
	printf("\033[2;6f  ");
	switch( move ) {
		case 'w': case 'W': 
			printf("\033[1;6f 옷/ ");
			break;
		case 'a': case 'A': 
			printf("\033[2;1f 옷] ");
			break;
		case 's': case 'S': 
			printf("\033[1;1f              \n");
			printf("   Success!!   \n");
			printf("              ");
			break;
		case 'd': case 'D': 
			printf("\033[2;10f <-옷 ");
	}

	// 프로그램 종료 
	return 0;
}

