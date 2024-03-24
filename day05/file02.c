/* File 만들기 */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void main() {
    char msg[] = "Linux Test!!";
    int fd;

    // 파일을 열고 파일 디스크립터를 반환
    fd = open("test02.txt", O_CREAT | O_WRONLY);

    // 파일 열기에 실패한 경우
    if(fd == -1) {
        printf("file open error");
        exit(1); // 프로그램 종료
    }

    // 파일 디스크립터 출력
    printf("file descriptor: %d\n", fd);

    // 파일에 데이터를 쓰기
    if(write(fd, msg, sizeof(msg)) == -1) {
        printf("file write error");
    }

    // 파일 닫기
    close(fd);
}
