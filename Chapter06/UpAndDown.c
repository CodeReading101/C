// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter06/UpAndDown.c

#include <stdio.h> 					
#include <stdlib.h> 					
#include <time.h> 					

// 프로그램시작 
int main() {
	int number = 0, user = 0, chance = 5;

	// 먼저 임의의 수 숨기기 
	srand( time( NULL ) );						
	number = rand() % 100 + 1;

	// 5번의 기회 내에서 임의의 수 맞추기 
	printf( "OOOOO" );
	while( chance > 0 ) {
		// 숫자 입력 받기 
		printf( "\033[2;1f1~100사이의 숫자를 입력하세요:      \033[2;32f" );
		scanf( "%d", &user );

		// 입력값이 제한범위 벗어나면 다시 입력받기 
		if ( ( user < 1 ) || ( 100 < user ) ) {
			printf( "제한범위를 벗어났습니다" );
			continue;
		}
		// 비교 결과 출력 
		// 임의의 수를 맞추면 Sucess!! 출력 후 종료 
		else if ( number == user ) {
			printf( "      Sucess!!             " );
			break;
		}
		// 임의의 수가 입력값보다 크면 Up! 출력 
		else if ( number > user ) {
			printf( "Up!                        " );
		}
		// 임의의 수가 입력값보다 작으면 Down! 출력 
		else if ( number < user ) {
			printf( "Down!                      " );
		}
		// 마지막으로 남은 기회 출력 
		printf( "\033[1;%dfX", 6 - (chance--) );
	}
	
	printf( "\033[2;1f                                 \n      " );

	// 프로그램 종료 
	return 0;
}

