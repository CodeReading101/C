// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter10/Factorial.c

#include <stdio.h>

// 1부터 n까지의 곱을 계산하는 함수
int factorial( int num ) {
	// n이 1 이하이면 !(factorial) 연산 종료
	if ( num <= 1 ) {
		printf ( "%d = ", num );
		return num;
	}
	// n! = n * ( n - 1 )!
	else {
		printf ( "%d * ", num );
		return num = num *
			     factorial( num - 1 );
	}
}

// 프로그램 시작
int main() {
	int result = 0, num = 0;

	// 숫자 n 입력받기
	printf( "숫자를 입력하세요: ");
	scanf( "%d", &num );

	// 1부터 n까지의 곱을 계산하기
	printf( "%d! = ", num );
	result = factorial( num );

	// 결과 출력하기
	printf ( "%d", result );

	//프로그램 종료
	return 0;
}

