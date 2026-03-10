// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter02/Chat.c

#include <stdio.h>
int main() {
	// 친구와 대화하기
	// 이름 물어보고 답하기
	printf( "안녕? 넌 이름이 뭐야: " );
	char name[32] = "";
	scanf( "%s", name );
	printf( "만나서 반가워, %s. \n", name );
	// 직업 물어보고 답하기
	printf( "넌 주로 뭐하고 살아: " );
	char job[32] = "";
	scanf( "%s", job );
	printf( "%s? 나도 마찬가지야 ㅎㅎ \n", job );
	// 취미 물어보고 답하기
	printf( "그럼 심심할 때 뭐하니: " );
	char hobby[32] = "";
	scanf( "%s", hobby );
	printf( "%s? 나랑 똑같네. \n", hobby );
	// 좋아하는 색 물어보고 답하기
	printf( "혹시 좋아하는 색은 뭐야 : " );
	char color[32] = "";
	scanf( "%s", color );
	printf( "%s이라구? 와! 이것도 나랑 똑같네. \n", color );
	// 친하게 지내자고 인사하기
	printf( "앞으로 우리 친하게 지내자.\n" );
	return 0;
}

