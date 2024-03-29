// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter07/Calendar.c

#include <stdio.h> 

// 프로그램 시작 
int main() {
	// 날짜 및 요일 초기화
	int firstDay = 0;
	int lastDay = 0;
	int day = 0;
	int dayOfWeek = 0;
	int sunday = 0;		
	int saturday = 6;		

	// 시작요일 및 말일 입력 받기 
	printf( "일(0),월(1),화(2),수(3),목(4),금(5),토(6) 중에서 \n이번달 1일은 무슨요일인가요 : " );
	scanf("%d", &firstDay );
	printf( "이번달 말일은 언제인가요 : " );
	scanf("%d", &lastDay );

	// 1일 이전은 공백 출력 
	for( dayOfWeek = sunday; dayOfWeek < firstDay; dayOfWeek++ ) {
		printf( "     " );
	}
	
	// 1일부터 말일까지 출력 
	for ( day = 1; day <= lastDay; day++, dayOfWeek++ ) {
		// 일주일을 한줄에 출력 
		printf( "%5d", day );	
								
		// 즉, 토요일 후 일요일은 새 줄에서 시작 
		if ( dayOfWeek == saturday ) {
			printf( "\n");
			dayOfWeek = sunday - 1;
		}
	}

	// 프로그램 종료 
	return 0;
}

