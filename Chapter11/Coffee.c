// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter11/Coffee.c

#include <stdio.h>
// 커피 주문내역 출력하는 함수
void confirmOrder( int order ) {
	static int coffee[3] = { 0, 0, 0 };
	// 주문내역 업데이트 후 출력
	coffee[ order-1 ]++;
	printf( "[주문내역] 아메리카노 %d개, 에스프레소 %d개, 카페라떼 %d개\n\n", coffee[0], coffee[1], coffee[2]  );
}
int main() {
	int order = 0;
	do {
		// 먼저, 커피 주문내역 확인
		if ( order != 0 )
			confirmOrder( order );
		// 손님이 커피 중 하나를 숫자로 선택
		printf( "아메리카노(1), 에스프레소(2), 카페라떼(3), 종료(0) 중 하나를 숫자로 입력하세요: " );
		scanf( "%d", &order );
	} while( ( order == 1 ) || ( order == 2 ) || ( order == 3 ) );
	return 0;
}

