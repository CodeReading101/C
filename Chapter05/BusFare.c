// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter05/BusFare.c

#include <stdio.h> 
// 프로그램 시작 
int main() {
	// 나이 초기화
	int age = 0;
	// 사용자의 나이를 입력 
	printf( "나이를 입력하세요: " );
	scanf( "%d", &age );
	// 나이에 맞는 버스요금을 출력 
	// 영유아(만5세 이하)는 무료 
	if ( age <= 5 ) {
		printf( "버스요금은 무료입니다." );
	}
	// 초등학생(만6세 - 만12세)은 현금기준 450원 
	else if ( ( 6 <= age ) && ( age <= 12 ) ) {
		printf( "버스요금은 450원입니다." );
	}
	// 청소년(만13세 - 만18세)은 현금기준 1,000원  
	else if ( ( 13 <= age ) && ( age <= 18 ) ) {
		printf( "버스요금은 1,000원입니다." );
	}
	// 성인(만19세 이상)은 현금기준 1,300원 
	else {
		printf( "버스요금은 1,300원입니다." );
	}
	// 프로그램 종료 
	return 0;
}

