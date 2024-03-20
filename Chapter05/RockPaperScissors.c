// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter05/RockPaperScissors.c

#include <stdio.h> 
// 프로그램시작 
int main() {
	// 변수 초기화
	int playerA = 0;
	int playerB = 0;

	// A양이 가위바위보중 하나를 선택 
	printf( "A양, 가위(1), 바위(2), 보(3) 중 하나를 숫자로 입력하세요: " );
	scanf( "%d", &playerA );

	// A양이 선택한 결과를 출력  
	switch( playerA ) {
	case 1:										
		printf( "가위를 냈습니다.\n" ); 
		break;									
	case 2:										
		printf( "바위를 냈습니다.\n" ); 
		break;									
	case 3:										
		printf( "보를 냈습니다.\n" ); 
		break;									
	default:									
		printf( "가위바위보를 잘못 냈습니다.\n" ); 
	}

	// B군이 가위바위보중 하나를 선택 
	printf("B군, 가위(1), 바위(2), 보(3) 중 하나를 숫자로 입력하세요: ");
	scanf( "%d", &playerB );

	// B군이 선택한 결과를 출력 
	switch( playerB ) {
	case 1:										
		printf( "가위를 냈습니다.\n" ); 	
		break;									
	case 2:										
		printf( "바위를 냈습니다.\n" ); 
		break;									
	case 3:										
		printf( "보를 냈습니다.\n" ); 
		break;									
	default:									
		printf( "가위바위보를 잘못 냈습니다.\n" ); 
	}

	// A양과 B군의 가위바위보 승패 출력 
	// A양과 B군이 같으면 비김  
	if ( playerA == playerB ) {
		printf( "\nA양과 B군이 비겼습니다.\n" ); 
	}
	// A양이 가위이고 B군이 보를 낸 경우 A양이 승리 
	else if ( ( playerA == 1 ) && ( playerB == 3 ) ) {	
		printf( "\nA양이 이겼습니다.\n" ); 
	}
	// A양이 바위이고 B군이 가위를 낸 경우 A양이 승리 
	else if ( ( playerA == 2 ) && ( playerB == 1 ) ) {
		printf( "\nA양이 이겼습니다.\n" ); 
	}
	// A양이 보이고 B군이 바위를 낸 경우 A양이 승리 
	else if ( ( playerA == 3 ) && ( playerB == 2 ) ) {
		printf( "\nA양이 이겼습니다.\n" ); 
	}
	// 나머지는 B군이 승리  
	else {
		printf( "\nB군이 이겼습니다.\n" ); 
	}

	// 프로그램 종료 
	return 0;
}

