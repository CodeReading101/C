// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter07/UpAndDown.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	// 임의의 수 숨기기
	srand( time( NULL ) );
	int number = rand() % 100 + 1;
	// 5번의 기회 내에서 임의의 수 맞추기
	int chance = 5;
	while( --chance >= 0 ) {
		// 숫자 입력 받기
		printf( "1~100사이의 숫자를 입력하세요: " );
		int user = 0;
		scanf( "%d", &user );
		// 입력값이 제한범위 벗어나면 다시 입력
		if ( ( user < 1 ) || ( 100 < user ) ) {
			printf( "제한범위를 벗어났습니다\n" );
			chance++;
			continue;
		}
		// 비교 결과 출력
		// 첫째 임의의 수를 맞추면 Success!! 출력 후 종료
		else if ( number == user ) {
			printf( "Success!!\n" );
			break;
		}
		// 둘째 임의의 수가 입력값보다 크면 Up! 출력
		else if ( number > user ) {
			printf( "Up!\n" );
		}
		// 셋째 임의의 수가 입력값보다 작으면 Down! 출력
		else if ( number < user ) {
			printf( "Down!\n" );
		}
		printf( "기회는 %d번 남았습니다\n", chance );
	}
	return 0;
}

