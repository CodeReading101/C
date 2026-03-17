// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter03/OverflowUnderflow.c

#include <stdio.h>
int main() {
	// int의 최대값과 최소값으로 변수 초기화
	const int max = +2147483647;
	const int min = -2147483648;
	// int의 최대값에 1을 더하거나 최소값에서 1을 빼면 오류 발생
	int overflow = max + 1;
	int underflow = min - 1;
	// overflow 및 underflow 결과 출력
	printf( "max     = %d\n", max );
	printf( "max + 1 = %d ( 오류 발생 )\n", overflow );
	printf( "min     = %d\n", min );
	printf( "min - 1 = %d ( 오류 발생 )\n", underflow );
	return 0;
}

