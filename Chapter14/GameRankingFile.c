// C 프로그래밍 - https://codereading101.github.io/C/
// 소스파일 - https://github.com/CodeReading101/C/blob/main/Chapter14/GameRankingFile.c

//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char id[5][2][32] = { { "", "" }, { "", "" }, { "", "" }, { "", "" }, { "", "" } };
	// 먼저 기존 게임랭킹 파일 읽기
	// 파일 열기(읽기모드)
	printf( "게임랭킹 파일이름을 입력하세요: " );
	char filename[1024] = "";
	scanf( "%s", filename );
	FILE *inRankingFile = NULL;
	if ( ( inRankingFile = fopen( filename, "rt" ) ) == NULL ) {
		printf("[오류] 게임랭킹 파일을 열 수 없습니다!");
		return -1;
	}
	// 게임랭킹 한 줄씩 읽기
	int index = 0;
	for (; !feof( inRankingFile ); index++ ) {
		if ( fscanf( inRankingFile, "%s\t%s\n", id[index][0], id[index][1] ) < 2 ) {
			printf( "(오류) 게임랭킹 내용을 읽어올 수 없습니다." );
			break;
		}
	}
	// 파일 닫기(읽기모드)
	fclose( inRankingFile );
	// 새 게임 아이디와 스코어 입력 받기
	printf( "게임 아이디를 입력하세요: " );
	scanf( "%s", id[index][0] );
	printf( "게임 스코어를 입력하세요: " );
	scanf( "%s", id[index][1] );
	// 게임 스코어를 기준으로 정렬
	// 마지막 칸에 가장 큰 값을 저장하면서 한 칸씩 앞으로 영역 좁혀가기
	for ( int last = index; last >= 0; last-- ) {
		// 영역의 첫번째 칸부터 인접한 두 값을 비교하면서
		for ( index = 0; index < last; index++ ) {
			// 앞이 뒤보다 작으면 두 값을 맞바꾸기하면서 앞쪽에 큰 값을 저장
			if ( atoi( id[index][1] ) < atoi( id[index+1][1] ) ) {
				char temp[32];
				strcpy( temp, id[index][0] );
				strcpy( id[index][0], id[index+1][0] );
				strcpy( id[index+1][0], temp );
				strcpy( temp, id[index][1] );
				strcpy( id[index][1], id[index+1][1] );
				strcpy( id[index+1][1], temp );
			}
		}
	}
	// 게임랭킹 파일 업데이트
	// 파일 열기(쓰기모드)
	FILE* outRankingFile = NULL;
	if ( ( outRankingFile = fopen( filename, "wt" ) ) == NULL ) {
		printf( "[오류] 게임랭킹 파일을 열 수 없습니다!" );
		return -1;
	}
	// 게임랭킹 결과 한 줄씩 쓰기
	for ( index = 0; strcmp( id[index][0], "" ); index++ ) {
		fprintf( outRankingFile, "%s\t%s\n", id[index][0], id[index][1] );
		printf( "%d) %s\t%s\n", index+1, id[index][0], id[index][1] );
	}
	// 파일 닫기(쓰기모드)
	fclose( outRankingFile );
	return 0;
}

