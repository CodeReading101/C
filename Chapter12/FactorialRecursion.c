// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter12/FactorialRecursion.c

#include <stdio.h>
// 1부터 n까지의 곱을 계산
int factorial( int num ) {
	// 1! = 1, 0! = 1
	if ( num <= 1 ) {
		printf ( "1 = " );
		return 1;
	}
	// n! = n * ( n - 1 )!
	else {
		printf ( "%d * ", num );
		return num = num *
		                  factorial( num - 1 );
	}
}
int main() {
	// 숫자 n 입력받기
	printf( "숫자를 입력하세요: " );
	int num = 0;
	scanf( "%d", &num );
	// 1부터 n까지의 곱을 계산하기
	printf( "%d! = ", num );
	int result = factorial( num );
	// 결과 출력하기
	printf ( "%d", result );
	return 0;
}

