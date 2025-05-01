// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter12/RecursiveDecimalToBinary.c

#include <stdio.h>
// 십진수를 이진수로 변환
void decimal2binary( int num ) {
	// 십의 자리(2^1) 이상일 때는 먼저 십진수를 이진수로 변환
	if ( num >= 2 )
		decimal2binary( num / 2 );
	// 앞자리부터 순서대로 0 또는 1 출력
	printf( "%d", num % 2 );
}

int main() {
	// 십진수를 입력받기
	printf( "십진수를 입력하세요: " );
	int num = 0;
	scanf( "%d", &num );
	// 십진수를 이진수로 변환
	printf( "(십진수)%d = (이진수)", num );
	decimal2binary( num );
	return 0;
}

