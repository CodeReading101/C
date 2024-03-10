// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter02/FoodOrder.c

#include <stdio.h>								

// 프로그램시작 
int main() {
	// 변수 선언 및 초기화
	char mainDish[32] = "";
	char sauce[32] = "";
	char drink[32] = "";

	// 손님에게 주문 받기 
	printf( "주문 도와드리겠습니다, 손님.\n" );	

	// 메인요리 주문 받기 
	printf( "메인요리는 고르셨습니까: " );		
	scanf( "%s", mainDish );			

	// 소스 주문 받기 
	printf( "소스는 어떻게 할까요: " );		
	scanf( "%s", sauce );				

	// 음료 주문 받기 
	printf( "음료는 무엇으로 준비할까요: " );	
	scanf( "%s", drink );				

	// 주문 내역 확인 
	printf( "메인요리는 %s, 소스는 %s, 음료는 %s를 선택하셨습니다. \n",
	         mainDish, sauce, drink );				
	printf( "준비하겠습니다, 잠시만 기다려 주십시오." );

	// 프로그램 종료 
	return 0;
}

