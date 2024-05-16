// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter13/Color.c

#include <stdio.h>
// 프로그램 시작
int main() {
	// 열거형으로 색깔 목록 정의
	typedef enum _Color { RED = 1, YELLOW = 2, GREEN = 3, BLUE = 4, PURPLE = 5 } Color;
	Color color = PURPLE;

	// 사용자에게 색깔 입력 받기
	printf( "빨강(1), 노랑(2), 초록(3), 파랑(4), 보라(5) 중 하나를 숫자로 입력하세요: ");
	scanf( "%d", &color );

	// 재미로 보는 색깔 심리테스트 결과 출력
	switch ( color ) {
		case RED:
			printf( "빨강색을 선택한 당신은 " );
			printf( "진취적이고 열정적이며 개방적이고 자신감이 넘치는군요 ");
			break;
		case YELLOW:
			printf( "노랑색을 선택한 당신은 " );
			printf( "밝고 솔직하고 명랑하며 호기심도 강하고 주의력과 집중력이 높네요");
			break;
		case GREEN:
			printf( "초록색을 선택한 당신은 " );
			printf( "성실하고 참을성이 많으며 충성심이 강하고 의리가 있군요");
			break;
		case BLUE:
			printf( "파랑색을 선택한 당신은 " );
			printf( "차분하고 침착하고 이성적이며 어떤 일이든 진지하게 열심히 하는군요");
			break;
		case PURPLE:
			printf( "보라색을 선택한 당신은 " );
			printf( "섬세하고 감수성이 풍부하며 관찰력이 있고 예술적 재능이 뛰어나군요");
	}

	// 프로그램 종료
	return 0;
}

