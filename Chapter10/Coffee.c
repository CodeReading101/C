// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter10/Coffee.c

#include <stdio.h>

// 커피를 주문받는 함수
void orderCoffee( int customer ) {
	static int cafeCount[4] = { 0 };
	int customerCount[4] = { 0 };
	int order = 0;

	printf( "%d번 손님~ 주문하시겠습니까? \n", customer );
	do {
		// 손님이 커피 중 하나를 숫자로 선택
		printf( "아메리카노(1), 에스프레소(2), 카페라떼(3), 종료(0) 중 하나를 숫자로 입력하세요: " );
		scanf( "%d", &order );
		customerCount[order]++;
		cafeCount[order]++;
	} while( ( order == 1 ) || ( order == 2 ) || ( order == 3 ) );
	printf( "준비하겠습니다. 잠시만 기다려 주십시오.\n" );

	// 손님 및 가게의 총 주문내역을 출력
	printf( "=========== 총 주문내역 ===========\n" );
	printf( "     아메리카노 에스프레소 카페라떼\n" );
	printf( "손님 %5d %10d %10d\n", customerCount[1], customerCount[2], customerCount[3] );
	printf( "가계 %5d %10d %10d\n", cafeCount[1], cafeCount[2], cafeCount[3] );
	printf( "===================================\n\n" );
}

// 프로그램 시작
int main() {
	// 3명의 손님에게 커피 주문 받기
	for( int customer = 101; customer < 104; customer++ ) {
		orderCoffee( customer );
	}
	// 프로그램 종료
	return 0;
}

