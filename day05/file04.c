#include <stdio.h>
#include <stdlib.h>

// 에러 핸들링 함수 선언
void error_handling(char* message);

void main(void) { // main 함수의 반환 유형을 void로 변경
    int c; // 파일에서 읽어들일 문자를 저장할 변수
    char name[] = "I'm Roy Lee\n"; // 쓰일 문자열

    FILE* fd; // 원본 파일을 다룰 파일 포인터
    // 원본 파일 열기 (쓰기 모드)
    fd = fopen("lee.txt", "w");
    if (fd == NULL) { // 파일 열기 실패 시
        error_handling("fopen() error for fd");
    }
    fputs(name, fd); // 문자열을 파일에 쓰기
    fclose(fd); // 파일 닫기

    // 원본 파일 열기 (읽기 모드)
    fd = fopen("lee.txt", "r");
    if (fd == NULL) { // 파일 열기 실패 시
        error_handling("fopen() error for original file");
    }

    FILE* fcopy; // 복사본 파일을 다룰 파일 포인터
    // 복사본 파일 열기 (쓰기 모드)
    fcopy = fopen("copy_lee.txt", "w");
    if (fcopy == NULL) { // 파일 열기 실패 시
        error_handling("fopen() error for copy file");
    }

    // 원본 파일로부터 데이터 읽어들여 카피본 파일에 쓰기
    while ((c = fgetc(fd)) != EOF) {
        fputc(c, fcopy); // 문자 하나씩 복사본 파일에 쓰기
    }

    fclose(fd); // 원본 파일 닫기
    fclose(fcopy); // 복사본 파일 닫기

    printf("File created and copied successfully.\n");
}

// 에러 핸들링 함수 정의
void error_handling(char* message) {
    perror(message); // 에러 메시지 출력
    exit(EXIT_FAILURE); // 프로그램 종료
}
/*
"lee.txt" 파일을 생성하고 해당 파일의 내용을 "copy_lee.txt" 파일로 복사하는 프로그램입니다

fopen() 함수를 사용하여 파일을 열고, 열기에 실패한 경우 에러 핸들링을 수행합니다.

fputs() 함수를 사용하여 문자열을 파일에 씁니다.

파일에서 문자를 읽어들이고, fputc() 함수를 사용하여 해당 문자를 복사본 파일에 씁니다.

모든 파일을 사용한 후에는 fclose() 함수를 사용하여 파일을 닫습니다.
*/
