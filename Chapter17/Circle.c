// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter17/Circle.c

#include <stdio.h>
// 매크로 상수 및 매크로 함수 정의
#define PI 3.141592
#define CIRCUMFERENCE( r )  ( 2 * PI * ( r ) )
#define CIRCULARAREA( r ) ( PI * ( r ) * ( r ) )
int main() {
	// 반지름을 입력
	printf( "반지름을 입력하세요: " );
	double radius = 0.0;
	scanf( "%lf", &radius );
	// 먼저 반지름으로 원둘레 및 원면적 계산
	double length = CIRCUMFERENCE( radius );
	double area = CIRCULARAREA( radius );
	printf( "반지름 %.2f인 원둘레는 %.2f이고 원면적은 %.2f입니다.\n", radius, length, area );
	// (반지름+1)으로 원둘레 및 원면적 계산
	length = CIRCUMFERENCE( radius + 1 );
	area = CIRCULARAREA( radius + 1 );
	printf( "반지름 ( %.2f + 1.00 )인 원둘레는 %.2f이고 원면적은 %.2f입니다.", radius, length, area);
	return 0;
}

