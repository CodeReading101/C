// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter06/CharacterMovement.c

#include <stdio.h> 					

// 프로그램시작 
int main() {
	int row = 5, column = 9;
	char direction='\0';

	// 맵 출력 
	printf("\033[44m                 \033[0m \n" );
	printf("\033[44m \033[0m               \033[44m \033[0m \n" );
	printf("\033[44m \033[0m               \033[44m \033[0m \n" );
	printf("\033[44m \033[0m               \033[44m \033[0m \n" );
	printf("\033[44m \033[0m               \033[44m \033[0m \n" );
	printf("\033[44m \033[0m               \033[44m \033[0m \n" );
	printf("\033[44m \033[0m               \033[44m \033[0m \n" );
	printf("\033[44m \033[0m               \033[44m \033[0m \n" );
	printf("\033[44m                 \033[0m \n" );
	
	// 입력 방향에 따라 계속 캐릭터 이동시키기 
	while ( ( direction != 'q' ) && ( direction != 'Q' ) ) {
		// 먼저 캐릭터의 기존 위치 지우고 새 위치로 업데이트 
		printf("\033[%d;%df  ",row,column);
		switch( direction ) {
			// W는 위로 이동 
			case 'w': case 'W': 
				row = ( row <= 2 ) ? 2 : row-1;
				break;
			// A는 왼쪽으로 이동 
			case 'a': case 'A': 
				column = ( column <= 2 ) ? 2 : column-1;
				break;
			// S는 아래로 이동 
			case 's': case 'S': 
				row = ( row >= 8 ) ? 8 : row+1;
				break;
			// D는 오른쪽으로 이동 
			case 'd': case 'D': 
				column = ( column >= 15 ) ? 15 : column+1;
				break;
		}
		printf("\033[%d;%df옷",row,column);

		// 캐릭터의 새 이동 방향 입력 받기 
		printf("\033[10;1fWASD 또는 Q와[Enter]를 입력하세요:         \033[10;38f" );
		scanf("\n%c",&direction);
	} 

	// 프로그램 종료 
	return 0;
}

