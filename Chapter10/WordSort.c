// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter10/WordSort.c

#include <stdio.h>
#include <string.h>
int main() {
	char words[5][32] = { "", "", "", "", "" };
	// 단어들 입력
	for ( int index = 0; index < 5; index++ ) {
		printf( "단어를 입력하세요: " );
		scanf( "%s", words[index] );
	}
	// 단어 정렬
	// 마지막 칸에 가장 큰 값을 저장하면서 한 칸씩 앞으로 영역 좁혀가기
	for ( int last = 4; 0 < last; last-- ) {
		// 영역의 첫번째 칸부터 인접한 두 값을 비교하면서
		for ( int index = 0; index < last; index++ ) {
			// 앞칸 단어가 뒤칸 단어보다 알파벳순으로 뒤면, 두 단어를 맞바꾸기
			if ( strcmp( words[index], words[index+1] ) > 0 ) {
				char temp[32] = "";
				strcpy( temp, words[index] );
				strcpy( words[index], words[index+1] );
				strcpy( words[index+1], temp );
			}
		}
	}
	// 정렬된 단어 출력
	for ( int index = 0; index < 5; index++ )
		printf( "%s ", words[index] );
	return 0;
}
