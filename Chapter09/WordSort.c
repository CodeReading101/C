// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter09/WordSort.c

#include <stdio.h>
#include <string.h>

// 프로그램시작
int main() {
	char word[5][32] = { "", "", "", "", "" };
	char temp[32] = "";
	int index = 0;
	int last = 0;

	// 단어들 입력
	for( index = 0; index < 5; index++ )
	{
		printf( "단어를 입력하세요: " );
		scanf( "%s", word[index] );
	}
	// 단어 정렬
	// 영역의 마지막 칸에 가장 큰 값을 저장하면서, 영역을 한 칸씩 앞으로 좁혀가기
	for ( last = 4; last >= 0; last-- )
	{
		// 영역의 첫번째 칸부터 인접한 두 값을 비교하면서
		for ( index = 0; index < last; index++ )
		{
			// 첫 번째 칸 단어보다 알파벳순으로 더 앞에 있는 단어를 만나면 두 단어를 맞바꾸기
			if ( strcmp( word[index], word[index+1] ) > 0 )
			{
				strcpy( temp, word[index] );
				strcpy( word[index], word[index+1] );
				strcpy( word[index+1], temp );
			}
		}
	}

	// 정렬된 단어 출력
	for ( index = 0; index < 5; index++ )
	{
		printf( "%d) %s ", index + 1, word[index] );
	}

	// 프로그램 종료
	return 0;
}

