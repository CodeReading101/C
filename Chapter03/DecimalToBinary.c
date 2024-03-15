// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter03/DecimalToBinary.c

#include <stdio.h>

// 프로그램 시작 
int main() {
	// 변수 선언 및 초기화
	int binary = 0, binary1000 = 0, binary100 = 0, binary10 = 0, binary1 = 0;
	int decimal = 0, temp = 0;

	// 8부터 15사이의 10진수를 입력 
	printf( "8부터 15사이의 10진수를 입력하세요 : " );
	scanf( "%d", &decimal );
	temp = decimal; 

	// 10진수에서 2진수의 각 자리수를 추출 
	// 2진수 1000 = 2^3 = 8의 자리수 
	binary1000 = temp / 8;					
	temp = temp % 8;					

	// 2진수 100 = 2^2 = 4의 자리수 
	binary100 = temp / 4;					
	temp = temp % 4;					

	// 2진수 10 = 2^1 = 2의 자리수 
	binary10 = temp / 2;					
	temp = temp % 2;					

	// 2진수 1 = 2^0 = 1의 자리수 
	binary1 = temp;

	// 2진수 각 자리수의 값을 바탕으로 10진수를 2진수로 변환 
	binary = binary1000 * 1000 + binary100 * 100 + binary10 * 10 + binary1;	

	// 10진수를 2진수로 변환한 결과를 출력 
	printf( "10진수 %d은 2진수 %d입니다.\n", decimal, binary );

	// 프로그램 종료 
	return 0;
}

