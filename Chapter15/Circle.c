// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter15/Circle.c

#include <stdio.h>
// 매크로 상수 및 매크로 함수 정의
#define PI 3.141592
#define CIRCUMFERENCE( r )  ( 2 * PI * ( r ) )
#define CIRCULARAREA( r ) ( PI * ( r ) * ( r ) )

// 프로그램시작
int main() {
	double radius = 0.0;
	double circumference = 0.0;
	double circularArea = 0.0;
	// 반지름을 입력
	printf("반지름을 입력하세요 : ");
	scanf("%lf", &radius );
	// 주어진 반지름으로 원둘레 및 원면적 계산
	circumference = CIRCUMFERENCE( radius );
	circularArea = CIRCULARAREA( radius );
	// 원둘레 및 원면적 출력
	printf("반지름 %.2f인 원둘레는 %.2f이고 원면적은 %.2f입니다.\n",
					radius, circumference, circularArea );
	// (반지름+1)으로 원둘레 및 원면적 계산
	circumference = CIRCUMFERENCE( radius + 1 );
	circularArea = CIRCULARAREA( radius + 1 );
	// 원둘레 및 원면적 출력
	printf("반지름 ( %.2f + 1.00 )인 원둘레는 %.2f이고 원면적은 %.2f입니다.",
					radius, circumference, circularArea);

	// 프로그램 종료
	return 0;
}

