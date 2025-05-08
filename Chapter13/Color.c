// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter13/Color.c

//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void getColor( char *favoriteColor ) {
	printf( "빨강, 노랑, 초록, 파랑, 보라 중 하나를 입력하세요: " );
	scanf( "%s", favoriteColor );
}
int main() {
	char favoriteColor[10] = "";
	// 좋아하는 색깔 입력받기
	getColor( favoriteColor );
	// 색깔별 심리테스트 결과 출력
	if ( !strcmp( favoriteColor, "빨강" ) ) {
		printf( "빨강색을 선택한 당신은 " );
		printf( "진취적이고 열정적이며 개방적이고 자신감이 넘치는군요 " );
	}
	else if ( !strcmp( favoriteColor, "노랑" ) ) {
		printf( "노랑색을 선택한 당신은 " );
		printf( "밝고 솔직하고 명랑하며 호기심도 강하고 주의력과 집중력이 높네요" );
	}
	else if ( !strcmp( favoriteColor, "초록" ) ) {
		printf( "초록색을 선택한 당신은 " );
		printf( "성실하고 참을성이 많으며 충성심이 강하고 의리가 있군요" );
	}
	else if ( !strcmp( favoriteColor, "파랑" ) ) {
		printf( "파랑색을 선택한 당신은 " );
		printf( "차분하고 침착하고 이성적이며 어떤 일이든 진지하게 열심히 하는군요" );
	}
	else {
		printf( "보라색을 선택한 당신은 " );
		printf( "섬세하고 감수성이 풍부하며 관찰력이 있고 예술적 재능이 뛰어나군요" );
	}
	return 0;
}

