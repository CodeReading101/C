// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter03/BinaryToDecimal.c

#include <stdio.h>
int main() {
	// 1000부터 1111사이의 2진수를 입력
	printf( "1000부터 1111사이의 2진수를 입력하세요: " );
	int binary = 0;
	scanf( "%d", &binary );
	// 2진수의 각 자리수 추출
	// 2진수 1000 = 2^3 = 8의 자리수
	int binary1000 = binary / 1000;
	// 2진수 100 = 2^2 = 4의 자리수
	int binary100 = ( binary % 1000 ) / 100;
	// 2진수 10 = 2^1 = 2의 자리수
	int binary10 = ( binary % 100 ) / 10;
	// 2진수 1 = 2^0 = 1의 자리수
	int binary1 = ( binary % 10 );
	// 2진수 각 자리수의 값을 바탕으로 2진수를 10진수로 변환
	int decimal = binary1000 * 8 + binary100 * 4 + binary10 * 2 + binary1;
	// 2진수를 10진수로 변환한 결과를 출력
	printf( "2진수 %d은 10진수 %d입니다.\n", binary, decimal );
	return 0;
}

