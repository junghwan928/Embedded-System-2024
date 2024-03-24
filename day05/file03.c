#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

// 에러 핸들링 함수 선언
void error_handling(char* message);

void main(void) { // main 함수의 반환 유형을 void로 변경
    int fd;
    char buf[] = "Let's go!\n";

    // 파일 열기
    fd = open("data.txt", O_CREAT | O_WRONLY | O_TRUNC);

    // 파일 열기에 실패한 경우
    if(fd == -1)
        error_handling("open() error!");

    // 파일 디스크립터 출력
    printf("file descriptor: %d \n", fd);

    // 파일에 데이터 쓰기
    if(write(fd, buf, sizeof(buf)) == -1)
        error_handling("write() error!");

    // 파일 닫기
    close(fd);

    // main 함수는 반환 유형이 void이므로 명시적인 반환 문을 추가할 필요 없음
}

// 에러 핸들링 함수 정의
void error_handling(char* message) {
    fputs(message, stderr); // 에러 메시지 출력
    fputc('\n', stderr);    // 새로운 줄로 이동
    exit(1);                // 프로그램 종료
}
